/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 16:34:46 by alambert          #+#    #+#             */
/*   Updated: 2023/03/31 16:22:52 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap Cartman("Eric");
    ClapTrap Marsh("Stan");

    ClapTrap Kenny;

    Cartman.attack("Stan");
	
    std::cout << Cartman;
    std::cout << Marsh;
    
    Marsh.takeDamage(10);
    std::cout << Marsh;

    for (int i = 0; i < 10; i++)
    {
        Marsh.attack("Eric");
    }
    std::cout << Marsh;

    Marsh.attack("Eric");
    Marsh.beRepaired(2);
    Marsh.takeDamage(3);

	std::cout << std::endl << std::endl;
    std::cout << MAGENTA << "******************* Copy *******************" << CLEAR << std::endl;
	ClapTrap Butters(Marsh);
    std::cout << Butters;

	std::cout << std::endl << std::endl;
    std::cout << MAGENTA << "*************** Assignation ****************" << CLEAR << std::endl;
    Kenny = Cartman;
    std::cout << Kenny;

    Cartman.takeDamage(2);
    std::cout << Cartman;
    Cartman.beRepaired(2);
    std::cout << Cartman;
}