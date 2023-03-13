/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 20:53:25 by alambert          #+#    #+#             */
/*   Updated: 2023/03/03 22:05:43 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

int	main(void) {

	Sample	instance0;
	Sample*	instancep = &instance0; 
	// *instancep est un pointeur vers l'instance instance 0 de type Sample
	// instancep est du type adresse de Sample

	int		Sample::*p = NULL; 
	// C'est la syntaxe de declaration d'un pointeur vers un attribu membre
	// de type int, membre de ma classe Sample, qu'on initialise a NULL,
	// et qui permettra de recuperer l'adresse d'un attribu membre de ma
	// classe Sample.
	// => On va s'en servir pour recuperer Foo.

	void	(Sample::*f)(void) const;
	// C'est la syntaxe de declaration d'un pointeur sur fonction
	// on va s'en servir pour appeler la fonction bar const

	p = &Sample::Foo;
	// On assigne l'adresse du membre Foo au pointeur
	// mais l'instance n'est pas encore specifiee.
	// Pour savoir de quelle instance on parle quand on veut
	// utiliser l'attribu Foo, on doit preciser l'instance concernee
	// et utiliser :
	// - l'operateur .* (cf. instance0.*p = 21) qui permettra de preciser
	//   a quel attribu de quelle instance de p[ile on fait reference,
	// - l'operateur ->* (cf. instancep->*p = 42) lorsqu'il s'agit d'un
	//   pointeur sur instance.


	std::cout << "Value of member Foo: " << instance0.Foo << std::endl;
	instance0.*p = 21;
	std::cout << "Value of member Foo: " << instance0.Foo << std::endl;
	instancep->*p = 42;
	std::cout << "Value of member Foo: " << instance0.Foo << std::endl;

	f = &Sample::bar;
	// On assigne a f l'adresse de la fonctio bar dans la classe Sample
	// =>*f pointera sur bar...
	// mais l'instance n'est pas encore specifiee.
	// => on va utiliser a nouveau les operateur .* et ->* pour specifier 
	// l'instance ou sera utilise le pointeur sur fonction membre *f.
	

	(instance0.*f)();
	(instancep->*f)();
	
	return 0;
}