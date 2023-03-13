/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 18:37:39 by alambert          #+#    #+#             */
/*   Updated: 2023/03/03 19:26:40 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

void	f0(void) {
	Sample	instance0;

	std::cout << "Number of instances (f0): " << Sample::getNbInst() << std::endl;
	return;
}

void	f1(void) {
	Sample	instance1;

	std::cout << "Number of instances (f1): " << Sample::getNbInst() << std::endl;
	f0();
	
	return;
}


int	main(void) {

	std::cout << "Number of instances (main a): " << Sample::getNbInst() << std::endl;
	f1();
	std::cout << "Number of instances (main b): " << Sample::getNbInst() << std::endl;

	return 0;
}