/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaerema <nlaerema@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 10:58:17 by nlaerema          #+#    #+#             */
/*   Updated: 2024/03/24 13:22:32 by nlaerema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <vector>
#include <climits>
#include <cstdlib>
#include <stdexcept>
#include <algorithm>

class Span: protected std::vector<int>
{
	protected:
		unsigned int	max;

	public:
						Span(unsigned int max = 1);
						Span(Span const &other);
						~Span(void);
		void			addNumber(int n);	
		unsigned int	shortestSpan(void);
		unsigned int	longestSpan(void);
		Span			&operator=(Span const &other);

		template <class InputIterator>
		void			addRange(InputIterator begin, InputIterator end)
		{
			if (this->max < this->size() + (end - begin))
				throw (std::out_of_range("no space left"));
			this->insert(this->end(), begin, end);
		}
};
