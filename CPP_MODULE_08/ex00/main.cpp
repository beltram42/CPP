/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 16:34:46 by alambert          #+#    #+#             */
/*   Updated: 2023/04/27 15:57:01 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"




int main( void ){

    int toFind = 6;
    
    std::cout << YELLOW << std::endl;
    std::cout << " TEST WITH VECTOR " << std::endl;
    std::cout << "==================" << CLEAR<< std::endl;
    {
        std::vector<int>	container;

        for (int i = 0; i < 10; i++)	{
            container.push_back(i);
        }
        try	{
            std::vector<int>::iterator it =  easyfind(container, toFind);
            std::cout << "Found: " << *it << std::endl;
        }
        catch(const std::exception& e)	{
            std::cerr << e.what() << '\n';
        }
    }

    std::cout << YELLOW << std::endl;
    std::cout << " TEST WITH LIST " << std::endl;
    std::cout << "================" << CLEAR << std::endl;
    {
        std::list<int>listTest;
        for (int i = 0; i < 10; i++)	{
            listTest.push_back(i);
        }
        try	{
            std::list<int>::iterator it =  easyfind(listTest, toFind);
            std::cout << "Found: " << *it << std::endl << std::endl;
        }
        catch(const std::exception& e)	{
            std::cerr << e.what() << '\n';
        }
    }

}



