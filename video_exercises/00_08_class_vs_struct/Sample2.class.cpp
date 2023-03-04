/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample2.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 14:06:43 by alambert          #+#    #+#             */
/*   Updated: 2023/03/03 14:36:09 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample2.class.hpp"


Sample2::Sample2() {
	std::cout << "Constructor Sample 2 called" << std::endl;
	return;
}

Sample2::~Sample2() {
	std::cout << "Destructor Sample 2 called" << std::endl;
	return;
}

void	Sample2::bar(void) const {
	std::cout << "Member function bar Sample 2 called" << std::endl;
	return;
}