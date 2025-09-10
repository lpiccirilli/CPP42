#include "PmergeMe.hpp"


PmergeMe::PmergeMe()
{

}

int check_element(char *element)
{
	int i = 0;
	if (std::strlen(element) > 10 || std::strlen(element) == 0)
		return 1;
	if (std::strlen(element) == 10)
	{
		if (std::strcmp(element, "2147483647") > 0)
			return 1;
	}
	while(element[i] != '\0')
	{
		if (element[i] < '0' || element[i] > '9')
			return 1;
		i++;
	}
	return 0;
}

std::vector<int> PmergeMe::check_args(char **args)
{
	std::vector<int> temp;
	while(*args != NULL)
	{
		if (check_element(*args))
			throw std::exception();
		temp.push_back(std::atoi(*args));
		args++;
	}
	return temp;
}

void PmergeMe::insert_vector(char **args, std::vector<int> &vector)
{
	while(*args != NULL)
	{
		vector.push_back(std::atoi(*args));
		args++;
	}
}

void PmergeMe::insert_deque(char **args, std::deque<int> &deque)
{
	while(*args != NULL)
	{
		deque.push_back(std::atoi(*args));
		args++;
	}
}

void PmergeMe::gen_jacobsthal_order(std::vector<size_t> &order, size_t totalPairs)
{
    order.clear();
    if (totalPairs == 0) return;

    // Build Jacobsthal sequence up to totalPairs
    std::vector<size_t> J;
    J.push_back(0); // J0
    J.push_back(1); // J1
    while (J.back() < totalPairs)
        J.push_back(J[J.size()-1] + 2 * J[J.size()-2]);

    // Translate into insertion order
    size_t prev = 1;
    for (size_t i = 2; i < J.size(); ++i) {
        size_t curr = J[i];
        if (curr > totalPairs) curr = totalPairs;

        for (size_t j = curr; j-- > prev; )
            order.push_back(j);

        prev = curr;
    }

    // Fill remaining indices
    if (prev < totalPairs) {
        for (size_t j = totalPairs; j-- > prev; )
            order.push_back(j);
    }
}
