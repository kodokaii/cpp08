/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaerema <nlaerema@student.42lehavre.fr>	+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 10:58:17 by nlaerema          #+#    #+#             */
/*   Updated: 2024/03/24 13:20:50 by nlaerema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int max): max(max)
{
}

Span::Span(Span const &other):	std::vector<int>(other),
								max(other.max)
{
}

Span::~Span(void)
{
}

void			Span::addNumber(int n)
{
	if (this->max <= this->size())
		throw (std::out_of_range("no space left"));
	this->push_back(n);
}

unsigned int	Span::shortestSpan(void)
{
	unsigned int	minSpan;
	unsigned int	i;

	minSpan = UINT_MAX;
	if (this->size() < 2)
		throw (std::domain_error("no span can be found"));
	std::sort(this->begin(), this->end());
	for (i = 1; i < this->size(); i++)
		minSpan = std::min(minSpan, static_cast<unsigned int>(std::abs((*this)[i] - (*this)[i - 1])));	
	return (minSpan);
}

#include <iostream>

unsigned int	Span::longestSpan(void)
{
	if (this->size() < 2)
		throw (std::domain_error("no span can be found"));
	return (*std::max_element(this->begin(), this->end()) - *std::min_element(this->begin(), this->end()));
}

Span	&Span::operator=(Span const &other)
{
	*static_cast<std::vector<int> *>(this) = other;
	max = other.max;
	return (*this);
}
