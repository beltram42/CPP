/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 13:05:31 by alambert          #+#    #+#             */
/*   Updated: 2023/04/12 19:10:42 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_H
# define CONVERT_H

// Libraries **************************************************************** //
#include <iostream>
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

		void		setChar(char c);
		char		getChar(void) const;
		void		setInt(int i);
		int			getInt(void) const;
		void		setFloat(float f);
		float		getFloat(void) const;
		void		setDouble(double d);
		double		getDouble(void) const;
		void		setType(char c);
		char		getType(void) const;

		void		tryChar(void);
		void		tryInt(void);
		void		tryFloating(void);
		void		tryType(void);
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
};
// ****************************************************************** Classes //



// Non Member functions ***************************************************** //
std::ostream &operator<<( std::ostream &out, Convert const &input );
// ***************************************************** Non Member functions //


#endif // ********************************************************** CONVERT_H //