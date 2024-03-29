/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 16:21:56 by alambert          #+#    #+#             */
/*   Updated: 2023/03/26 17:02:01 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Integer.class.hpp"

int	main(void)	{
	Integer		inst0(30);
	Integer		inst1(10);
	Integer		inst2(0);

	std::cout << "Value of inst0: " << inst0 << std::endl;

	std::cout << "Value of inst1: " << inst1 << std::endl;
	inst1 = Integer(12);
	std::cout << "Valueof inst1: " << inst1 << std::endl;

	std::cout << "Value of inst2: " << inst2 << std::endl;
	inst2 = inst0 + inst1;
	std::cout << "Valueof inst2: " << inst2 << std::endl;
	
	return (0);
}