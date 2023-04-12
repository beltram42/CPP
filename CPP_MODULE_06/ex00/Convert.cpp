/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 13:05:25 by alambert          #+#    #+#             */
/*   Updated: 2023/04/12 19:14:56 by alambert         ###   ########.fr       */
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

char			Convert::getChar() const {
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

void			Convert::setType(char c)	{
	this->_type = c;
}

char			Convert::getType(void) const	{
	return (this->_type);
}

void			Convert::tryChar(void)	{
	std::string str = this->getStr();
	char const	*startptr = str.c_str();

	if (str.size() > 1)
		return;
	if (str.size() == 0)	{
		throw Convert::ConvertionImpossible();
		return;
	}
	else if (str.size() == 1 && (!std::isprint(*startptr)))	{
		throw Convert::NotDisplayable();
		return;
	}
	else if (str.size() == 1)	{
		this->setType('c');
		this->setChar(*startptr);
		return;
	}
}

void			Convert::tryInt(void)	{
	std::string str = this->getStr();
	char const	*startptr = str.c_str();
	char 		*endptr;
	long		l;

	l = strtol(startptr, &endptr, 10);
	if (*endptr == '.')	{
		return;
	}
	else if (!std::isfinite(l))	{
		throw Convert::NanInfinite();
	}
	else if (l < INT32_MIN || l > INT32_MAX)	{
		errno = ERANGE;
		throw Convert::Erange();
	}
	else if (l >= INT32_MIN && l <= INT32_MAX)	{
		this->setType('i');
		this->setInt((int)l);
		return;
	}
}

void			Convert::tryFloating(void)	{
	td::string str = this->getStr();
	char const	*startptr = str.c_str();
	char 		*endptr;
	double		d;

	d = strtod(startptr, &endptr);
	if (!std::isfinite(d))	{
		throw Convert::NanInfinite();
		return;
	}
	else if (errno == ERANGE)	{
		throw Convert::Erange();
		return;
	}
	else if (*endptr == '\0')	{
		this->setType('d');
		this->setDouble(d);
		return;
	}
	else if (*endptr == 'f' || *endptr == 'F')	{
		if (d < -__FLT_MAX__ || (d > -__FLT_MIN__ && d < __FLT_MIN__) || d > __FLT_MAX__)	{
			errno = ERANGE;
			throw Convert::Erange();
			return;
		}
		else	{
			this->setType(f);
			this->setFloat((float)d);
			return;
		}
	}
}

void			Convert::tryType(void)	{
	if (this->getType() == 0)	{
		throw Convert::ConvertionImpossible();
		return;
	}
	
}

void			Convert::findType(void)	{
	this->setType(0);
	try	{
		this->tryChar(void);
	}
	catch(const std::exception& e)	{
		std::cerr << e.what() << '\n';
	}
	try	{
		this->tryInt(void);
	}
	catch(const std::exception& e)	{
		std::cerr << e.what() << '\n';
	}
	try	{
		this->tryFloating(void);
	}
	catch(const std::exception& e)	{
		std::cerr << e.what() << '\n';
	}
	try	{
		this->tryType(void);
	}
	catch(const std::exception& e)	{
		std::cerr << e.what() << '\n';
	}
}

void			Convert::tryConvertion(void)	{
	if (this->getType() == 'c')	{
		this-setInt(static_cast<int>(this->getChar()));
		this-setFloat(static_cast<float>(this->getChar()));
		this-setInt(static_cast<double>(this->getChar()));
	}
	if (this->getType() == 'i')	{
		if (!std::isprint(this->getInt())){
			throw
		}
		this-setFloat(static_cast<float>(this->getInt()));
		this-setInt(static_cast<double>(this->getInt()));
	}
}

char const *	Convert::ConvertionImpossible::what(void) const throw()	{
	return ((char *)"Convert: Error: ConvertionImpossible");
}

char const *	Convert::NanInfinite::what(void) const throw()	{
	return ((char *)"Convert: Error: Infinite/Nan");
}

char const *	Convert::Erange::what(void) const throw()	{
	std::cout << strerror(errno) << std::endl;
	return ((char *)"Convert: Error: ERANGE");
}

char const *	Convert::NonDisplayable::what(void) const throw()	{
	return ((char *)"Convert: Error: NonDisplayable");
}
// ********************************************************* Member functions //



// Non Member functions ***************************************************** //
std::ostream &operator<<( std::ostream &out, Convert const &inst )	{
	if (this->getType() == 'c')	{
		out << YELLOW << << "********************************************" << CLEAR << std::endl;
		if (!std::isprint(getChar()))
			out << "char: " << e.what() << std::endl;
		else
			out << "char: " << inst.getChar() << std::endl;
		out << "int: " << inst.getInt() << std::endl;
		out << "float: " << inst.getFloat() << std::endl;
		out << "double: " << inst.getDouble() << std::endl;
		out << YELLOW << "********************************************" << CLEAR << std::endl;
		return (out);
	}


}
// ***************************************************** Non Member functions //
