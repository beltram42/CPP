/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 15:40:59 by alambert          #+#    #+#             */
/*   Updated: 2023/04/01 15:58:26 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "Cat.hpp"

int	main(void)	{
	// This is OK, obviously Warrior is a Warrior
	Warrior*	a = new Warrior();

	// This is OK as well because Warior is a Character
	Character*	b = new Warrior();

	// This would not be OK because Character is not a Warrior
	// even though they are related
	// Warrior*	c = new Character();

	// This would not be OK either because Cat is not a Character
	// they are not even related
	// Character*	d = new Cat();

	a->sayHello("sturents");
	b->sayHello("students");
	return (0);

}