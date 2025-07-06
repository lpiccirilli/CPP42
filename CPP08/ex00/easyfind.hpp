/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luca <luca@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 17:58:59 by luca              #+#    #+#             */
/*   Updated: 2025/07/06 19:21:14 by luca             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include <deque>

template <typename T>
int easyfind(const T &container, int n)
{
	if (std::find(container.begin(), container.end(), n) == container.end())
		return -1;
	return n;
}

#endif
