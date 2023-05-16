/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 16:34:46 by alambert          #+#    #+#             */
/*   Updated: 2023/05/16 12:24:31 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

void	printArgs(int argc, char ** argv)	{
	checkInput(argc, argv);
	std::cout << std::endl;
	std::cout << "// Args ===================================================================== //" << std::endl;
	std::cout << "   Before:" << std::endl;
	std::cout << "   -------" << std::endl;
	for (int i = 1; i < argc; i++)
		std::cout << argv[i] << " ";
	std::cout << std::endl << std::endl << std::endl;
}

int	main(int argc, char ** argv)	{
	if (argc < 2)	{
		std::cerr << "Error: Invalid number of arguments." << std::endl;
		return (1);
	}

	try	{
		printArgs(argc, argv);
	}
	catch(const std::exception& e)	{
		std::cerr << "Error: " << e.what() << '\n';
	}

	try	{
		listMIS		lst(argc, argv);
		vectorMIS	vec(argc, argv);
	
		// std::cout << lst;
		// std::cout << vec;
	}
	catch(const std::exception& e)	{
		std::cerr << "Error: " << e.what() << '\n';
	}
	
	return (0);
}



// CAVE ********************************************************************* //