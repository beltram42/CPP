/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 16:34:46 by alambert          #+#    #+#             */
/*   Updated: 2023/03/30 18:56:29 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(){

	ScavTrap	Toc("Toc");
	
	Toc.guardGate();
	Toc.attack("someone else");
	Toc.attack("someone else");
	Toc.attack("someone else");
	Toc.attack("someone else");
	Toc.attack("someone else");
	Toc.attack("someone else");
	Toc.attack("someone else");
	Toc.attack("someone else");
	Toc.attack("someone else");
	Toc.attack("someone else");
	Toc.attack("someone else");
	Toc.attack("someone else");
	Toc.attack("someone else");
	Toc.attack("someone else");
	Toc.attack("someone else");
	Toc.attack("someone else");
	Toc.attack("someone else");
	Toc.attack("someone else");
	Toc.attack("someone else");
	Toc.attack("someone else");
	Toc.attack("someone else");
	Toc.attack("someone else");
	Toc.attack("someone else");
	Toc.attack("someone else");
	Toc.attack("someone else");
	Toc.attack("someone else");
	Toc.attack("someone else");
	Toc.attack("someone else");
	Toc.attack("someone else");
	Toc.attack("someone else");
	Toc.attack("someone else");
	Toc.attack("someone else");
	Toc.attack("someone else");
	Toc.attack("someone else");
	Toc.attack("someone else");
	Toc.attack("someone else");
	Toc.attack("someone else");
	Toc.attack("someone else");
	Toc.attack("someone else");
	Toc.attack("someone else");
	Toc.attack("someone else");
	Toc.attack("someone else");
	Toc.attack("someone else");
	Toc.attack("someone else");
	Toc.attack("someone else");
	Toc.attack("someone else");
	Toc.attack("someone else");
	Toc.attack("someone else");
	Toc.attack("someone else");
	Toc.attack("someone else");
	Toc.attack("someone else");
	Toc.attack("someone else");
	Toc.attack("someone else");
	Toc.attack("someone else");

	ScavTrap	Tac(Toc);

	std::cout << std::endl;
	Tac.attack("someone");

	ScavTrap	Tic = Toc;
	Tic.attack("someone");

	return (0);
}
