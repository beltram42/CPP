/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 11:41:13 by alambert          #+#    #+#             */
/*   Updated: 2023/03/03 13:56:09 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

int	main(void) {
	Sample	instance0;

	instance0.publicFoo = 42;
	std::cout << "instance0.publicFoo = " << instance0.publicFoo << std::endl;
	/*
	instance0._privateFoo = 42;
	std::cout << "instance0._privateFoo = " << instance0._privateFoo = << std::endl;
	*/

	instance0.publicBar();
	/*
	instance0._privateBar();	
	*/

	return 0;
}
