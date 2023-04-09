/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alambert <alambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 16:34:46 by alambert          #+#    #+#             */
/*   Updated: 2023/04/09 15:26:33 by alambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{   
    {
        try
        {  
            std::cout << MAGENTA << "---------------------------------------" << std::endl;
            std::cout << " Tests with valid Signee and Exec grade " << std::endl;
            std::cout << "---------------------------------------" << CLEAR << std::endl;

            std::cout << YELLOW << "---------------------------------------" << CLEAR << std::endl;
            std::cout << GREEN << " Bureaucrat Creation "<< CLEAR << std::endl;
            std::cout << YELLOW << "---------------------------------------" << CLEAR << std::endl;
            Bureaucrat Helen("Helen", 1);
            Bureaucrat Tom("Tom", 70);
            Bureaucrat Mathis("Mathis", 4);

            std::cout << Helen;
            std::cout << Tom;
            std::cout << Mathis;
    
            std::cout << YELLOW << "---------------------------------------" << CLEAR << std::endl;
            std::cout << GREEN << " Forms Creation "<< CLEAR << std::endl;
            std::cout << YELLOW << "---------------------------------------" << CLEAR << std::endl;
            ShrubberyCreationForm ShcrubberyAgreement("Deep Thought Park");
            PresidentialPardonForm PresidentialAgreement("Arthur Dent");
            RobotomyRequestForm RobotomyAgreement("Marvin The Paranoid Android");
            std::cout << ShcrubberyAgreement;
            std::cout << PresidentialAgreement;
            std::cout << RobotomyAgreement;

            std::cout << YELLOW << "---------------------------------------" << CLEAR << std::endl;
            std::cout << GREEN << " Forms signature "<< CLEAR << std::endl;
            std::cout << YELLOW << "---------------------------------------" << CLEAR << std::endl;

            Helen.signForm(ShcrubberyAgreement);
            Helen.signForm(PresidentialAgreement);
            Helen.signForm(RobotomyAgreement);
            std::cout << ShcrubberyAgreement;
            std::cout << PresidentialAgreement;
            std::cout << RobotomyAgreement;

            std::cout << YELLOW << "---------------------------------------" << CLEAR << std::endl;
            std::cout << GREEN << " Forms execution "<< CLEAR << std::endl;
            std::cout << YELLOW << "---------------------------------------" << CLEAR << std::endl;

            std::cout << YELLOW << "---------------------------------------" << CLEAR << std::endl;
            std::cout << GREEN  << " SCHRUBBERY EXECUTION "<< CLEAR << std::endl;
            std::cout << YELLOW << "---------------------------------------" << CLEAR << std::endl;
            Helen.executeForm(ShcrubberyAgreement);

            std::cout << YELLOW << "---------------------------------------" << CLEAR << std::endl;
            std::cout << GREEN << " PRESIDENTIAL EXECUTION "<< CLEAR << std::endl;
            std::cout << YELLOW << "---------------------------------------" << CLEAR << std::endl;
            Helen.executeForm(PresidentialAgreement);

            std::cout << YELLOW << "---------------------------------------" << CLEAR << std::endl;
            std::cout << GREEN << " ROBOTIMISATION EXECUTION "<< CLEAR << std::endl;
            std::cout << YELLOW << "---------------------------------------" << CLEAR << std::endl;
            Helen.executeForm(RobotomyAgreement);
            Helen.executeForm(RobotomyAgreement);
            Helen.executeForm(RobotomyAgreement);
            Helen.executeForm(RobotomyAgreement);

            std::cout << YELLOW << "---------------------------------------" << CLEAR << std::endl;
            std::cout << GREEN << " Objects Destruction "<< CLEAR << std::endl;
            std::cout << YELLOW << "---------------------------------------" << CLEAR << std::endl;
            }
            catch(const std::exception& e)
            {
                std::cerr << "Error: " << e.what() << '\n';
        }
    }
    // Tests with invalid Signee grade
    {
    std::cout << MAGENTA << "---------------------------------------" << std::endl;
    std::cout << " Tests with invalid Signee grade " << std::endl;
    std::cout << "---------------------------------------" << CLEAR << std::endl;
    try
    {
        std::cout << YELLOW << "---------------------------------------" << CLEAR << std::endl;
        std::cout << GREEN << " Bureaucrat Creation "<< CLEAR << std::endl;
        std::cout << YELLOW << "---------------------------------------" << CLEAR << std::endl;
        Bureaucrat Helen("Helen", 146);
        
        std::cout << YELLOW << "---------------------------------------" << CLEAR << std::endl;
        std::cout << GREEN << " Forms Creation "<< CLEAR << std::endl;
        std::cout << YELLOW << "---------------------------------------" << CLEAR << std::endl;

        ShrubberyCreationForm ShcrubberyAgreement("Oolon Colluphid Park");
        std::cout << ShcrubberyAgreement;

        Helen.signForm(ShcrubberyAgreement);
        std::cout << ShcrubberyAgreement;

    }
    catch(const std::exception& e)	{
        std::cerr << e.what() << '\n';
    }
    }
    // Test with unsigned form
    {
        try	{
			std::cout << MAGENTA << "---------------------------------------" << std::endl;
    		std::cout << " Tests with unsigned form " << std::endl;
    		std::cout << "---------------------------------------" << CLEAR << std::endl;

            std::cout << YELLOW << "---------------------------------------" << CLEAR << std::endl;
            std::cout << GREEN << " Bureaucrat Creation "<< CLEAR << std::endl;
            std::cout << YELLOW << "---------------------------------------" << CLEAR << std::endl;
            Bureaucrat Helen("Helen", 50);

            std::cout << YELLOW << "---------------------------------------" << CLEAR << std::endl;
            std::cout << GREEN << " Forms Creation "<< CLEAR << std::endl;
            std::cout << YELLOW << "---------------------------------------" << CLEAR << std::endl;

            ShrubberyCreationForm ShcrubberyAgreement("Slatibartfast garden");
            PresidentialPardonForm PresidentialAgreement("Benjy Mouse");
            RobotomyRequestForm RobotomyAgreement("Deep Thought");
            std::cout << ShcrubberyAgreement;
            std::cout << PresidentialAgreement;
            std::cout << RobotomyAgreement;

            std::cout << YELLOW << "---------------------------------------" << CLEAR << std::endl;
            std::cout << GREEN  << " SCHRUBBERY EXECUTION "<< CLEAR << std::endl;
            std::cout << YELLOW << "---------------------------------------" << CLEAR << std::endl;
            Helen.executeForm(ShcrubberyAgreement);  
            std::cout << YELLOW << "---------------------------------------" << CLEAR << std::endl;
            std::cout << GREEN << " PRESIDENTIAL EXECUTION "<< CLEAR << std::endl;
            std::cout << YELLOW << "---------------------------------------" << CLEAR << std::endl;
            Helen.executeForm(PresidentialAgreement);   
            std::cout << YELLOW << "---------------------------------------" << CLEAR << std::endl;
            std::cout << GREEN << " ROBOTIMISATION EXECUTION "<< CLEAR << std::endl;
            std::cout << YELLOW << "---------------------------------------" << CLEAR << std::endl;
            Helen.executeForm(RobotomyAgreement);
            std::cout << YELLOW << "---------------------------------------" << CLEAR << std::endl;
            std::cout << GREEN << " Objects Destruction "<< CLEAR << std::endl;
            std::cout << YELLOW << "---------------------------------------" << CLEAR << std::endl;
        }
        catch(const std::exception& e)	{
            std::cerr << e.what() << '\n';
        }
        // Tests with invalid Exec grade
        {
            std::cout << MAGENTA << "---------------------------------------" << std::endl;
            std::cout << " Tests with invalid Exec grade" << std::endl;
            std::cout << "---------------------------------------" << CLEAR << std::endl;
            try
            {
                Bureaucrat Tom("Tom", 20);
                Bureaucrat Helen("Helen", 6);
                std::cout << Tom;
                std::cout << Helen;
                PresidentialPardonForm PresidentialAgreement("Fenchurch");
                std::cout << PresidentialAgreement;
                Tom.signForm(PresidentialAgreement);
                std::cout << PresidentialAgreement;
				std::cout << Helen.getName() << " will try to execute form." << std::endl;
                Helen.executeForm(PresidentialAgreement);
            }
            catch(const std::exception& e)
            {
                std::cerr << e.what() << '\n';
            }
        }
    } 
}