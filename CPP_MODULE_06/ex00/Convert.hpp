/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 13:05:31 by alambert          #+#    #+#             */
/*   Updated: 2023/04/09 11:18:09 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_H
# define CONVERT_H

// Libraries **************************************************************** //
#include <iostream>
#include <string>
#include <stdexcept>
#include <cstdlib>
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
		Convert(void);										// Canonical
		Convert(Bureaucrat const & inst);					// Canonical
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


		char		toChar(std::string);
		int			toInt(std::string);
		float		toFloat(std::string);
		double		toDouble(std::string);
		void		toNumeral(std::string);

		

	// -- Exception classes ------------------------------------------------- //
	// ------------------------------------------------- Exception classes -- //
	protected:
		/*dATA*/
	
	private:
		std::string		_privateNumber;
		char *			_startPtr;
		char *			_endPtr;
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