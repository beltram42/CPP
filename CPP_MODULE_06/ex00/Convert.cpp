/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 13:05:25 by alambert          #+#    #+#             */
/*   Updated: 2023/04/10 17:32:24 by alambert         ###   ########.fr       */
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
	this->setStr(str);
	std::cout << "Convert: constructor called for: " << this->getStr() << std::endl;	
}

Convert::~Convert(void)	{
	std::cout << "Convert: destructor called for: " << this->getStr() << std::endl;
	std::cout << std::endl;
}


// *************************************************** Constructor Destructor //



// Member functions ********************************************************* //
Convert&		Convert::operator=(Convert const & rhs)	{
	this->setStr(rhs.getStr());
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

char			Convert::getChar(void) const {
	return (this->_c);
}

void			Convert::setInt(int i)	{
	this->_i = i;
}

int				Convert::getInt(void) const {
	return (this->_i);
}

void			Convert::setFloat(float f)	{
	this->_f = f;
}

float				Convert::getFloat(void) const	{
	return (this->_f);
}

void			Convert::setDouble(double d)	{
	this->_d = d;
}

double			Convert::getDouble(void) const	{
	return (this->_d);
}

void			Convert::findType(void)	{
	std::string	mystr = this->getStr();
	const char	*startptr = mystr.c_str();
	char 		*endptr;
	long		l;

	try
	{
		l = strtol(startptr, &endptr, 0);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << this->getStr() << " = " << this->getInt() << std::endl;
	

	/*
	this->setInt(strtol(startptr, &endptr, 0));
	if ((*endptr == '.' && mystr.size() > 1) || (this->getInt() < -2147483648 || this->getInt() > 2147483647))	{
		startptr = mystr.c_str();
		endptr = (char *)startptr;
		this->setDouble(strtod(startptr, &endptr));
		if (*endptr== 'f')	{
			std::cout << "literal is a float" << std::endl;
			this->setFloat((float)getDouble());
		}
		else
			std::cout << "literal is a double" << std::endl;
	}
	else if (mystr.size() == 1 && (this->getInt() >= -128 || this->getInt() < 127))	{
		std::cout << "literal is a char" << std::endl;
		setChar((char)this->getInt());
	}
	else
		std::cout << "literal is an integer" << std::endl;*/
}

char const *	Convert::ConvertionImpossible::what(void) const throw()	{
	return ((char *)"Convert: Error: ConvertionImpossible");
}

char const *	Convert::NotDisplayable::what(void) const throw()	{
	return ((char *)"Convert: Error: NotDisplayable");
}

// ********************************************************* Member functions //



// Non Member functions ***************************************************** //
// ***************************************************** Non Member functions //


/*
const char	*startptr = usr_entry.c_str();
	char 		*endptr;

	N = std::strtol(startptr, &endptr, 10);
	if ((N == 0) && (startptr == endptr))
		std::cout << "invalid number" << std::endl;
	else if (N <= 0) {
		std::cout << "Number of Bobs should always be greater than 0" << std::endl;


		#include <cerrno>
		#include <clocale>
		#include <cmath>
		#include <cstring>
		#include <iostream>
 
int main()
{
    const double not_a_number = std::log(-1.0);
    std::cout << not_a_number << '\n';
 
    if (errno == EDOM)
    {
        std::cout << "log(-1) failed: " << std::strerror(errno) << '\n';
    }
}

output:
	nan
	log(-1) failed: Numerical argument out of domain
	}
	
	ERANGE
	*/