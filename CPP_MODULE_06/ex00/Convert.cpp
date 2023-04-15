/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 13:05:25 by alambert          #+#    #+#             */
/*   Updated: 2023/04/15 15:43:42 by alambert         ###   ########.fr       */
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
	str.erase(0, strspn(str.c_str(), " "));
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
	this->setType(rhs.getType());
	this->setChar(rhs.getChar());
	this->setCharSt(rhs.getCharSt());
	this->setInt(rhs.getInt());
	this->setIntSt(rhs.getIntSt());
	this->setFloat(rhs.getFloat());
	this->setFloatSt(rhs.getFloatSt());
	this->setDouble(rhs.getDouble());
	this->setDoubleSt(rhs.getDoubleSt());
	return *this;
}
// ---------------------------------------------------- Operators overload -- //


// -- Accessors ------------------------------------------------------------- //
void			Convert::setStr(std::string str)	{
	this->_privateStr = str;
}

std::string		Convert::getStr(void) const	{
	return (this->_privateStr);
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


// -- Detect usr entry ------------------------------------------------------ //
bool			Convert::tryChar(void)	{
	std::string str = this->getStr();
	char const	*startptr = str.c_str();

	if (str.size() > 1)
		return 0;
	else if (str.size() == 1 && (std::isdigit(*startptr)))
		return 0;
	else if (str.size() == 1 && (!std::isprint(*startptr)))	{
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
	if (*endptr == '.' || (endptr - startptr == 0))	{
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
	
	if ((*endptr == 'f' || *endptr == 'F') && (endptr - startptr) != 0)	{
		this->setType('f');
		if (d != 0 && (d < -FLT_MAX || (d > -FLT_MIN && d < FLT_MIN) || d > FLT_MAX))	{
			errno = ERANGE;
			if (d > FLT_MAX || (d > 0 && d < FLT_MIN))	{
				this->setFloatSt(posinff);
				if (d < DBL_MAX && d > DBL_MIN)
					this->setDouble(d);
			}
			else if (d < -FLT_MAX  || (d < 0 && d > -FLT_MIN))	{
				this->setFloatSt(neginff);
				if (d > -DBL_MAX && d < -DBL_MIN)
					this->setDouble(d);
			}
			return 1;
		}
		else	{
			this->setFloat((float)d);
			this->setFloatSt(truefloat);
			return 1;
		}
	}
	else if ((endptr - startptr) != 0)	{
		this->setType('d');
		if (errno == ERANGE)	{
			if (d == HUGE_VAL)
				this->setDoubleSt(posinf);
			else if (d == -HUGE_VAL)
				this->setDoubleSt(neginf);
			return 1;
		}
		else if (*endptr == '\0')	{
			this->setDouble(d);
			this->setDoubleSt(truedouble);
			return 1;
		}
	}
	return 0;
}

bool			Convert::tryElse(void)	{
	std::string str = getStr();

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
		this->setType('n');
		return;
	}
	else if (str.size() != 0)	{
		if (this->tryElse())
			return;
		if	(this->tryChar())
			return;
		if (this->tryInt())
			return;
		if (this->tryFloating())
			return;
		if (this->getType() == 0)
			this->setType('n');
	}
}
// ------------------------------------------------------ Detect usr entry -- //


// -- Convert from type to type --------------------------------------------- //
void			Convert::tryConvertion(void)	{
	if (this->getType() == 'c')	{
		this->setIntSt(trueint);
		this->setInt(static_cast<int>(this->getChar()));
		this->setFloatSt(truefloat);
		this->setFloat(static_cast<float>(this->getChar()));
		this->setDoubleSt(truedouble);
		this->setDouble(static_cast<double>(this->getChar()));
	}

	else if (this->getType() == 'i')	{
		this->setFloatSt(truefloat);
		this->setFloat(static_cast<float>(this->getInt()));
		this->setDoubleSt(truedouble);
		this->setDouble(static_cast<double>(this->getInt()));
		if (this->getInt() < 32 || this->getInt() > 126)	{
			this->setCharSt(nondisplayable);
		}
		else {
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
			if (this->getDouble() && this->getDouble() > -DBL_MAX && this->getDouble() < -DBL_MIN)
				this->setDoubleSt(truedouble);
			else
				this->setDoubleSt(neginf);
		}
		else if (this->getFloatSt() == posinff)	{
			this->setCharSt(nondisplayable);
			this->setIntSt(erange);
			if (this->getDouble() && this->getDouble() < DBL_MAX && this->getDouble() > DBL_MIN)
					this->setDoubleSt(truedouble);
			else
				this->setDoubleSt(posinf);
		}
		else if (this->getFloatSt() == truefloat)	{
			if (this->getFloat() <  32 || this->getFloat() > 126)
				this->setCharSt(nondisplayable);
			else if (this->getFloat() >= 32 && this->getFloat() <= 126)	{
				this->setCharSt(truechar);
				this->setChar(static_cast<char>(this->getFloat()));
			}
			if (this->getFloat() < (float)INT_MIN || this->getFloat() > (float)INT_MAX)
				this->setIntSt(erange);
			else if (this->getFloat() > (float)INT_MIN && this->getFloat() < (float)INT_MAX)	{
				this->setIntSt(trueint);
				this->setInt(static_cast<int>(this->getFloat()));
			}
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
		else if (this->getDoubleSt() == truedouble)	{
			if (this->getDouble() < 32 || this->getDouble() > 126)
				this->setCharSt(nondisplayable);
			else if (this->getDouble() >= 32 && this->getDouble() <= 126)	{
				this->setCharSt(truechar);
				this->setChar(static_cast<char>(this->getDouble()));
			}
			if (this->getDouble() < INT_MIN || this->getDouble() > INT_MAX)
				this->setIntSt(erange);
			else if (this->getDouble() > INT_MIN && this->getDouble() < INT_MAX)	{
				this->setIntSt(trueint);
				this->setInt(static_cast<int>(this->getDouble()));
			}
			if (this->getDouble() < 0 && (this->getDouble() < -FLT_MAX || this->getDouble() > -FLT_MIN))
				this->setFloatSt(neginff);
			else if (this->getDouble() > 0 && (this->getDouble() < FLT_MIN || this->getDouble() > FLT_MAX))
				this->setFloatSt(posinff);
			else {
				this->setFloatSt(truefloat);
				this->setFloat(static_cast<float>(this->getDouble()));
			}
		}
	}
}
// --------------------------------------------- Convert from type to type -- //
// ********************************************************* Member functions //



// Non Member functions ***************************************************** //
std::ostream &operator<<(std::ostream &out, Convert const &inst)	{
		std::string	str = inst.getStr();

		if (inst.getType() == 'n')	{
			out << ">" << inst.getStr() << "<" <<" cannot be converted to a char or an int or a float or a double." << std::endl;
			return (out);
		}
		else	{
			out << std::endl;
			out << YELLOW << "********************************************" << std::endl;
			out << std::endl;
			out << "Type: " << inst.getType() << std::endl;
			out << std::endl;

			if (inst.getCharSt() == nondisplayable)
				out << "char: " << "non displayable" << std::endl;
			else if (inst.getCharSt() == truechar)
				out << "char: " << inst.getChar() << std::endl;

			if (inst.getIntSt() == notdisplayable)
				out << "int: " << "non displayable" << std::endl;
			else if (inst.getIntSt() == erange)
				out << "int: " << "ERANGE" << std::endl;
			else if (inst.getIntSt() == trueint)
				out << "int: " << inst.getInt() << std::endl;

			if (inst.getFloatSt() == fnanf)
				out << "float: " << "nanf" << std::endl;
			else if (inst.getFloatSt() == posinff)
				out << "float: " << "+inff" << std::endl;
			else if (inst.getFloatSt() == neginff)
				out << "float: " << "-inff" << std::endl;
			else if (inst.getFloatSt() == truefloat)
				out << "float: " << std::fixed << std::setprecision(1) << inst.getFloat() << "f" << std::endl;
			
			if (inst.getDoubleSt() == dnan)
				out << "double: " << "nan" << std::endl;
			else if (inst.getDoubleSt() == posinf)
				out << "double: " << "+inf" << std::endl;
			else if (inst.getDoubleSt() == neginf)
				out << "double: " << "-inf" << std::endl;
			else if (inst.getDoubleSt() == truedouble)
				out << "double: " << std::fixed << std::setprecision(1) << inst.getDouble() << std::endl;

			out << std::endl;
			out << "********************************************" << CLEAR << std::endl;
			out << std::endl;
			
			return (out);
		}
	}
// ***************************************************** Non Member functions //
