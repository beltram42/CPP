/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Student2.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 16:44:39 by alambert          #+#    #+#             */
/*   Updated: 2023/03/10 18:59:20 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STUDENT2_CLASS_H
# define STUDENT2_CLASS_H


// Libraries ********************//

#include <iostream>
#include <string>
//******************** Libraries //


// Classes **********************//

class	Student {

public:
	Student(void);
	~Student(void);

	void		setLogin(std::string token);
	std::string	getLogin(void) const;

private:

	std::string _privateLogin;

};
//********************** Classes //

#endif // ******************* STUDENT2_CLASS_H //
