/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 10:53:21 by alambert          #+#    #+#             */
/*   Updated: 2023/03/25 14:36:53 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample.class.hpp"


// Constructor Destructor ************************************************** //

Sample::Sample(void)	{
	std::cout << "Constructor called" << std::endl;
	return;
}

Sample::~Sample(void)	{
	std::cout << "Destructor called" << std::endl;
	return;
}
// ************************************************** Constructor Destructor //



// Member functions ******************************************************** //

void	Sample::bar(char const c) const	{
	std::cout << "Member function bar called with char orverload: " << c << std::endl;
	return;
}

void	Sample::bar(int const n) const	{
	std::cout << "Member function bar called with int orverload: " << n << std::endl;
	return;
}

void	Sample::bar(float const z) const	{
	std::cout << "Member function bar called with float orverload: " << z << std::endl;
	return;
}

void	Sample::bar(Sample const & i) const	{
	(void)i;
	std::cout << "Member function bar called with Sample class orverload" << std::endl;
	return;
}
// ******************************************************** Member functions //



// Non Member functions **************************************************** //
// **************************************************** Non Member functions //