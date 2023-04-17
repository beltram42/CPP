/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 16:34:46 by alambert          #+#    #+#             */
/*   Updated: 2023/04/17 16:11:06 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main( void ) {
	std::string strArray[] = {"Salu", "Sava?"};
	int			intArray[] = {4, 5, 6};;

    iter(strArray, 2, printArg);
	std::cout << std::endl;
	iter(strArray, 2, printAddress);
	std::cout << std::endl << std::endl;


    iter(intArray, 3, printArg);
	std::cout << std::endl;
	iter(intArray, 3, printAddress);
	std::cout << std::endl;
	
	return 0;
}