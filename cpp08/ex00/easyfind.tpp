/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <chhoflac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 11:00:15 by chhoflac          #+#    #+#             */
/*   Updated: 2025/06/10 10:38:13 by chhoflac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <algorithm>
#include <exception>


template <typename T>
typename T::iterator easyfind(T &contain, int value){
	typename T::iterator ret;
	ret = std::find(contain.begin(), contain.end(), value);
	if (ret == contain.end())
		throw std::runtime_error("Value not found in container");
	return (ret);
}