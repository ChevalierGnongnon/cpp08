/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <chhoflac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 12:01:31 by chhoflac          #+#    #+#             */
/*   Updated: 2025/05/27 11:41:15 by chhoflac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>

int main(void){
	std::vector<int>			contain;
	std::vector<int>::iterator	i;
	contain.push_back(10);
	contain.push_back(20);
	contain.push_back(30);
	try {
		i = easyfind(contain, 20);
		std::cout << *i << std::endl;
	}
	catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}
	std::list<int> contain2;
	std::list<int>::iterator j;
	contain2.push_back(10);
	contain2.push_back(20);
	contain2.push_back(30);
	try {
		j = easyfind(contain2, 30);
		std::cout << *j << std::endl;
	}
	catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}
}