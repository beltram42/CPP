/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 13:05:31 by alambert          #+#    #+#             */
/*   Updated: 2023/04/15 14:33:57 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_H
# define CONVERT_H

// Libraries **************************************************************** //
#include <iostream>
#include <iomanip>
#include <climits>
#include <string>
#include <string.h>
#include <stdexcept>
#include <cstdlib>
#include <cmath>
#include <complex>
#include <clocale>
#include <cfloat>
#include <cerrno>
#include <ctype.h>
// **************************************************************** Libraries //



// Colours ****************************************************************** //
#define CLEAR "\e[0m"
#define RED "\e[0;31m"
#define GREEN "\e[0;32m"
#define YELLOW "\e[33m"
#define MAGENTA "\e[35m"
// ****************************************************************** Colours //



// Enums ******************************************************************** //
typedef enum e_val	{
	truechar,
	nondisplayable,
	trueint,
	erange,
	notdisplayable,
	truefloat,
	neginff,
	posinff,
	fnanf,
	truedouble,
	neginf,
	posinf,
	dnan
}			t_val;
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

		void		setCharSt(int i);
		int			getCharSt(void) const;
		void		setIntSt(int i);
		int			getIntSt(void) const;
		void		setFloatSt(int i);
		int			getFloatSt(void) const;
		void		setDoubleSt(int i);
		int			getDoubleSt(void) const;

		bool		tryChar(void);
		bool		tryInt(void);
		bool		tryFloating(void);
		bool		tryElse(void);
		void		tryConvertion(void);

		void		findType(void);

		
	protected:
		/*dATA*/
	
	private:
		Convert(void);										// Canonical
		
		std::string		_privateStr;
		char			_type;
		
		char			_c;
		int				_i;
		float			_f;
		double			_d;

		int				_char;
		int				_int;
		int				_float;
		int				_double;
};
// ****************************************************************** Classes //



// Non Member functions ***************************************************** //
std::ostream &operator<<( std::ostream &out, Convert const &input );
// ***************************************************** Non Member functions //


#endif // ********************************************************** CONVERT_H //