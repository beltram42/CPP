/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 16:34:46 by alambert          #+#    #+#             */
/*   Updated: 2023/03/31 20:43:22 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Cat.hpp"
#include "./Dog.hpp"
#include "./WrongCat.hpp"

int	main(void)
{
	const Animal	*meta = new Animal();
	const Animal	*i = new Cat();
	const Animal	*j = new Dog();

	const WrongAnimal	*wi = new WrongCat();
	const WrongCat		*wc = new WrongCat();

	Animal	_1;
	Animal	_2(_1);

	Cat	a;
	Cat	b(a);

	Dog z;
	Dog	y(z);

	std::cout << "type of meta : " << meta->getType() << std::endl;
	std::cout << "type of i : " << i->getType() << std::endl;
	std::cout << "type of j : " << j->getType() << std::endl;
	std::cout << "type of _1 : " << _1.getType() << std::endl;
	std::cout << "type of _2 : " << _2.getType() << std::endl;
	std::cout << "type of a : " << a.getType() << std::endl;
	std::cout << "type of b : " << b.getType() << std::endl;
	std::cout << "type of z : " << z.getType() << std::endl;
	std::cout << "type of y : " << y.getType() << std::endl;
	std::cout << "meta : ";	meta->makeSound();
	std::cout << "i : ";	i->makeSound();
	std::cout << "j : ";	j->makeSound();
	std::cout << "_1 : ";	_1.makeSound();
	std::cout << "_2 : ";	_2.makeSound();
	std::cout << "a : ";	a.makeSound();
	std::cout << "b : ";	b.makeSound();
	std::cout << "z : ";	z.makeSound();
	std::cout << "y : ";	y.makeSound();

	std::cout << "wi : ";	wi->makeSound();
	std::cout << "wc : ";	wc->makeSound();

	delete meta;
	delete i;
	delete j;
	delete wi;
	delete wc;

	return (0);
}