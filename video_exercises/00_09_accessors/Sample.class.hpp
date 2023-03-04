/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 14:46:24 by alambert          #+#    #+#             */
/*   Updated: 2023/03/03 16:56:25 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H

class	Sample {

	// Accesseurs : fonctions proxy qui vont faire
	// l'interface entre l'utilisateur et des attributs
	// private, afin que l'utilisateur puisse acceder a
	// ces attributs, eventuellement en modifier la valeur,
	// mais qui nous permettent de garder un certain
	// controle, par ex nous assurer que les valeurs
	// sont toujours correctes.

	// En general on va prefixer ces petites fonction membre
	// par get et set, la premiere destinee a recuperer la
	// valeur d'un attribut et la deuxieme a donner une valeur
	// a cet attribut.

public:
	Sample(void);
	~Sample(void);
	int		getFoo(void) const;
	void	setFoo(int v);

private:
	int	_Foo;
	// Ici on a un attribut qui est un entier qui s'appelle _Foo,
	// declare en private parce que je ne veux pas que l'utilsateur 
	// puisse avoir acces a mon attribut, mais je veux qu'il en ait
	// un acces limite, sur lequel je vais pouvoir exercer un controle.

	// Pour cela j'ai deux fonctions membre a disposition de mon
	// utilisateur qui se trouvent dans la zone public, qui
	// sont get et set, sur mon accesseur.

	// Et on a ajoute const a notre fonction membre get, parce qu'on
	// veut que l'accesseur ait un acces en lecture et pas en ecriture
	// et donc ne modifiera pas l'instance courrante de ma classe.
};

#endif // ********************* SAMPLE_CLASS_H //