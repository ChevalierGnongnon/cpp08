/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <chhoflac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 13:45:34 by chhoflac          #+#    #+#             */
/*   Updated: 2025/06/14 11:57:37 by chhoflac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <list>
#include "Span.hpp"

int main()
{
	Span sp = Span(20);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	std::vector<int> v;
	v.push_back(50);
	v.push_back(10);
	v.push_back(30);
	v.push_back(20);

	try {
		sp.addNumber(v.begin(), v.end());
	} catch (std::exception &e) {
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}
	// sp.printContents();
	
	v.push_back(51);
	v.push_back(11);
	v.push_back(31);
	v.push_back(21);
	
	v.push_back(52);
	v.push_back(12);
	v.push_back(32);
	v.push_back(22);
	try {
		sp.addNumber(v.begin(), v.end());
	} catch (std::exception &e) {
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}
	// sp.printContents();
	std::cout << "Shortest: " << sp.shortestSpan() << std::endl;
	std::cout << "Longest: " << sp.longestSpan() << std::endl;	
	v.push_back(53);
	v.push_back(13);
	v.push_back(33);
	v.push_back(23);
	try {
		sp.addNumber(v.begin(), v.end());
	} catch (std::exception &e) {
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}

	std::cout << "Shortest: " << sp.shortestSpan() << std::endl;
	std::cout << "Longest: " << sp.longestSpan() << std::endl;
	// sp.printContents();

	std::list<int> lst;
	lst.push_back(100);
	lst.push_back(200);
	lst.push_back(300);

	Span sp2 = Span(4);
	sp2.addNumber(lst.begin(), lst.end());
	std::cout << sp2.shortestSpan() << std::endl;
	std::cout << sp2.longestSpan() << std::endl;

	int arr[] = {5, 15, 25};
	Span sp3(5);
	sp3.addNumber(arr, arr + 3);
	// sp3.printContents();
	std::cout << sp3.shortestSpan() << std::endl;
	std::cout << sp3.longestSpan() << std::endl;
}