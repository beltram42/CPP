/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 13:05:25 by alambert          #+#    #+#             */
/*   Updated: 2023/04/16 21:19:19 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

// Constructor Destructor *************************************************** //
Base::~Base( void )	{
}
// *************************************************** Constructor Destructor //


// Member functions ********************************************************* //

// -- Operators overload ---------------------------------------------------- //
// ---------------------------------------------------- Operators overload -- //
// -- Accessors ------------------------------------------------------------- //
// ------------------------------------------------------------- Accessors -- //

// ********************************************************* Member functions //


// Non Member functions ***************************************************** //
Base *generate( void )	{
    switch (rand() % 3)	{
        case (0):	{
           return (new A); 
        }
        case (1):	{
            return (new B);
        }
        default:
            return (new C); 
    }
}

void identify(Base* p)	{
    if (dynamic_cast<A*>(p) != NULL)
        std::cout << "Class A object identified" << std::endl;
    else if (dynamic_cast<B*>(p) != NULL)
        std::cout << "Class B object identified" << std::endl;
    else if (dynamic_cast<C*>(p) != NULL)
        std::cout << "Class C object identified" << std::endl;
    else
        std::cout << "Unknown Class" << std::endl;
}

void identify(Base& p)	{
    Base &checkbox = p;

    try	{   
        checkbox = (dynamic_cast<A&>(p)); 
        std::cout << "Class A object identified" << std::endl;
        return;
    }
    catch(const std::exception& e)	{}
    try	{
        checkbox = (dynamic_cast<B&>(p));
        std::cout << "Class B object identified" << std::endl;
        return;
    }
    catch(const std::exception& e)	{}
    try	{
        checkbox = (dynamic_cast<C&>(p));
        std::cout << "Class C object identified" << std::endl;
        return;
    }
    catch(const std::exception& e)	{}
}
// ***************************************************** Non Member functions //
