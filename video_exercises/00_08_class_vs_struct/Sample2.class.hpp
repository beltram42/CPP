/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample2.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 14:06:47 by alambert          #+#    #+#             */
/*   Updated: 2023/03/03 14:41:24 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE2_CLASS_H
# define SAMPLE2_CLASS_H

class Sample2 {
	// WTF?? c'est la meme syntaxe qu'une struct?
	// => Les struct et les classes fonctionnent 
	// strictement de la meme facon en C++.

	// La difference est qu'une struct a un scope
	// public par defaut et qu'une class a scope 
	// private par defaut.

	// => On utilisera par defaut les class plutot 
	// que les struct!

	int	foo;
	
	Sample2(void);
	~Sample2(void);

	void	bar(void) const;
};


#endif // ***************************** SAMPLE2_CLASS_H //