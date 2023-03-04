/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 14:46:29 by alambert          #+#    #+#             */
/*   Updated: 2023/03/03 17:09:59 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

int	main(void) {

	Sample	instance0;

	instance0.setFoo(42);
	std::cout << "instance0.getFoo(): " << instance0.getFoo() << std::endl;
	instance0.setFoo(-42);
	std::cout << "instance0.getFoo(): " << instance0.getFoo() << std::endl;

	return 0;
}