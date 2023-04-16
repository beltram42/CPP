/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialize.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 13:05:25 by alambert          #+#    #+#             */
/*   Updated: 2023/04/16 18:26:49 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialize.hpp"

// Constructor Destructor *************************************************** //
// *************************************************** Constructor Destructor //



// Member functions ********************************************************* //

// -- Operators overload ---------------------------------------------------- //
// ---------------------------------------------------- Operators overload -- //
// -- Accessors ------------------------------------------------------------- //
// ------------------------------------------------------------- Accessors -- //

// ********************************************************* Member functions //



// Non Member functions ***************************************************** //
uintptr_t	serialize(Data * ptr)	{
    uintptr_t newPtr = reinterpret_cast<uintptr_t>(ptr);
    return(newPtr);
}

Data *		deserialize(uintptr_t raw)	{
    Data* ptr = reinterpret_cast<Data *>(raw);
    return(ptr);
}

void	setData(Data * stname, int i, std::string s, void * p)	{
	stname->i = i;
	stname->str = s;
	stname->ptr = p;
}

void		displayData(Data * stname)	{
	std::cout << YELLOW << "-----------------------------------------" << CLEAR << std::endl;
    std::cout << "int i: " << stname->i << std::endl; 
    std::cout << "std::string str: " << stname->str << std::endl;
    std::cout << "void * ptr: " << stname->ptr << std::endl;  
    std::cout << YELLOW << "-----------------------------------------" << CLEAR << std::endl;
}
// ***************************************************** Non Member functions //
