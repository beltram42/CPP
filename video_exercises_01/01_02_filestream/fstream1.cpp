/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fstream1.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 13:53:06 by alambert          #+#    #+#             */
/*   Updated: 2023/03/11 14:44:17 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>



int	main(void) {
	std::ifstream	ifs("numbers");
	// ifstream = input file stream. 
	// Ici on cree un stream d'input et on va ouvrir le fichier 
	// numbers qu'on \va lier a ce stream la.
	// Ce qui va nous donner un stream depuis lequel on va pouvoir lire,
	// dans notre cas il y aura deux entiers
	unsigned int	dest1;
	unsigned int	dest2;
	ifs >> dest1 >> dest2; // On va lire comme on le ferait depuis cin,
	// ou depuis n'importe quel stream d'entree

	std::cout << "dest1 = " << dest1 << " dest2 = " << dest2 << std::endl;
	ifs.close(); // fermeture du stream

	// ----------------------------------

	std::ofstream	ofs("test.out");
	// ofstream = output file stream
	// Pas besoin de creer le fichier prealablement,
	// il sera cree par la declaration

	ofs << "I like ponies big time" << std::endl;
	// on  peut verif le contenu du fichier avec un cat
	ofs.close();

	
}