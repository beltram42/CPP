/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 15:18:57 by alambert          #+#    #+#             */
/*   Updated: 2023/03/13 13:35:54 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

//void	randomChump(std::string name);

int	main(void) {

	std::cout <<  std::endl;
	std::cout << "*************** instance Stackie1(Stack_one) will be created on the Stack ***************" << std::endl;
	Zombie	Stackie1("Stack_one");
	std::cout <<  std::endl;
	Stackie1.announce();
	std::cout <<  std::endl;
	std::cout <<  std::endl;
	
	std::cout << "**************** instance Heapie1(Heap_one) will be created on the Heap *****************" << std::endl;
	Zombie*	Heapie1;
	Heapie1 = new Zombie("Heap_one");
	std::cout <<  std::endl;
	Heapie1->announce();
	std::cout <<  std::endl;
	delete Heapie1;
	std::cout << "********** instance Heapie1(Heap_one) has been deleted and freed from the Heap **********" << std::endl;
	std::cout <<  std::endl;
	std::cout <<  std::endl;
	
	randomChump("Stack_two");

	std::cout <<  std::endl;
	std::cout <<  std::endl;	
	std::cout << "****** instance Stackie1(Stack_one) will be destroyed when its destructor is called *****" << std::endl;
	return (0);
}