/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 16:34:46 by alambert          #+#    #+#             */
/*   Updated: 2023/04/15 16:40:27 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"


int	main(int ac, char **av)	{

	if (ac != 2)
    {
        std::cout << "Error: Invalid number of arguments: One argument only pls!" << std::endl;
        return (1);
    }


	Convert		i(av[1]);

	i.findType();
	i.tryConvertion();
	std::cout << i;
	return 0;
}

	// Convert		i("nimportequoi");
	// Convert		i("42.0f");
	// Convert		i("3.402823466e+38F");
	// Convert		i("3.402823468e+38F");
	// Convert		i("1.402823466e+98");
	// Convert		i("3.402823466e+38");
	// Convert		i("-3.402823466e+39");
	// ADD LES MIN !!!! 

	// Convert		i("0");
	// Convert		i("p");
	// Convert		i("112");
	// Convert		i("254");
	// Convert		i("-812");
	// Convert		i("2147483648");
	// Convert		i("2147483647");
	// Convert		i("42.01");


	// Convert		i("nan");
	// Convert		i("+inf");
	// Convert		i("-inf");
	// Convert		i("nanf");
	// Convert		i("+inff");
	// Convert		i("-inff");