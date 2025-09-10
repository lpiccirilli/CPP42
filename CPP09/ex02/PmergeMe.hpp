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
		void gen_jacobsthal_order(std::vector<size_t> &order, size_t m);
		std::vector<int>	check_args(char **args);
		template <typename Container>
		Container merge(const Container &input);

};

template <typename Container>
Container PmergeMe::merge(const Container &input)
{
    if (input.size() <= 1)
        return input;

    // 1. Pair elements (small, big)
    std::vector<std::pair<int,int> > pairs;
    typename Container::const_iterator it = input.begin();
    while (it != input.end()) {
        int first = *it++;
        if (it == input.end()) {
            pairs.push_back(std::make_pair(first, -1)); // mark leftover
            break;
        }
        int second = *it++;
        if (first < second)
            pairs.push_back(std::make_pair(first, second));
        else
            pairs.push_back(std::make_pair(second, first));
    }

    // Handle leftover
    bool hasLeftover = false;
    int leftover = 0;
    if (!pairs.empty() && pairs.back().second == -1) {
        hasLeftover = true;
        leftover = pairs.back().first;
        pairs.pop_back();
    }

    // 2. Collect "bigs" and sort recursively
    Container bigs;
    for (size_t k = 0; k < pairs.size(); ++k)
        bigs.push_back(pairs[k].second);

    Container sortedChain = merge(bigs);

    // 3. Insert the "small" paired with the smallest big
    size_t firstIndex = 0;
    for (; firstIndex < pairs.size(); ++firstIndex) {
        if (pairs[firstIndex].second == *sortedChain.begin())
            break;
    }
    sortedChain.insert(sortedChain.begin(), pairs[firstIndex].first);

    // 4. Insert remaining smalls in Jacobsthal order
    std::vector<size_t> order;
    gen_jacobsthal_order(order, pairs.size());

    for (size_t t = 0; t < order.size(); ++t) {
        size_t idx = order[t];
        if (idx == firstIndex) continue;

        int small = pairs[idx].first;
        int big   = pairs[idx].second;

        typename Container::iterator bigPos =
            std::lower_bound(sortedChain.begin(), sortedChain.end(), big);

        typename Container::iterator pos =
            std::lower_bound(sortedChain.begin(), bigPos, small);

        sortedChain.insert(pos, small);
    }

    // 5. Insert leftover
    if (hasLeftover) {
        typename Container::iterator pos =
            std::lower_bound(sortedChain.begin(), sortedChain.end(), leftover);
        sortedChain.insert(pos, leftover);
    }

    return sortedChain;
}


#endif
