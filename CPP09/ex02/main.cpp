#include "PmergeMe.hpp"

int main(int ac, char **av)
{
	if (ac < 2)
	{
		std::cerr << "usage: ./PmergeMe [operation]" << std::endl;
		return 1;
	}
	try
	{
		PmergeMe pm;
		std::vector<int> check(pm.check_args(av + 1));
		std::cout << "Before : ";
		for (std::vector<int>::iterator it_check = check.begin(); it_check != check.end(); it_check++)
			std::cout << *it_check << " ";
		std::cout << std::endl;
		std::vector<int> v;
		clock_t start_vector = clock();
		pm.insert_vector(av + 1, v);
		std::vector<int> vector_sorted = pm.merge_vector(v);
		clock_t end_vector = clock();
		std::cout << "After : ";
		for (std::vector<int>::iterator it_sorted = vector_sorted.begin(); it_sorted != vector_sorted.end(); it_sorted++)
			std::cout << *it_sorted << " ";
		std::cout << std::endl;
		std::cout << "Time to process a range of " << v.size() << " elements with std::vector : "
			<< static_cast<double>(end_vector - start_vector) / CLOCKS_PER_SEC * 1000 << " us" <<std::endl;
		std::deque<int> d;
		clock_t start_deque = clock();
		pm.insert_deque(av + 1, d);
		std::deque<int> deque_sorted = pm.merge_deque(d);
		clock_t end_deque = clock();
		std::cout << "Time to process a range of " << d.size() << " elements with std::deque : "
			<< static_cast<double>(end_deque - start_deque) / CLOCKS_PER_SEC * 1000 << " us" <<std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "invalid input" << '\n';
	}
	return 0;
}
