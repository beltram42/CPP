/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 15:40:59 by alambert          #+#    #+#             */
/*   Updated: 2023/04/02 10:42:42 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warrior.hpp"
#include "Cat.hpp"

int	main(void)	{

	ACharacter*	a = new Warrior();

	// This will not be ok since ACharacter is abstract:
	// ACharacter	*b = new Character

	a->sayHello("sturents");
	a->attack("Roger");

	delete(a);
	return (0);
}