/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 10:36:15 by alambert          #+#    #+#             */
/*   Updated: 2023/03/03 11:21:18 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H

class Sample {

public:

	float const pi;
	int	qd;

	Sample(float const f);
	~Sample(void);

	void	bar(void) const;
	// const, place ici apres la fonction
	// avant le ; signifie au compilateur
	// que cette fonction membre ne modifiera
	// jamais l'instance courrante.
	// Ce qui veut dire que nullepart dans le
	// code de cette fonction on n'aura une 
	// assignation du type this->attribut = valeur.
};


#endif // ************************SAMPLE_CLASS_H //