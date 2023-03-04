/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample1.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 14:06:43 by alambert          #+#    #+#             */
/*   Updated: 2023/03/03 14:34:07 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample1.class.hpp"


Sample1::Sample1(/* args */) {
	std::cout << "Constructor Sample 1 called" << std::endl;
	return;
}

Sample1::~Sample1() {
	std::cout << "Destructor Sample 1 called" << std::endl;
	return;
}

void	Sample1::bar(void) const {
	std::cout << "Member function bar Sample 1 called" << std::endl;
	return;
}