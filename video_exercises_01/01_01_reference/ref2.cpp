/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ref2.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 21:12:19 by alambert          #+#    #+#             */
/*   Updated: 2023/03/10 21:31:31 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

//Passages de parametres par reference :
//

void	byPtr(std::string* str) {
	*str += " and dolfins";
}

void	byconstPtr(std::string const * str) {
	std::cout << "*str = " << *str << std::endl;
}


void	byRef(std::string& str) {
	str += " and ponies";
}

void	byconstRef(std::string const & str) {
	std::cout << "str = " << str << std::endl;
}


int	main(void) {

	std::cout << std::endl;

	std::string	str = "I like butterflies";
	std::cout << "str = " << str << std::endl;
	byPtr(&str);
	byconstPtr(&str);

	std::cout << std::endl;

	str = "I like otters";
	std::cout << "str = " << str << std::endl;
	byRef(str);
	byconstRef(str);

	std::cout << std::endl;

	return (0);
}