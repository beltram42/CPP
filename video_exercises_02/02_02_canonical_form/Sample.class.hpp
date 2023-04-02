/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 17:14:24 by alambert          #+#    #+#             */
/*   Updated: 2023/04/02 11:25:32 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H

// Libraries ******************************* //
#include <iostream>
// ******************************* Libraries //



// Classes ********************************* //
class Sample {

public:

	
	Sample(int const n);

	Sample (void);								// Canonical : constructeur par defaut.
												//				si on n'en a pas besoin
												//				on le met en private.

	Sample(Sample const & src);					// Canonical : constructeur par copie,
												//				c-a-d un constructeur
												//				prenant en parametre une
												//				instance de la classe qu'on
												//				est en train de declarer, 
												//				afin de pouvoir realiser
												//				une copie de cette classe
												//				(nouvelle instance de creee).
												
	~Sample(void);								// Canonical : destructeur par defaut,
												//				pour l'instant non virtuel.

	Sample & 	operator=(Sample const & rhs);	// Canonical : l'operateur = d'assignation,
												//				qui permettra de faire une
												//				assignation a partir d'une
												//				autre instance de cette
												//				classe (m-a-j de l'instance
												//				courante).

	int		getValue(void) const;


private:

	int		_privateFoo;

};
// ********************************* Classes //



// Non Member ****************************** //
std::ostream &	operator<<(std::ostream & o, Sample const & i);
// ****************************** Non Member //



#endif // ****************** SAMPLE_CLASS_H //