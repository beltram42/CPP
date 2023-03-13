/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ref1.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 19:11:04 by alambert          #+#    #+#             */
/*   Updated: 2023/03/11 13:51:55 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

//Une reference est un pointeur 

//qui est constant,
//(= a initialiser au moment de la declaration parce qu'apres on ne pourra pas
//et on ne pourra pas changer ce vers quoi la reference pointe)

//toujours dereference.
//(= ne necessite pas d'etoile pour pointer vers la valeur)

//et qui n'est jamais null.
//(pas possible de ne pas l'initialiser au moment de la declaration puis de lui
// affecter une valeur 2 lignes plus bas, ou de l'initialiser a null)

//En consequence, quand on a une reference, on a l'assurance qu'elle pointe vers quelque chose.

int	main(void) {
	int	NumberOfBalls = 42;

	int*	BallsPtr = &NumberOfBalls; // pointeur classique
	int&	BallsRef = NumberOfBalls; // de type reference sur int.
	// int	BallsRef2; //FAUX, on ne peut pas creer une reference qui ne pointe sur rien

	std::cout << std::endl;
	std::cout << "NumberOfBalls: " << NumberOfBalls << std::endl;
	std::cout << "*BallsPtr: " << *BallsPtr << std::endl;
	std::cout << "BallsRef: " << BallsRef << std::endl;
	std::cout << std::endl;

	std::cout << "If we set: *BallsPtr = 21" << std::endl;
	*BallsPtr = 21;
	std::cout << "We get: NumberOfBalls = " << NumberOfBalls << std::endl;
	std::cout << std::endl;

	std::cout << "If we set: BallsRef = 84" << std::endl;
	BallsRef = 84;
	std::cout << "We get: NumberOfBalls = " << NumberOfBalls << std::endl;
	std::cout << std::endl;
	
	return 0;
}
