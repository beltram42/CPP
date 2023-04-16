/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 16:34:46 by alambert          #+#    #+#             */
/*   Updated: 2023/04/16 18:56:56 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialize.hpp"

int	main()	{
	uintptr_t	raw;
	Data *		d = new Data;
	Data *		newd;

	setData(d, 112, "Hello", NULL);
	
	std::cout << "Before cast: " << d << std::endl;
	displayData(d);
	
	raw = serialize(d);
	newd = deserialize(raw);
	std::cout << std::endl << std::endl;

	std::cout << "After recast to Data: " << newd << std::endl;
	displayData(newd);

	delete d;
	return (0);
}