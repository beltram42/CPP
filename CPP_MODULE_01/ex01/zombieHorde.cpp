/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 15:21:42 by alambert          #+#    #+#             */
/*   Updated: 2023/03/13 17:23:57 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


// Member functions ********************************************************* //
// ********************************************************* Member functions //


// Non Member functions ***************************************************** //

Zombie*		zombieHorde(int N, std::string name) {
	Zombie	*Horde = new Zombie[N];

	if (!Horde)
		return ( NULL );
	for ( int i = 0; i < N; i++ )
		Horde[i].setName(name);
	return (Horde);
}
// ***************************************************** Non Member functions //