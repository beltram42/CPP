/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 13:05:25 by alambert          #+#    #+#             */
/*   Updated: 2023/04/09 12:21:29 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

// Constructor Destructor *************************************************** //
Convert::Convert(void)	{
	std::cout << "Convert: constructor called for: " << this->getStr() << std::endl;
}

Convert::Convert(Convert const & inst)	{
	*this = inst;
	std::cout << "Convert: copy constructor called for: " << this->getStr() << std::endl;
}

Convert::Convert(std::string str) {
	std::cout << "Convert: constructor called for: " << this->getStr() << std::endl;	
}

Convert::~Convert(void)	{
	std::cout << "Convert: destructor called for: " << this->getStr() << std::endl;
	std::cout << std::endl;
}
// *************************************************** Constructor Destructor //



// Member functions ********************************************************* //
Convert&		Convert::operator=(Convert const & rhs)	{
	if (*this != rhs)
		this->set(rhs.get());
	return *this;
}

void			Convert::setStr(std::string str)	{
	this->_privateNumber = str;
}

std::string		Convert::getStr(void) const	{
	return (this->_privateNumber);
}

void			Convert::setChar(char c)	{
	this->_c = c;
}

char			Convert::getChar(void)	{
	return (this->_c);
}

void			Convert::setInt(int i)	{
	this->_i = i;
}

int				Convert::getInt(void)	{
	return (this->_i);
}

void			Convert::setFloat(float f)	{
	this->_f = f;
}

int				Convert::getFloat(void) const	{
	return (this->_f);
}

void			Convert::setDouble(double d)	{
	this->_d = d;
}

double			Convert::getDouble(void) const	{
	return (this->_d);
}

int				Convert::toInt(std::string str)	{
	const char	*startptr = str.c_str();
	char 		*endptr;
}




// ********************************************************* Member functions //



// Non Member functions ***************************************************** //
// ***************************************************** Non Member functions //



const char	*startptr = usr_entry.c_str();
	char 		*endptr;

	N = std::strtol(startptr, &endptr, 10);
	if ((N == 0) && (startptr == endptr))
		std::cout << "invalid number" << std::endl;
	else if (N <= 0) {
		std::cout << "Number of Bobs should always be greater than 0" << std::endl;
	}