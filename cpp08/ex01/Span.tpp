/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.tpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <chhoflac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 10:58:26 by chhoflac          #+#    #+#             */
/*   Updated: 2025/06/14 10:59:21 by chhoflac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

template <typename Iterator>
void Span::addNumber(Iterator begin, Iterator end){
	unsigned int check = std::distance(begin, end);
	if ((check + contain.size()) > max)
		throw tooManyNumbersException();
	contain.insert(begin, end);
}