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

std::vector<int> PmergeMe::merge_vector(std::vector<int> container)
{
	std::vector<int> temp(container);
	if (temp.size() < 2)
		std::stable_sort(temp.begin(), temp.end());
	else
	{
		std::vector<int>::iterator mid = temp.begin() + (temp.size() / 2);
		std::vector<int> left(temp.begin(), mid);
		std::vector<int> right(mid, temp.end());

		left = merge_vector(left);
		right = merge_vector(right);

		temp.clear();
		std::merge(left.begin(), left.end(), right.begin(), right.end(), std::back_inserter(temp));
	}
	return temp;
}

std::deque<int> PmergeMe::merge_deque(std::deque<int> container)
{
	std::deque<int> temp(container);
	if (temp.size() < 2)
		std::stable_sort(temp.begin(), temp.end());
	else
	{
		std::deque<int>::iterator mid = temp.begin() + (temp.size() / 2);
		std::deque<int> left(temp.begin(), mid);
		std::deque<int> right(mid, temp.end());

		left = merge_deque(left);
		right = merge_deque(right);

		temp.clear();
		std::merge(left.begin(), left.end(), right.begin(), right.end(), std::back_inserter(temp));
	}
	return temp;
}
