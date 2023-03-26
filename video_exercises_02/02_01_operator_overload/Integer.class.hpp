/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Integer.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 16:22:07 by alambert          #+#    #+#             */
/*   Updated: 2023/03/26 16:54:30 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTEGER_CLASS_H
# define INTEGER_CLASS_H

// Libraries ******************************* //
#include <iostream>
// ******************************* Libraries //



// Classes ********************************* //
class Integer {

public:

	Integer(int const n);
	~Integer(void);

	int		getValue(void) const;

	Integer & 	operator=(Integer const & rhs);
	Integer		operator+(Integer const & rhs) const;

private:

	int		_privateN;

};
// ********************************* Classes //



// Non Member ****************************** //
std::ostream &	operator<<(std::ostream & o, Integer const & rhs);
// ****************************** Non Member //



#endif // ****************** INTEGER_CLASS_H //



/*
Notation operateurs :
=====================

1 + 1 =		/notation infixe

1 1 + =		/notation postfixe
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
avec l'unarite ou la binarite de l'operateur.

- ici, l'operateur d'assignation = est binaire :
a gauche, dans quoi je souhaite assigner, et a droite
ce que je souhaite assigner.

- idem pour l'operateur d'addition, avec a gauche un 
operande et a droite l'autre operande.


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

L'operateur d'assignation =, met ici a jour l'entier n de
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


=> dans la declaration :

std::ostream &	operator<<(std::ostream & o, Integer const & rhs);

On va venir modifier l'operateur de flux vers la gauche <<.
Si on suit le meme raisonement que pour lesautres operateurs,
on sait que le membre gauche de notre operateur est l'instance

courante et le membre droit est constitue du parametre visible.
Comme l'operateur << :
. doit pouvoir chainer des valeurs issues d'instances differentes
. et qu'il est binaire et qu'en consequence il ne prend que
  deux parametres (le lhs et le rhs) et pas trois,
pour surcharger l'operateur << dans notre classe Integer il faudrait
pouvoir modifier le code de la classe ostream pour qu'il prenne 3
parametres ce qui n'est pas possible :
=> on ne pourra pas surcharger l'operateur via une fonction membre
de la classe Integer.
=> on va devoir le faire dans une
fonction non membre, via une surcharge de fonction, raison pour 
laquelle on lui envoie en parametres :
. une reference sur instance de ostream
. une reference sur instance de ma classe Integer, pour qu'on puisse
  faire notre affichage ; vu qu'on ne va pas modifier la classe Integer
  on met la reference en const.


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
tout simplement pas et apres a = b on ne pourrait pas evaluer
b = c puis c = d.


=> dans la declaration :

Integer		operator+(Integer const & rhs) const;

Avec l'operateur +, l'instance courante n'est pas modifiee,
si on veut ecire 1 + 2 + 3 + 4, qq soit le parenthesage ca ne
pose pas de probleme : on a pas besoin d'evaluer 2 + 3 pour
evaluer 3 + 4...

Ici on va se contenter de renvoyer une copie du resultat, donc
on va avoir une nouvelle instance qui sera creee dans l'operateur
+ et renvoyer une copie, puisqu'on ne peut pas renvoyer une
variable locale (ou une refence sur la variable locale qui
serait encore pire).


=> dans la declaration :

std::ostream &	operator<<(std::ostream & o, Integer const & rhs);

On renvoie une reference sur une instance de ostream, qui sera la meme
que celle qui est en parametre de la fonction, pour pouvoir chainer les
redirections a gauche et faire plusieurs affichages.

*/