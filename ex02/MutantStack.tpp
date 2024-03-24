/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaerema <nlaerema@student.42lehavre.fr>	+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 10:58:17 by nlaerema          #+#    #+#             */
/*   Updated: 2024/03/24 15:08:52 by nlaerema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

template <class T, class Container>
typename MutantStack<T, Container>::iterator	MutantStack<T, Container>::begin(void)
{
	return (this->c.begin());
}

template <class T, class Container>
typename MutantStack<T, Container>::iterator	MutantStack<T, Container>::end(void)
{
	return (this->c.end());
}
