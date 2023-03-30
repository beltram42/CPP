/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 16:34:46 by alambert          #+#    #+#             */
/*   Updated: 2023/03/30 16:20:19 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap Big("Big");
    ClapTrap Boss("Boss");

    ClapTrap ByDefault;

    std::cout << Big;
    std::cout << Boss;

    Big.attack("Boss");
    std::cout << Big;
    std::cout << Boss;
    
    //Boss.takeDamage(10);
    //std::cout << Boss;

    for (int i = 0; i < 10; i++)
    {
        Boss.attack("Big");
    }
    std::cout << Boss;

    Boss.attack("Big");
    Boss.beRepaired(2);
    Boss.takeDamage(3);

	std::cout << std::endl << std::endl;
    std::cout << MAGENTA << "************ Object par copie **************" << CLEAR << std::endl;
	ClapTrap ByCopy(Boss);
    std::cout << ByCopy;

	std::cout << std::endl << std::endl;
    std::cout << MAGENTA << "*********** Assignation objet **************" << CLEAR << std::endl;
    ByDefault = Big;
    std::cout << ByDefault;

    Big.takeDamage(2);
    std::cout << Big;
    Big.beRepaired(2);
    std::cout << Big;
}

/*
int main( void )	{

	ClapTrap	jon("jon");
	ClapTrap	robert("robert");
	ClapTrap	marius("marius");

	jon.attack("marius");
	marius.takeDamage(5);
	robert.attack("jon");
	jon.takeDamage(50);
	jon.beRepaired(100);
	jon.beRepaired(1000);
	marius.attack("jon");
	jon.takeDamage(100);
	jon.takeDamage(100);
	return (0);

}*/