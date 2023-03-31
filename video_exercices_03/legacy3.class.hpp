/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   legacy3.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 17:14:24 by alambert          #+#    #+#             */
/*   Updated: 2023/03/30 10:33:22 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LEGACY3_CLASS_H
# define LEGACY3_CLASS_H

// Libraries ******************************* //
#include <iostream>
#include <string>
// ******************************* Libraries //



// Classes ********************************* //
class Quadruped {
	// peut acceder a public, protected et private
	public:

	void	run();


	protected:

	Leg			legs[4];


	private:

	std::string	name;
};


class Dog : public Quadruped	{
	// peut acceder a run() et a legs

};

// ********************************* Classes //


int	main(void)	{
	// peut acceder a run()
}


#endif // ****************** LEGACY3_CLASS_H //