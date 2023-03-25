/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 16:21:56 by alambert          #+#    #+#             */
/*   Updated: 2023/03/25 18:18:59 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample.class.hpp"

/*
Notation operateurs :
=====================

1 + 1 =		/notation infixe

+ 1 1 =		/notation postfixe
=> qui permet de realiser des calculs de pile

+ 1 1 =		/notation prefixe (fonctionnelle)
=> qui pourrait se rapprocher d'une
   notation du type +(1, 1), ou + serait
   la fonction qui prendrait en parametre
   un binome d'int 1 et 1 ;

=> et on pourrait aussi en faire une notation
   qui se rapprocherait d'une fonction membre :
   1.+(1)	ou 1 serait l'instance, + serait 
   la fonction, avec 1 en parametre.


Surcharge d'operateur :
=======================

cf. Integer.class.hpp :
Integer & 	operator=(Integer const & rhs);
Integer	operator+(Integer const & rhs) const;

- le mot clef operator permet de faire, d'une simple 
declaration de fonction membre de ma classe, une
surcharge d'operateur.

- il suffit de specifier de quel operateur on parle
entre le mot clef et la parenthese et ensuite on 
rentre des parametres.

- les operateurs surchargeables sont :
les unaires et les binaires ;
les ternaires ne sont pas surchargeables.

- le nombre de parametres sera directement en rapport 
avec l'unarite ou la binairite de l'operateur.

- ici, l'operateur d'assignation = est binaire :
a gauche, dans quoi je souhaite assigner, et a droite
ce que je souhaite assigner.

- idem pour l'operateur d'addition, avec a gauche un 
operande et a droite l'auttre operande.

!! Rappel :
dans C++, toute fonction membre passe en premier
parametre cache l'instance de la classe courante.


=> dans la declaration :

   Integer &	operator=(Integer const & rhs);

   operator= a bien deux parametres: 
   . l'instance courante
   . Integer const & rhs : une reference const sur une instance
     de notre classe Integer : rhs (right hand side, 
	 left hand side etant ici cache)

   (dans la declaration d'un operateur unaire, il n'y aurait
   pas de parametre puisque le parametre cache de l'instance 
   courante suffit)

L'operateur d'assignation =, met ici  a jour l'entier n de
l'instance courante, a la valeur de l'entier de l'instance rhs
qui est en parametre. Donc l'instance courante va etre modifiee,
en consequence la fonction membre :
Integer &	operator=(Integer const & rhs) n'est pas const.


=> dans la declaration :

Integer		operator+(Integer const & rhs) const;

qui a en parametre cache l'instance courante et en parametre
visible unereference const sur une instance de notre classe 
Integer : rhs
l'operateur + ne modifiant aucun des deux operandes, vu qu'un 
resultat est cree, la fonction membre operator+ n'est pas const
puisque l'instance courante n'est jamais modifiee.


Types de retour des surcharges :
================================

=> dans la declaration :

Integer &	operator=(Integer const & rhs);

L'operateur va retourner une reference d'instance de la 
classe Integer : ici, ce sera l'instance courante qui sera
renvoye, parce qu'en C et C++, on veut pouvoir ecrire :
a = b = c = d;
et qu'en consequence, pour chainer les assignations il est
necessaire de renvoyer l'instance courante.

Remarque :
si l'operateur renvoyait void, l'assignation s'arreterait a :
a = b, le reste de la declaration : = c = d ne fonctionnerait
tout simplement pas.

minutage video -> 08:30

*/