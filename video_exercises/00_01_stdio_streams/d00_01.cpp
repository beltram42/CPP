/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   d00_01.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 16:10:42 by alambert          #+#    #+#             */
/*   Updated: 2023/03/01 16:28:06 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void) {
char	buff[512];

std::cout << "Hello World !" << std::endl;

std::cout << "Input a word: ";
std::cin >> buff;
std::cout << "You entered: ["<<buff<<"]" << std::endl;

return 0;
}