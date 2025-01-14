/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmarti <polmarti@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 17:50:21 by polmarti          #+#    #+#             */
/*   Updated: 2024/12/23 17:50:23 by polmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "Intern.hpp"

int main()
{
		std::cout << "\nTest Intern creates a PresidentialPardonForm\n\n"; 
		try
		{
			Bureaucrat user("Willy", 1);
			std::cout << user << std::endl;
			Intern joe;
			AForm *form = joe.makeForm("PresidentialPardon", "Willy");
			user.signForm(*form);
			user.executeForm(*form);
			delete form;
		}
		catch(std::exception &e)
		{
			std::cout << "(!) ERROR: " << e.what() << std::endl;
		}	
		std::cout << "\nTest Intern creates a ShrubberyCreationForm\n\n"; 
		try
		{
			Bureaucrat user("Willy", 1);
			std::cout << user << std::endl;
			Intern joe;
			AForm *form = joe.makeForm("ShrubberyCreation", "Willy");
			user.signForm(*form);
			user.executeForm(*form);
			delete form;
		}
		catch(std::exception &e)
		{
			std::cout << "(!) ERROR: " << e.what() << std::endl;
		}	
		std::cout << "\nTest Intern creates a RobotomyRequestForm\n\n"; 
		try
		{
			Bureaucrat user("Willy", 1);
			std::cout << user << std::endl;
			Intern joe;
			AForm *form = joe.makeForm("RobotomyRequest", "Willy");
			user.signForm(*form);
			user.executeForm(*form);
			delete form;
		}
		catch(std::exception &e)
		{
			std::cout << "(!) ERROR: " << e.what() << std::endl;
		}	
		std::cout << "\nTest Intern creates a ErrorTryForm\n\n"; 
		try
		{
			Bureaucrat user("Willy", 1);
			std::cout << user << std::endl;
			Intern joe;
			AForm *form = joe.makeForm("ErrorTry", "Willy");
			user.signForm(*form);
			user.executeForm(*form);
			delete form;
		}
		catch(std::exception &e)
		{
			std::cout << "(!) ERROR: " << e.what() << std::endl;
		}	
	return (0);
}
