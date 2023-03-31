/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 16:34:46 by alambert          #+#    #+#             */
/*   Updated: 2023/03/31 12:16:21 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(){

	ClapTrap	Cartman("Eric");

	Cartman.attack("Butters");
	
	std::cout << std::endl << std::endl;

	ScavTrap	Marsh("Stan");

	Marsh.attack("Eric");

	std::cout << std::endl << std::endl;
	
	FragTrap	MrHankey("the Christmas Poo");

	MrHankey.attack("Eric");

	std::cout << std::endl << std::endl;
	
	return (0);
}