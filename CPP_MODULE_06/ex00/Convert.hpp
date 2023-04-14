/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 13:05:31 by alambert          #+#    #+#             */
/*   Updated: 2023/04/14 12:14:45 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_H
# define CONVERT_H

// Libraries **************************************************************** //
#include <iostream>
#include <iomanip>
#include <string>
#include <string.h>
#include <stdexcept>
#include <cstdlib>
#include <cmath>
#include <complex>
#include <clocale>
#include <cerrno>
// **************************************************************** Libraries //



// Colours ****************************************************************** //
#define CLEAR "\e[0m"
#define RED "\e[0;31m"
#define GREEN "\e[0;32m"
#define YELLOW "\e[33m"
#define MAGENTA "\e[35m"
// ****************************************************************** Colours //



// Enums ******************************************************************** //
typedef enum e_char	{
	truechar,
	nondisplayable
}			t_char;

typedef enum e_int	{
	trueint,
	erange,
	notdisplayable
}			t_int;

typedef enum e_float	{
	truefloat,
	neginff,
	posinff,
	nanf
}			t_float;

typedef enum e_double	{
	truedouble,
	neginf,
	posinf,
	nan
}			t_double;
// ******************************************************************** Enums //



// Classes ****************************************************************** //
class Convert	{
	public:
		Convert(Convert const & inst);						// Canonical
		Convert(std::string str);

		virtual ~Convert(void);								// Canonical

		Convert	&operator=(Convert const & rhs);			// Canonical

		void		setStr(std::string);
		std::string	getStr(void) const;
		void		setType(char c);
		char		getType(void) const;

		void		setChar(char c);
		char		getChar(void) const;
		void		setInt(int i);
		int			getInt(void) const;
		void		setFloat(float f);
		float		getFloat(void) const;
		void		setDouble(double d);
		double		getDouble(void) const;

		void		setCharSt(bool b);
		bool		getCharSt(void) const;
		void		setIntSt(bool b);
		bool		getIntSt(void) const;
		void		setFloatSt(int i);
		int			getFloatSt(void) const;
		void		setDoubleSt(int i);
		int			getDoubleSt(void) const;

		void		tryChar(void);
		void		tryInt(void);
		void		tryFloating(void);
		void		tryElse(void);
		void		tryConvertion(void);

		void		findType(void);

		

	// -- Exception classes ------------------------------------------------- //
	class	ConvertionImpossible : public std::exception	{
		public:
		virtual const char *what() const throw();
	};

	class	NanInfinite : public std::exception	{
		public:
		virtual const char *what() const throw();
	};

	class	Erange : public std::exception	{
		public:
		virtual const char *what() const throw();
	}

	class	NonDisplayable : public std::exception	{
		public:
		virtual const char *what() const throw();
	};
	// ------------------------------------------------- Exception classes -- //
	protected:
		/*dATA*/
	
	private:
		Convert(void);										// Canonical
		
		std::string		_privateNumber;
		char			_type;
		
		char			_c;
		int				_i;
		float			_f;
		double			_d;

		bool			_char;
		int				_int;
		int				_float;
		int				_double;
};
// ****************************************************************** Classes //



// Non Member functions ***************************************************** //
std::ostream &operator<<( std::ostream &out, Convert const &input );
// ***************************************************** Non Member functions //


#endif // ********************************************************** CONVERT_H //