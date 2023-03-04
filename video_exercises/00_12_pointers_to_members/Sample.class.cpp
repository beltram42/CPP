/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 20:53:40 by alambert          #+#    #+#             */
/*   Updated: 2023/03/03 22:06:34 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

Sample::Sample(void) : Foo(0) {
	std::cout << "Constructor called" << std::endl;
	return;
}

Sample::~Sample(void) {
	std::cout << "Destructor called" << std::endl;
	return;
}

void	Sample::bar(void) const {
	std::cout << "Member function bar called" << std::endl;
	return;
}