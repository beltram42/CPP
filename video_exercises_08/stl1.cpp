/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 14:55:31 by alambert          #+#    #+#             */
/*   Updated: 2023/04/21 15:12:27 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <map>
#include <vector>
#include <list>

class IOperation;

in	main(void)	{
	std::list<int>						list1;
	std::map<std::string, IOperation*>	map1;
	std::vector<int>					v1;
	std::vector<int>					v2(42, 100);

	lst1.push_back(1);
	lst1.push_back(17);
	lst1.push_back(42);

	map1["opA"] = new OperationA;
	map1["OpB"] = new OperationB;

	std::list<int>::const_iterator		it;
	std::list<int>::const_iterator		ite = lst1.end();

	for (it = lst1.begin(); it!= ite; ++it)	{
		std::cout << *it << std::endl;
	}

	return 0;
}