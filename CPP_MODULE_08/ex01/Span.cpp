/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 13:05:31 by alambert          #+#    #+#             */
/*   Updated: 2023/04/26 21:14:45 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

// Constructor Destructor *************************************************** //
Span::Span(void) : _N(0)	{
	std::cout << "Span: default constructor called for: " << this << std::endl;
}

Span::Span(Span const & toCopy) {
	if (this != &toCopy) 	{
		this->setN(toCopy.getN());
		this->_V.assign(toCopy._V.begin(), toCopy._V.end());
	}
	std::cout << "Span: copy constructor called from: " << &toCopy << ", to: " << this << std::endl;
}

Span::Span(unsigned int number)	: _N(number)	{
	std::cout << "Span: int param constructor called for: " << this << std::endl;
}

Span::~Span()	{
		std::cout << "Span: destructor called for: " << this << std::endl;
}
// *************************************************** Constructor Destructor //


// Member functions ********************************************************* //

// -- Operators overload ---------------------------------------------------- //
Span &						Span::operator=(Span const & toCopy)	{
	if (this != &toCopy)	{
		this->_V.clear();
		this->setN(toCopy.getN());
		this->_V.assign(toCopy._V.begin(), toCopy._V.end());
	}
	return (*this);
}
// ---------------------------------------------------- Operators overload -- //

// -- Functions overload ---------------------------------------------------- //
void						Span::addNumber(unsigned int number)	{
	this->getV().size() < this->getN() ? this->getV().push_back(number) : throw(Span::ArleadyFullException());
}

template <typename Iterator>
void		   				Span::addNumbers(std::vector<unsigned int>::iterator its, std::vector<unsigned int>::iterator ite)	{
	for (std::vector<unsigned int>::iterator it = its; it < ite; it++)
		addNumber(*it);
}
// ---------------------------------------------------- Functions overload -- //

// -- Accessors ------------------------------------------------------------- //
void						Span::setN(unsigned int number)	{
	this->_N = number;
}

unsigned int				Span::getN(void) const	{
	return (this->_N);
}

std::vector<int> &			Span::getV(void)	{
	return (this->_V);
}
// ------------------------------------------------------------- Accessors -- //


// -- Exceptions ------------------------------------------------------------ //
const char*			Span::NotEnoughNumbersException::what() const throw()	{
	return ("Not enough numbers in Span");
}

const char*			Span::ArleadyFullException::what() const throw()	{
	return ("Span already full");
}

// ------------------------------------------------------------ Exceptions -- //


// -- Other subject member functions ---------------------------------------- //
unsigned int				Span::shortestSpan(void)	{

	if (this->getV().size() < 2) {
		throw (Span::NotEnoughNumbersException());
		return (0);
	}
	std::vector<int>				vCopy(this->getV());
	std::vector<int>::iterator		its = vCopy.begin();
	std::vector<int>::iterator		ite = vCopy.end();

	std::sort(its, ite);
	std::adjacent_difference(its, ite, its);
	std::sort(its, ite);
	return (*its);
}

unsigned int				Span::longestSpan(void)		{
	if (this->getV().size() < 2) {
            throw (Span::NotEnoughNumbersException());
        }
	std::vector<int>::iterator		its = this->getV().begin();
	std::vector<int>::iterator		ite = this->getV().end();

	std::sort(its, ite);
	return (*(ite - 1) - *its);
}
// ---------------------------------------- Other subject member functions -- //


// ********************************************************* Member functions //


// Non Member functions ***************************************************** //
std::ostream &				operator<<(std::ostream & out, Span & rhs)	{
	std::vector<int>::iterator		it;
	std::vector<int>::iterator		its = rhs.getV().begin();
	std::vector<int>::iterator		ite = rhs.getV().end();
	
	out << std::endl;
	out << "*****************************************************************" << CLEAR << std::endl;
	out << std::endl;

	out << "> ";
	for (it = its; it != ite; it++)	{
		out << *it;
		if (it + 1 != ite)
			out << " | ";
	}
	out << " < ";

	out << std::endl;
	out << "*****************************************************************" << CLEAR << std::endl;
	out << std::endl;

	return (out);
}
// ***************************************************** Non Member functions //
