/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Student3.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 21:32:55 by alambert          #+#    #+#             */
/*   Updated: 2023/03/11 13:50:05 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STUDENT3_CLASS_H
# define STUDENT3_CLASS_H

// Libraries ******************************* //

#include <iostream>
#include <string>
// ******************************* Libraries //


// Classes ********************************* //
class Student {

public:

	Student(std::string const & login);
	~Student(void);

	void	setLogin(std::string token);

	std::string&		getLoginRef(void);
	std::string const & getLoginRefConst (void) const;
	std::string*		getLoginPtr();
	std::string const * getLoginPtrConst() const;

private:

	std::string	_privateLogin;

};
// ********************************* Classes //



#endif // ***********************************STUDENT3_CLASS_H //