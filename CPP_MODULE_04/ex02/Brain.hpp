/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 16:53:59 by alambert          #+#    #+#             */
/*   Updated: 2023/04/02 14:14:10 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef BRAIN_H
# define BRAIN_H

// Libraries **************************************************************** //
#include <iostream>
// **************************************************************** Libraries //



// Colours ****************************************************************** //
# define DEFAULT	"\033[0;39m"
# define BLACK		"\033[0;30m"
# define RED		"\033[0;31m"
# define RED_B		"\033[1;31m"
# define L_RED		"\033[0;91m"
# define GREEN		"\033[0;32m"
# define GREEN_B	"\033[1;32m"
# define L_GREEN	"\033[0;92m"
# define YELLOW		"\033[0;33m"
# define L_YELLOW	"\033[0;93m"
# define YELLOW_B	"\033[1;33m"
# define BLUE		"\033[0;34m"
# define BLUE_B		"\033[1;34m"
# define L_BLUE		"\033[0;94m"
# define PINK		"\033[0;35m"
# define L_PINK		"\033[0;95m"
# define PINK_B		"\033[1;95m"
# define SKY		"\033[0;36m"
# define SKY_B		"\033[1;36m"
# define L_CYAN		"\033[0;96m"
# define GREY		"\033[0;37m"
# define D_GREY		"\033[0;90m"
# define WHITE		"\033[0;97m"
# define WHITE_B	"\033[1;97m"
# define CLEAR		"\e[0m"
// ****************************************************************** Colours //



// Enums ******************************************************************** //
// ******************************************************************** Enums //



// Classes ****************************************************************** //
class	Brain	{

public:
	Brain(void);												// Canonical
	Brain(Brain const & inst);									// Canonical

	virtual ~Brain(void);										// Canonical


	Brain &		operator=(Brain const & rhs);					// Canonical

	void		setIdeas(std::string ideas[100]);
	std::string	getIdea(int i) const;

	


protected:
		//** dATA **//

private:

	std::string	_privateIdeas[100];

};
// ****************************************************************** Classes //



// Non Member functions ***************************************************** //
// ***************************************************** Non Member functions //


#endif // ********************************************************** BRAIN_H //