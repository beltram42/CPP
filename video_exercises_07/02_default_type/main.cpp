/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 17:03:09 by alambert          #+#    #+#             */
/*   Updated: 2023/04/23 17:16:26 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Vertex.class.tpp"

int	main(void)	{
	Vertex<int>		v1(12, 23, 34);
	Vertex<>		v2(12, 23, 34);

	std::cout << v1 << std::endl;
	std::cout << v2 << std::endl;

	return (0);
}