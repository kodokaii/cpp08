/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaerema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 13:32:36 by nlaerema          #+#    #+#             */
/*   Updated: 2024/03/23 16:38:32 by nlaerema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <vector>
#include <deque>
#include <list>
#include <iostream>
#include "easyfind.hpp"

int main()
{
	std::vector<int>	vect(5, 0);
	std::deque<int>		deq(5, 0);
	std::list<int>		list;
	int					i;

	for (i = 0; i < 5; i++)
	{
		vect[i] = i;
		deq[i] = i;
		list.push_back(i);
	}

	std::cout << *easyfind(vect, 2) << std::endl;
	std::cout << *easyfind(deq, 3) << std::endl;
	std::cout << *easyfind(list, 4) << std::endl;
}
