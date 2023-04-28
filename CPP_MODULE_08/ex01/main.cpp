/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 16:34:46 by alambert          #+#    #+#             */
/*   Updated: 2023/04/27 15:47:45 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

// int	main(void)	{
// 	Span sp = Span(5);
// 	sp.addNumber(6);
// 	sp.addNumber(3);
// 	sp.addNumber(17);
// 	sp.addNumber(9);
// 	sp.addNumber(11);

// 	std::cout << sp.shortestSpan() << std::endl; // Output: 2
// 	// shortestspan sort a copy of sp: sp stays unchanged;

// 	std::cout << sp << std::endl; // Output: > 6 | 3 | 17 | 9 | 11 <

// 	std::cout << sp.longestSpan() << std::endl; // Output: 14 
// 	// longestspan sort sp directly;
// 	std::cout << sp; // Output: > 3 | 6 | 9 | 11 | 17 <
	
// 	return (0);
// }


int main() {
    Span s(5);
    s.addNumber(3);
    s.addNumber(7);
    s.addNumber(2);
    s.addNumber(8);
    s.addNumber(4);
	std::cout << s << std::endl;
    std::cout << "Shortest span: " << s.shortestSpan() << std::endl; // Output: 1
    std::cout << "Longest span: " << s.longestSpan() << std::endl; // Output: 6
    try {
        s.addNumber(1); // This should throw an exception
    }
    catch (std::exception& e) {
        std::cerr << e.what() << std::endl; // Output: Span is full.
    }
    try {
        Span empty_span(0);
        empty_span.shortestSpan(); // This should throw an exception
    }
    catch (std::exception& e) {
        std::cerr << e.what() << std::endl; // Output: Not enough numbers in Span.
    }
    return 0;
}
