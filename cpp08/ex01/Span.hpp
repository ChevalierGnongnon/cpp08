/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <chhoflac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 14:28:43 by chhoflac          #+#    #+#             */
/*   Updated: 2025/06/12 13:12:08 by chhoflac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <set>
#include <exception>

class Span{
	private:
		std::multiset<int>	contain;
		unsigned int		max;
	public:
		Span();
		Span(unsigned int n);
		Span(const Span &src);
		~Span();
		
		Span	&operator=(const Span &src);
		
		void	addNumber(int n);
		int		shortestSpan() const;
		int		longestSpan()const;

		public:
		class tooManyNumbersException : public std::exception {
			public:
				virtual const char* what() const throw();
		};

		class notEnoughNumbersException : public std::exception {
			public:
				virtual const char* what() const throw();
		};
};