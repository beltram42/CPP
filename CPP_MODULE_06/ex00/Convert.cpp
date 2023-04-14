/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 13:05:25 by alambert          #+#    #+#             */
/*   Updated: 2023/04/14 19:31:43 by alambert         ###   ########.fr       */
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


// -- Operators overload ---------------------------------------------------- //
Convert&		Convert::operator=(Convert const & rhs)	{
	this->setStr(rhs.getStr());
	return *this;
}
// ---------------------------------------------------- Operators overload -- //


// -- Accessors ------------------------------------------------------------- //
void			Convert::setStr(std::string str)	{
	this->_privateNumber = str;
}

std::string		Convert::getStr(void) const	{
	return (this->_privateNumber);
}

void			Convert::setChar(char c)	{
	this->_c = c;
}

void			Convert::setType(char c)	{
	this->_type = c;
}

char			Convert::getType(void) const	{
	return (this->_type);
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

void			Convert::setCharSt(int i)	{
	this->_char = i;
}

int				Convert::getCharSt(void) const	{
	return (this->_char);
}

void			Convert::setIntSt(int i)	{
	this->_int = i;
}

int			Convert::getIntSt(void) const	{
		return (this->_int);
}

void			Convert::setFloatSt(int i)	{
	this->_float = i;
}

int			Convert::getFloatSt(void) const	{
	return (this->_float);
}

void			Convert::setDoubleSt(int i)	{
	this->_double = i;
}

int			Convert::getDoubleSt(void) const	{
	return (this->_double);
}
// ------------------------------------------------------------- Accessors -- //


// -- Exceptions ------------------------------------------------------------ //
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
// ------------------------------------------------------------ Exceptions -- //


// -- Detect usr entry ------------------------------------------------------ //
bool			Convert::tryChar(void)	{
	std::string str = this->getStr();
	char const	*startptr = str.c_str();

	if (str.size() > 1)
		return 0;
	else if (str.size() == 1 && (std::isdigit(*startptr)))
		return 0;
	else if (str.size() == 1 && (!std::isprint(*startptr)))	{
		throw Convert::NonDisplayable();
		this->setCharSt(nondisplayable);
		return 1;
	}
	else if (str.size() == 1)	{
		this->setType('c');
		this->setChar(*startptr);
		this->setCharSt(truechar);
		return 1;
	}
	return 0;
}

bool			Convert::tryInt(void)	{
	std::string str = this->getStr();
	char const	*startptr = str.c_str();
	char 		*endptr;
	long		l;

	errno = 0;
	l = strtol(startptr, &endptr, 10);
	if (*endptr == '.')	{
		return 0;
	}
	else if (errno == ERANGE || (l < INT_MIN || l > INT_MAX))	{
		errno = ERANGE;
		this->setIntSt(erange);
		return 0;
	}
	else if (l >= INT_MIN && l <= INT_MAX)	{
		this->setType('i');
		this->setInt((int)l);
		this->setIntSt(trueint);
		return 1;
	}
	return 0;
}

bool			Convert::tryFloating(void)	{
	std::string str = this->getStr();
	char const	*startptr = str.c_str();
	char 		*endptr;
	double		d;

	errno = 0;
	d = strtod(startptr, &endptr);
	if (*endptr != 'f' || *endptr != 'F')	{
		if (errno == ERANGE)	{
			throw Convert::Erange();
			if (d == HUGE_VAL)
				this->setDoubleSt(posinf);
			else if (d == -HUGE_VAL)
				this->setDoubleSt(neginf);
			return 1;
		}
		else if (*endptr == '\0')	{
			this->setType('d');
			this->setDouble(d);
			this->setDoubleSt(truedouble);
			return 1;
		}
	}
	else	{
		if (d != 0 && (d < -__FLT_MAX__ || (d > -__FLT_MIN__ && d < __FLT_MIN__) || d > __FLT_MAX__))	{
			errno = ERANGE;
			throw Convert::Erange();
			if (d == HUGE_VAL || d > __FLT_MAX__ || (d > 0 && d < __FLT_MIN__))
				this->setFloatSt(posinff);
			else if (d == -HUGE_VAL || d < -__FLT_MAX__  || (d < 0 && d > -__FLT_MIN__))
				this->setFloatSt(neginff);
			return 1;
		}
		else	{
			this->setType('f');
			this->setFloat((float)d);
			this->setFloatSt(truefloat);
			return 1;
		}
	}
	return 0;
}

bool			Convert::tryElse(void)	{
	std::string str = getStr();

	std::cout << str << std::endl;

	if (!str.compare("nan"))	{
		this->setDoubleSt(dnan);
		this->setType('d');
		return 1;
	}
	else if (!str.compare("nanf"))	{
		this->setFloatSt(fnanf);
		this->setType('f');
		return 1;
	}
	else if (!str.compare("-inf"))	{
		this->setDoubleSt(neginf);
		this->setType('d');
		return 1;
	}
	else if (!str.compare("-inff"))	{
		this->setFloatSt(neginff);
		this->setType('f');
		return 1;
	}
	else if (!str.compare("+inf"))	{
		this->setDoubleSt(posinf);
		this->setType('d');
		return 1;
	}
	else if (!str.compare("+inff"))	{
		this->setFloatSt(posinff);
		this->setType('f');
		return 1;
	}
	return 0;
}

void			Convert::findType(void)	{
	std::string	str = this->getStr();
	this->setType(0);

	if (str.size() == 0)	{
		throw Convert::ConvertionImpossible();
		return;
	}
	if (this->tryElse())	{
		std::cout << "type: " << this->getType() << std::endl;
		return;
	}
	if	(this->tryChar())	{
		std::cout << "type: " << this->getType() << std::endl;
		return;
		}
	if (this->tryInt())	{
		std::cout << "type: " << this->getType() << std::endl;
		return;
		}
	if (this->tryFloating())	{
		std::cout << "type: " << this->getType() << std::endl;
		return;
	}
}

// ------------------------------------------------------ Detect usr entry -- //
void			Convert::tryConvertion(void)	{
	if (this->getType() == 'c')	{
		this->setInt(static_cast<int>(this->getChar()));
		this->setFloat(static_cast<float>(this->getChar()));
		this->setInt(static_cast<double>(this->getChar()));
	}

	else if (this->getType() == 'i')	{
		this->setFloat(static_cast<float>(this->getInt()));
		this->setInt(static_cast<double>(this->getInt()));
		std::cout << "tryConvertion: " << this->getInt() << std::endl;
		// std::cout << std::isprint(this->getInt()) << std::endl;
		// if (!isprint(214748364))	{
		// 	std::cout << "weee" << std::endl;
		if (this->getInt() < 32 || this->getInt() > 126)	{
			this->setCharSt(nondisplayable);
		}
		else {
			// std::cout << "weee2" << std::endl;
			this->setCharSt(truechar);
			this->setChar(static_cast<char>(this->getInt()));
		}
	}

	else if (this->getType() == 'f')	{
		if (this->getFloatSt() == fnanf)	{
			this->setCharSt(nondisplayable);
			this->setIntSt(notdisplayable);
			this->setDoubleSt(dnan);
		}
		else if (this->getFloatSt() == neginff)	{
			this->setCharSt(nondisplayable);
			this->setIntSt(erange);
			this->setDoubleSt(neginf);
		}
		else if (this->getFloatSt() == posinff)	{
			this->setCharSt(nondisplayable);
			this->setIntSt(erange);
			this->setDoubleSt(posinf);
		}
		else if (this->getFloat() <  32 || this->getFloat() > 126)
			this->setCharSt(nondisplayable);
		else if (this->getFloat() >= 32 && this->getFloat() <= 126)	{
			this->setCharSt(truechar);
			this->setChar(static_cast<char>(this->getFloat()));
		}
		else if (this->getFloat() < (float)INT_MIN || this->getFloat() > (float)INT_MAX)
			this->setIntSt(erange);
		else if (this->getFloat() > (float)INT_MIN && this->getFloat() < (float)INT_MAX)	{
			this->setIntSt(trueint);
			this->setInt(static_cast<int>(this->getFloat()));
		}
		else {
			this->setDoubleSt(truedouble);
			this->setDouble(static_cast<double>(this->getFloat()));
		}
	}

	else if (this->getType() == 'd')	{
		if (this->getDoubleSt() == dnan)	{
			this->setCharSt(nondisplayable);
			this->setIntSt(notdisplayable);
			this->setFloatSt(fnanf);
		}
		else if (this->getDoubleSt() == neginf)	{
			this->setCharSt(nondisplayable);
			this->setIntSt(erange);
			this->setFloatSt(neginff);
		}
		else if (this->getDoubleSt() == posinf)	{
			this->setCharSt(nondisplayable);
			this->setIntSt(erange);
			this->setFloatSt(posinff);
		}
		else if (this->getDouble() < 32 || this->getDouble() > 126)
			this->setCharSt(nondisplayable);
		else if (this->getDouble() >= 32 && this->getDouble() <= 126)	{
			this->setCharSt(truechar);
			this->setChar(static_cast<char>(this->getDouble()));
		}
		else if (this->getDouble() < INT_MIN || this->getDouble() > INT_MAX)
			this->setIntSt(erange);
		else if (this->getDouble() > INT_MIN && this->getDouble() < INT_MAX)	{
			this->setIntSt(trueint);
			this->setInt(static_cast<int>(this->getDouble()));
		}
		else if (this->getDouble() < 0 && (this->getDouble() < -__FLT_MAX__ || this->getDouble() > -__FLT_MIN__))
			this->setFloatSt(neginff);
		else if (this->getDouble() > 0 && (this->getDouble() < __FLT_MIN__ || this->getDouble() > __FLT_MAX__))
			this->setFloatSt(posinff);
		else {
			this->setFloatSt(truefloat);
			this->setFloat(static_cast<float>(this->getDouble()));
		}
	}
}


// ********************************************************* Member functions //



// Non Member functions ***************************************************** //
std::ostream &operator<<(std::ostream &out, Convert const &inst)	{
	
		out << std::endl;
		out << YELLOW << "********************************************" << std::endl;
		out << std::endl;

		if (inst.getCharSt() == nondisplayable)
			out << "char: " << "non displayable" << std::endl;
		else if (inst.getCharSt() == truechar)
			out << "char: " << inst.getChar() << std::endl;
		out << std::endl;

		if (inst.getIntSt() == notdisplayable)
			out << "int: " << "non displayable" << std::endl;
		else if (inst.getIntSt() == erange)
			out << "int: " << "ERANGE" << std::endl;
		else if (inst.getIntSt() == trueint)
			out << "int: " << inst.getInt() << std::endl;
		out << std::endl;

		if (inst.getFloatSt() == fnanf)
			out << "float: " << "nanf" << std::endl;
		else if (inst.getFloatSt() == posinff)
			out << "float: " << "+inff" << std::endl;
		else if (inst.getFloatSt() == neginff)
			out << "float: " << "-inff" << std::endl;
		else if (inst.getFloatSt() == truefloat)
			out << "float: " << std::setprecision(6) << inst.getFloat() << std::endl;
		out << std::endl;
		
		if (inst.getDoubleSt() == dnan)
			out << "double: " << "nan" << std::endl;
		else if (inst.getDoubleSt() == posinf)
			out << "double: " << "+inf" << std::endl;
		else if (inst.getDoubleSt() == neginf)
			out << "double: " << "-inf" << std::endl;
		else if (inst.getDoubleSt() == truedouble)
			out << "double: " << std::setprecision(6) << inst.getDouble() << std::endl;

		out << std::endl;
		out << "********************************************" << CLEAR << std::endl;
		out << std::endl;
		
		return (out);
	}
// ***************************************************** Non Member functions //
