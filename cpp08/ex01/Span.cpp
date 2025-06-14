/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <chhoflac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 13:46:30 by chhoflac          #+#    #+#             */
/*   Updated: 2025/06/14 10:58:59 by chhoflac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>
#include <algorithm>

Span::Span(){}

Span::Span(unsigned int n) : max(n){
	
}

Span::Span(const Span &src) : max(src.max){
	contain = src.contain;
}

Span &Span::operator=(const Span &src){
	if (this != &src){
		this->max = src.max;
		this->contain = src.contain;
	}
	return (*this);
}

Span::~Span(){
	std::cout << "Span destructor called" << std::endl;
}

void Span::addNumber(int n){
	if (contain.size() < max){
		this->contain.insert(n);
		return;
	}
	throw tooManyNumbersException();
}

int Span::shortestSpan()const{
	if (contain.size() < 2)
		throw notEnoughNumbersException();
	int tmp;
	std::multiset<int>::const_iterator it = contain.begin();
	std::multiset<int>::const_iterator next = it;
	++next;

	tmp = *next - *it;
	while (next != contain.end()){
		if (tmp > (*next - *it))
			tmp = *next - *it; 
		++next;
		++it;
	}
	return (tmp);
}

int Span::longestSpan()const{
	if (contain.size() < 2)
		throw notEnoughNumbersException();
	return(*contain.rbegin() - *contain.begin());
}

const char* Span::tooManyNumbersException::what() const throw(){
	return ("Error ! too many numbers in multiset container");
}

const char*Span::notEnoughNumbersException::what() const throw(){
	return ("Error ! not Enough numbers");
}

void Span::printContents() const {
	for (std::multiset<int>::const_iterator it = contain.begin(); it != contain.end(); ++it)
		std::cout << *it << std::endl;
}

