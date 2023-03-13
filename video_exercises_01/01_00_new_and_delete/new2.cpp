/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new2.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 16:43:00 by alambert          #+#    #+#             */
/*   Updated: 2023/03/10 19:00:59 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Student2.class.hpp"

int	main() {

	Student*	students;
	students = new Student[42];
	//on alloue, sans calcul de taille a malloquer, un tableau de 42 students,
	// en revanche, du coup l'operateur new ... [array] ne prend pas de parametres.


	delete [] students; 
	// syntaxe pour desallouer l'espace reserve pour l'instance new [array]
	// => destructeur pour jim

	//return 0;
}