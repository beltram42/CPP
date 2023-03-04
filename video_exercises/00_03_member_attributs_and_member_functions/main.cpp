/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 17:57:38 by alambert          #+#    #+#             */
/*   Updated: 2023/03/03 10:56:42 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

int	main(void) {
	Sample	instance0; // instance0 est une instance de classe de type Sample

	instance0.foo = 42; // ici on utlise l'attribut foo de la variable instance, instance est une variable de pile comme en C ; si ca avait ete un pointeur on aurait utilse "->""
	std::cout << "instance0.foo: " << instance0.foo << std::endl;
	
	instance0.bar();

	return 0;
}