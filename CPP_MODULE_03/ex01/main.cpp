/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 16:34:46 by alambert          #+#    #+#             */
/*   Updated: 2023/03/31 16:14:41 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
    ScavTrap Cartman("Eric");
    ScavTrap Marsh("Stan");

    ClapTrap Kenny; //Default

    std::cout << Cartman;
    std::cout << Marsh;

    Cartman.attack("Stan");
    std::cout << Cartman;
    std::cout << Marsh;
    
    Marsh.takeDamage(100);
    std::cout << Marsh;

    /*for (int i = 0; i < 50; i++)
    {
        Marsh.attack("Cartman");
    }
    std::cout << Marsh;*/

    Marsh.attack("Eric");
    Marsh.beRepaired(2);
    Marsh.takeDamage(3);

    Cartman.guardGate();

	std::cout << MAGENTA << "********************************************" << std::endl;
    std::cout << YELLOW << "                Assignation    " << std::endl;
    Kenny = Cartman;
    std::cout << Kenny;

    Cartman.takeDamage(2);
    std::cout << Cartman;
    Cartman.beRepaired(2);
    std::cout << Cartman;
}
