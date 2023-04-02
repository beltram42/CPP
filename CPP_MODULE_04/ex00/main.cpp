/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 16:34:46 by alambert          #+#    #+#             */
/*   Updated: 2023/04/02 12:38:29 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Cat.hpp"
#include "./Dog.hpp"
#include "./WrongCat.hpp"

int main()
{
    // True Animal tests ======================================================
    std::cout << GREEN << "************************ ANIMAL OBJECTS ***********************" << std::endl;
	std::cout << std::endl;

    std::cout << GREEN << "** Instantiating objects **************************************" << std::endl;
    const Animal* animal = new Animal();
    const Animal* parrot = new Animal("Parrot"); 
    const Animal* dog = new Dog();
    const Animal* cat = new Cat();
	std::cout << std::endl;

    std::cout << GREEN << "**types *******************************************************" << CLEAR << std::endl;
    std::cout << "Animal: Constructor by default = " << animal->getType() << "." << std::endl;
    std::cout << "Animal: Constructor with string = " << parrot->getType() << "." << std::endl;
    std::cout << "Dog: Constructor = "  << dog->getType() << "." << std::endl; 
    std::cout << "Cat: Constructor = " << cat->getType() << "." << std::endl; 
	std::cout << std::endl;
	
    std::cout << GREEN << "**Sounds ******************************************************" << CLEAR << std::endl;
    std::cout << "Cat: sound : " ; cat->makeSound();
    std::cout << "Dog: sound : " ; dog->makeSound(); 
    std::cout << "Animal: default sound : " ; animal->makeSound();
	std::cout << std::endl;
	
    std::cout << GREEN << "**************************************************************" << CLEAR << std::endl;
    delete animal;
    delete parrot;
    delete cat;
    delete dog;
	std::cout << std::endl;
	std::cout << std::endl;
	
    // Wrong Animals tests =====================================================
    std::cout << MAGENTA << "********************** WRONG_ANIMAL OBJECTS ********************" << std::endl;
	std::cout << std::endl;

    std::cout << MAGENTA << "** Instantiating objects ***************************************" << std::endl;
    const WrongAnimal* wrongAnimal = new WrongAnimal(); 
    const WrongAnimal* wrongCat = new WrongCat();
    const WrongCat* wrongwrongCat = new WrongCat();
	std::cout << std::endl;

	std::cout << MAGENTA << "**Sounds *******************************************************" << CLEAR << std::endl;
    wrongwrongCat->makeSound();
    wrongAnimal->makeSound();
    wrongCat->makeSound();
	std::cout << std::endl;

    std::cout << MAGENTA << "****************************************************************" << CLEAR << std::endl;
	std::cout << std::endl;
	
    delete wrongAnimal;
    delete wrongwrongCat;
    delete wrongCat;

    return (0); 
}