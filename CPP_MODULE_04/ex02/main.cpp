/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 16:34:46 by alambert          #+#    #+#             */
/*   Updated: 2023/04/02 13:48:46 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Cat.hpp"
#include "./Dog.hpp"
#include "./Brain.hpp"

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

/*#define NB_ANIMALS 6

int	main(void)
{
	std::cout << "\033[1;32m==========      CONSTRUCTOR 1      ==========\e[0m" << std::endl << std::endl;

	Animal	*animals[NB_ANIMALS];
	Brain	*brain;

	std::cout << "\033[1;32m--------------------------------------------\e[0m" << std::endl;

	for (int i = 0; i < NB_ANIMALS; i++)
	{
		if (i % 2)
			animals[i] = new Dog;
		else
			animals[i] = new Cat;
		std::cout << "\033[1;32m--------------------------------------------\e[0m" << std::endl;
	}

	std::cout << std::endl;
	std::cout << "\033[1;36m==========    CAFE PHILO SAUVAGE   ==========\e[0m" << std::endl << std::endl;

	brain = animals[2]->getBrain();
	brain->ideas[0] = "I wannnnnnt huuugs 😽";
	brain->ideas[1] = "I wannnnnnt sleeeep 🙀";
	brain->ideas[2] = "I wannnnnnt broke your father 😾";
	brain->ideas[3] = "I wannnnnnt foooods 😻";
	std::cout << animals[2]->getBrain()->ideas[2] << std::endl;
	std::cout << animals[4]->getBrain()->ideas[2] << std::endl;
	std::cout << "\033[1;37m--------------------------------------------\e[0m" << std::endl;
	*(animals[4]) = *(animals[2]);
	std::cout << animals[2]->getBrain()->ideas[2] << std::endl;
	std::cout << animals[4]->getBrain()->ideas[2] << std::endl;

	std::cout << std::endl;
	std::cout << "\033[1;31m==========      DESTRUCTOR 1       ==========\e[0m" << std::endl << std::endl;

	for (int i = 0; i < NB_ANIMALS; i++)
	{
		delete animals[i];
		std::cout << "\033[1;36m--------------------------------------------\e[0m" << std::endl;
	}


	std::cout << std::endl;
	std::cout << "\033[1;32m==========      CONSTRUCTOR 2      ==========\e[0m" << std::endl << std::endl;

	const Animal	*i = new Cat();
	std::cout << "\033[1;32m--------------------------------------------\e[0m" << std::endl;
	const Animal	*j = new Dog();

	std::cout << std::endl;
	std::cout << "\033[1;31m==========      DESTRUCTOR 2       ==========\e[0m" << std::endl << std::endl;

	delete i;
	std::cout << "\033[1;36m--------------------------------------------\e[0m" << std::endl;
	delete j;

	std::cout << std::endl;

	// std::cout << "\033[1;36m==========     LES INTERDITS      ==========\e[0m" << std::endl << std::endl;

	// Dog	*Bouboule = new Dog;
	// Dog	*Batawaf = new Dog(*Bouboule);

	// delete Bouboule;
	// delete Batawaf;

	// std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "\033[1;33m==========    SURPRISEEEEEEEEEEE   ==========\e[0m" << std::endl << std::endl;

	Dog Bouboule;
	std::cout << "\033[1;33m--------------------------------------------\e[0m" << std::endl;
	{
	Dog Batawaf = Bouboule;
	}
	std::cout << "\033[1;33m--------------------------------------------\e[0m" << std::endl;


	return (0);
}*/