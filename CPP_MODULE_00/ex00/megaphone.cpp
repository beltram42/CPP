/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 15:59:51 by alambert          #+#    #+#             */
/*   Updated: 2023/03/04 16:02:35 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cstring>
#include <cctype>

int main(int argc, char* argv[])
{
    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
	{
        std::string str;
        for (int i(1); i < argc; i++)
		{
            str += argv[i];
            if (i < argc - 1)
                str += " ";
        }
        for (std::size_t i(0); i < str.size(); i++) {
            if (std::islower(str[i]))
                str[i] = std::toupper(str[i]);
        }
        std::cout << str << std::endl;
    }
    return 0;
}

