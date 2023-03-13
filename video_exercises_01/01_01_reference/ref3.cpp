/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ref3.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 21:31:49 by alambert          #+#    #+#             */
/*   Updated: 2023/03/11 13:50:01 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Student3.class.hpp"


int	main(void) {
	Student	bob("bfubar");
	Student const	john = Student("jfubar");

	std::cout << "bob.getLoginRefConst() = " << bob.Student::getLoginRefConst() << std::endl;
	std::cout << std::endl;

	std::cout << "john.getLoginRefConst() = " << john.Student::getLoginRefConst() << std::endl;
	std::cout << std::endl;

	std::cout << "*(bob.getLoginPtrConst()) = " << *(bob.Student::getLoginPtrConst()) << std::endl;
	std::cout << std::endl;

	std::cout << "*(john.getLoginPtrConst()) = " << *(john.Student::getLoginPtrConst()) << std::endl;
	std::cout << std::endl;

	std::cout << "bob.getLoginRef() = ''bobfubar''" << std::endl;
	bob.getLoginRef() = "bobfubar";
	std::cout << "bob.getLoginRefConst() = " << bob.Student::getLoginRefConst() << std::endl;
	std::cout << std::endl;

	std::cout << "*(bob.getLoginPtr()) = ''bobbyfubar''" << std::endl;
	*(bob.getLoginPtr()) = "bobbyfubar";
	std::cout << "bob.getLoginRefConst() = " << bob.Student::getLoginRefConst() << std::endl;
	std::cout << std::endl;
}