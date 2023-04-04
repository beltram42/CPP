/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 16:34:46 by alambert          #+#    #+#             */
/*   Updated: 2023/04/03 16:51:53 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Cat.hpp"
#include "./Dog.hpp"
#include "./Brain.hpp"

int	main()	{

    int size = 6; 
	const AAnimal	*CatsAndDogs[size];
	
	// const AAnimal *mj = new AAnimal(); // Impossible car classe abstraite, l'objet ne peut etre instancie

    for (int i = 0; i < (size / 2); i++)
    {
        CatsAndDogs[i] = new Cat();
    }
    std::cout << std::endl;
    for (int i = (size / 2); i < size; i++)
    {
        CatsAndDogs[i] = new Dog();
    }
    std::cout << std::endl;
	for (int i = 0; i < size; i++){

		CatsAndDogs[i]->makeSound();
		// std::cout << "#######" << std::endl;
       	// CatsAndDogs[i]->getIdeas();
		// std::cout << "#######" << std::endl;
	}
    std::cout << std::endl;
	for (int j = 0; j < size; j++)
    {
		delete CatsAndDogs[j];
	}
	return (0);
}

// Test de copie profonde + LEAKS 
/*int main()
{
    Cat test3;
    {
        Cat test1 = test3;
    }
    Dog test;
    {
        Dog test1 = test;
    }
    {
        Cat cat1;
        Cat cat2;
        cat1 = cat2;
    }
    return (0);
}*/