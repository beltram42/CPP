/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 16:34:46 by alambert          #+#    #+#             */
/*   Updated: 2023/04/05 17:24:36 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()	{       
    //-------------   Tests with valid _grade -----------------------------
    {
        std::cout << YELLOW "------------------------------" << std::endl;
        std::cout << " Tests with valid grade "  << std::endl;
        std::cout <<  "------------------------------" CLEAR << std::endl;
        try	{
            Bureaucrat bureaucrat("Helen", 10);
        	Form form("cerfa-4210", 10, 2);

       		std::cout << bureaucrat;
        	std::cout << form;
			std::cout << std::endl;

        	bureaucrat.signForm(form);
        	std::cout << form;
			std::cout << std::endl;

        	bureaucrat.operator--();
        	bureaucrat.signForm(form);
        	std:: cout << form;
			std::cout << std::endl;
        }
        catch(const std::exception& e)	{
            std::cerr << "Error: " << e.what() << '\n';
        }
    }
    // Test with invalid grade at construction
    {
        std::cout << YELLOW "-----------------------------------------" << std::endl;
        std::cout << " Tests with invalid grade "  << std::endl;
        std::cout <<  "-----------------------------------------" << CLEAR << std::endl;
        Bureaucrat bureaucrat("Helen", 11);
        Form form("Cerfa-4210", 10, 2);
		std::cout << std::endl;

        std::cout << bureaucrat;
        std:: cout << form;
		std::cout << std::endl;

        bureaucrat.signForm(form);
        std:: cout << form;
		std::cout << std::endl;
        
    }
}