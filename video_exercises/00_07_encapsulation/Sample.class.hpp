/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 11:41:18 by alambert          #+#    #+#             */
/*   Updated: 2023/03/03 13:37:49 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H

class Sample
{
	// public et private permettent de controler l'encapsulation
	// de notre classe, a savoir les attributs ou les fonctions 
	// membre qui seront visibles uniquement depuis l'interieur
	// de la classe, ou bien depuis l'exterieur de la classe.
	
	// Lorsqu'on declare des fonctions ou des attributs qui seront
	// publics, il sera possible d'y acceder depuis l'interieur de 
	// la classe et de l'exterieur de la classe.

	// Au contraire, lorsqu'on declare des fonctions membreou des 
	// attributs en private, ces fonctions ou ces attributs ne seront
	// accessibles que depuis l'interieur de la classe.

	// => Cela permet de choisir ce que l'on met a la disposition de 
	// l'utilisateur de la classe et de maquer les details 
	// d'implementation de la classe.

public:

	int	publicFoo;

	Sample(void);
	~Sample(void);

	void	publicBar(void) const;



private:

	int		_privateFoo;
	void	_privateBar(void) const;

};

#endif // ****************************************** SAMPLE_CLASS_H //