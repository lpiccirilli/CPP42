#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <deque>
#include <cstdlib>
#include <exception>
#include <cstring>
#include <algorithm>

class PmergeMe
{
	public:
		PmergeMe();
		void	insert_vector(char **args, std::vector<int> &vector);
		void	insert_deque(char **args, std::deque<int> &deque);
		std::vector<int>	check_args(char **args);
		std::deque<int>	merge_deque(std::deque<int> container);
		std::vector<int>	merge_vector(std::vector<int> container);
};

#endif
