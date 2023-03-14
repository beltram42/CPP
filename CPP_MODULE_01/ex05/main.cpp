/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 15:28:06 by alambert          #+#    #+#             */
/*   Updated: 2023/03/14 01:14:37 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void)
{
    Harl harlie;
    
    harlie.complain("DEBUG");
    harlie.complain("INFO");
    harlie.complain("WARNING");
    harlie.complain("ERROR");
    harlie.complain("");
	return (0);
}