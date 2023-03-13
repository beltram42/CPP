/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 15:22:34 by alambert          #+#    #+#             */
/*   Updated: 2023/03/13 18:35:59 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>


int	main(void) {
	std::string	hi("HI THIS IS BRAIN");
	std:: string *stringPTR = &hi;
    std:: string &stringREF = hi;

	std::cout << "Adresse de la string en mémoire : " << &hi << std::endl;
    std::cout << "Adresse stockée dans stringPTR :  "  << stringPTR << std::endl;
    std::cout << "Adresse stockée dans stringREF :  " << &stringREF << std::endl;
	std::cout << std::endl;
    std::cout << "Valeur de la string :             " << hi << std::endl;
    std::cout << "Valeur pointée par stringPTR :    " << *stringPTR << std::endl;
    std::cout << "Valeur pointée par stringREF :    " << stringREF << std::endl;
}
