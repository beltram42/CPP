/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 16:53:55 by alambert          #+#    #+#             */
/*   Updated: 2023/04/03 16:10:08 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

// Constructor Destructor *************************************************** //
Brain::Brain(void)	{
	this->setIdeas();
	std::cout << CLEAR << "Brain: default constructor called." << std::endl;
}

Brain::Brain(Brain const & inst)	{
	*this = inst;
	std::cout << CLEAR << "Brain: Copy constructor has been called" << std::endl;
}

Brain::~Brain(void)	{
	std::cout << CLEAR << "Brain: destructor called" << std::endl;
}
// *************************************************** Constructor Destructor //



// Member functions ********************************************************* //
Brain&		Brain::operator=(Brain const & rhs)	{
	std::cout << CLEAR << "Brain: Copy - Assignment operator overload called" << std::endl;
	for (int i = 0; i < 100; i++){
		this->_privateIdeas[i] = rhs.getIdeas(i);
	}
	return *this;
}

void			Brain::setIdeas(void)	{
	std::string randId[44] = {"Look for the bare necessities, the simple bare necessities", "Forget about your worries and your strife", "I mean the bare necessities, old mother nature's recipes", "That bring the bare necessities of life", "Wherever I wander, wherever I roam", "I couldn't be fonder of my big home", "The bees are buzzin' in the tree", "To make some honey just for me", "When you look under the rocks and plants", "And take a glance at the fancy ants, then maybe try a few", "The bare necessities of life will come to you", "They'll come to you!", "Look for the bare necessities, the simple bare necessities", "Forget about your worries and your strife", "I mean the bare necessities", "That's why a bear can rest at ease", "With just the bare necessities of life", "Now when you pick a paw-paw or a prickly pear", "And you prick a raw paw, well, next time beware", "Don't pick the prickly pear by the paw", "When you pick a pear try to use the claw", "But you don't need to use the claw", "When you pick a pear of the big paw-paw", "Have I given you a clue?", "The bare necessities of life will come to you", "They'll come to you!", "Oh man, that's really livin'", "So just try and relax, yeah, cool it", "Fall apart in my backyard", "'Cause let me tell you something little britches", "If you act like that bee acts, uh uh", "You're working too hard", "And don't spend your time lookin' around", "For something you want that can't be found", "When you find out you can live without it", "And go along not thinkin' about it", "I'll tell you something true", "The bare necessities of life will come to you", "Look for the bare necessities, the simple bare necessities", "Forget about your worries and your strife (yeah man!)", "I mean the bare necessities", "That's why a bear can rest at ease", "With just the bare necessities of life", "Yeah, with just the bare necessities of life (yeah man!)"};
	srand(time(NULL));
	for (int i = 0 ; i < 100 ; i++)
		this->_privateIdeas[i] = randId[rand() % 44];
}
const std::string		&Brain::getIdeas(int i) const	{
	return (this->_privateIdeas[i]);
}
// ********************************************************* Member functions //



// Non Member functions ***************************************************** //
// ***************************************************** Non Member functions //