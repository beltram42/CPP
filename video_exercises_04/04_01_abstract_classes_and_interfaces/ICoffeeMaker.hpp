/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICoffeeMaker.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 10:11:20 by alambert          #+#    #+#             */
/*   Updated: 2023/04/02 10:42:35 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICOFFEEMAKER_H
# define ICOFFEEMAKER_H

// Libraries **************************************************************** //
#include <iostream>
#include <string>
// **************************************************************** Libraries //



// Colours ****************************************************************** //
// ****************************************************************** Colours //



// Enums ******************************************************************** //
// ******************************************************************** Enums //



// Classes ****************************************************************** //
class	ICoffeeMaker	{

public:
	ICoffeeMaker(void);												// Cannonical
	ICoffeeMaker(ICoffeeMaker const & inst);						// Cannonical

	virtual ~ICoffeeMaker(void);									// Cannonical

	virtual void		fillWaterTank(IWaterSource * target) = 0;
	virtual ICoffee*	makeCoffee(std::string const & type) = 0;


protected:
	/*aDATA*/

private:
	/*aDATA*/

};
// ****************************************************************** Classes //



// Non Member functions ***************************************************** //
// ***************************************************** Non Member functions //


#endif // ********************************************************** ICOFFEEMAKER_H //