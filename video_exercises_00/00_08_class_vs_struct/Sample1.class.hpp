/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample1.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 14:15:07 by alambert          #+#    #+#             */
/*   Updated: 2023/03/03 14:41:36 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE1_CLASS_H
# define SAMPLE1_CLASS_H

struct	Sample1 {
	// WTF?? c'est la meme syntaxe qu'une classe?
	// => Les struct et les classes fonctionnent 
	// strictement de la meme facon en C++.

	// La difference est qu'une struct a un scope
	// public par defaut et qu'une class a scope 
	// private par defaut.

	// => On utilisera par defaut les class plutot 
	// que les struct!
	
	int	foo;

	Sample1(void);
	~Sample1(void);

	void	bar(void) const;
};


#endif // ***************************** SAMPLE1_CLASS_H //