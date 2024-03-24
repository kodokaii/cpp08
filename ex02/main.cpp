/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaerema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 15:09:25 by nlaerema          #+#    #+#             */
/*   Updated: 2024/03/24 15:18:00 by nlaerema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.tpp"
#include <iostream>
#include <list>

void	mStack(void)
{
	MutantStack<int> mstack;
	
	mstack.push(5);
	mstack.push(17);

	std::cout << mstack.top() << std::endl;

	mstack.pop();

	std::cout << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(42);
	mstack.push(21);
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
}

void	mList(void)
{
	std::list<int> mlist;
	
	mlist.push_back(5);
	mlist.push_back(17);

	std::cout << mlist.back() << std::endl;

	mlist.pop_back();

	std::cout << mlist.size() << std::endl;

	mlist.push_back(3);
	mlist.push_back(5);
	mlist.push_back(737);
	mlist.push_back(42);
	mlist.push_back(21);
	mlist.push_back(0);

	std::list<int>::iterator it = mlist.begin();
	std::list<int>::iterator ite = mlist.end();

	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::list<int> s(mlist);
}

int main()
{
	mStack();
	std::cout << std::endl << std::endl;
	mList();
	return 0;
}
