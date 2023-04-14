/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 16:34:46 by alambert          #+#    #+#             */
/*   Updated: 2023/04/14 19:20:18 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"


int	main(void)	{
	// Convert		i("0");
	// Convert		i("112");
	// Convert		i("-812");
	// Convert		i("2147483648");
	Convert		i("214748364");
	// Convert		i("254");
	// Convert		i("3.402823466e+38F");
	// Convert		i("42.0f");
	// Convert		i("p");
	// Convert		i("1.402823466e+98");



	// Convert		i("nan");
	// Convert		i("+inf");
	// Convert		i("-inf");
	// Convert		i("nanf");
	// Convert		i("+inff");
	// Convert		i("-inff");
	

	try
	{
		i.findType();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	i.tryConvertion();
	std::cout << i;
	
}