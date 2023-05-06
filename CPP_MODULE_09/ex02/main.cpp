/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 16:34:46 by alambert          #+#    #+#             */
/*   Updated: 2023/05/06 21:45:02 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"


int	main(int argc, char ** argv)	{
	if (argc < 2)	{
		std::cerr << "Error: Invalid number of arguments." << std::endl;
		return (1);
	}
	try	{
		std::string			input;
		std::list<unsigned int>		lst;
		unsigned int		num;

		for (int i = 1; i < argc; i++)	{
			input += argv[i];
			input += ' ';
		}
		lst.clear();
		std::istringstream	iss(input);
		// std::cout << "input = " << input << std::endl;
		while (iss >> num)	{
			lst.push_back(num);
			// std::cout << "num = " << num << std::endl;
		}
		if (lst.empty())	{
			throw std::invalid_argument("Invalid input.");
			return (1);
		}
		std::cout << "lst before =" << std::endl;
		for (int n : lst)
			std::cout << n << " ";
		std::cout << std::endl << std::endl;
		
		merge_insertion_sort(lst);

		std::cout << "lst after =" << std::endl;
		for (int n : lst)
			std::cout << n << " ";
		std::cout << std::endl;
	}
	catch (std::exception &e)	{
		std::cerr << "Error: " << e.what() << std::endl;
		return 1;
	}
	
	return (0);
}