/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new1.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 16:43:00 by alambert          #+#    #+#             */
/*   Updated: 2023/03/10 18:34:58 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Student1.class.hpp"

int	main(void){

	Student		bob("bfubar"); // constructor pour bob;
	//Student*	jim = new Student ("jfubar"); // syntaxe utilsee dans la video et qui mqrch aussi
	Student*	jim;
	
	jim = new Student("jfubar"); //constructor pour jim;
	
	bob.setLogin("cfubar"); // syntaxe pour changer l'attribut de l'instance bob de la pile

	jim->setLogin("hfubar"); // syntaxe pour changer l'attribut de l'instance jim new (alloue sur la stack)


	delete jim; // on desalloue l'espace reserve pour l'instance jim => destructor pour jim

	return 0; // destructor pour bob
}