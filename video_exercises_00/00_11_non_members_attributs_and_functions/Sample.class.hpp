/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 18:37:35 by alambert          #+#    #+#             */
/*   Updated: 2023/03/03 20:56:58 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H

class Sample
{

public:
	Sample();
	~Sample();

	static int getNbInst(void);
	// static sert ici a declarer une fonction non membre,
	// c-a-d une fonction qui existe au niveau de la classe,
	// mais pas au niveau de l'instance ou des instances.

	// Compte tenu que c'est une fonction non membre, 
	// elle ne prendra pas de pointeur cache en parametre,
	// en consequence on ne pourra pas utiliser this->fontion
	// ou this->attribu.
	// Pour faire reference a un attribu ou une fonction non membre
	// on utilise la syntaxe de type Sample::_NbInst


private:
	static int	_NbInst; 
	// static sert ici a declarer un attribu non membre,
	// c-a-d une attribu qui existe au niveau de la classe,
	// mais pas au niveau de l'instance ou des instances.

	// Compte tenu que c'est un attribu non membre, 
	// il ne prendra pas de pointeur cache en parametre,
	// en consequence on ne pourra pas utiliser this->fontion
	// ou this->attribu
	// Pour faire reference a un attribu ou une fonction non membre
	// on utilise la syntaxe de type Sample::_NbInst

};

#endif // *************** SAMPLE_CLASS_H //