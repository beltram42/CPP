/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 17:45:10 by alambert          #+#    #+#             */
/*   Updated: 2023/03/26 17:56:24 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample.class.hpp"

int	main(void)	{
	Sample	inst0;
	Sample	inst1(42);
	Sample	inst2(inst0);

	std::cout << inst0 << std::endl;
	std::cout << inst1 << std::endl;
	std::cout << inst2 << std::endl;

	inst2 = inst1;
	std::cout << inst2 << std::endl;

	return (0);
}