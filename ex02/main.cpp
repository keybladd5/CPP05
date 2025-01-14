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
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
	{
		std::cout << "\nTest form ShrubberyCreationForm (Bureaucrat grade 1 / Form signed)\n\n"; 
		try
		{
			ShrubberyCreationForm form("Arbustos paper");
			Bureaucrat user("Willy", 1);
			std::cout << user << std::endl;
			user.signForm(form);
			user.executeForm(form);
		}
		catch(std::exception &e)
		{
			std::cout << "(!) ERROR: " << e.what() << std::endl;
		}
		std::cout << "\nTest form ShrubberyCreationForm (Bureaucrat grade 150 / Form signed)\n\n"; 
		try
		{
			ShrubberyCreationForm form("Arbustos paper");
			Bureaucrat user("Willy", 150);
			std::cout << user << std::endl;
			user.signForm(form);
			user.executeForm(form);
		}
		catch(std::exception &e)
		{
			std::cout << "(!) ERROR: " << e.what() << std::endl;
		}
		std::cout << "\nTest form ShrubberyCreationForm (Bureaucrat grade 1 / Form unsigned)\n\n"; 
		try
		{
			ShrubberyCreationForm form("Arbustos paper");
			Bureaucrat user("Willy", 1);
			std::cout << user << std::endl;
			user.executeForm(form);
		}
		catch(std::exception &e)
		{
			std::cout << "(!) ERROR: " << e.what() << std::endl;
		}
	}
	{
		std::cout << "\nTest form PresidentialPardonForm (Bureaucrat grade 1 / Form signed)\n\n"; 
		try
		{
			PresidentialPardonForm form("Willy");
			Bureaucrat user("Willy", 1);
			std::cout << user << std::endl;
			user.signForm(form);
			user.executeForm(form);
		}
		catch(std::exception &e)
		{
			std::cout << "(!) ERROR: " << e.what() << std::endl;
		}
		std::cout << "\nTest form PresidentialPardonForm (Bureaucrat grade 150 / Form signed)\n\n"; 
		try
		{
			PresidentialPardonForm form("Willy");
			Bureaucrat user("Willy", 150);
			std::cout << user << std::endl;
			user.signForm(form);
			user.executeForm(form);
		}
		catch(std::exception &e)
		{
			std::cout << "(!) ERROR: " << e.what() << std::endl;
		}
		std::cout << "\nTest form PresidentialPardonForm (Bureaucrat grade 1 / Form unsigned)\n\n"; 
		try
		{
			PresidentialPardonForm form("Willy");
			Bureaucrat user("Willy", 1);
			std::cout << user << std::endl;
			user.executeForm(form);
		}
		catch(std::exception &e)
		{
			std::cout << "(!) ERROR: " << e.what() << std::endl;
		}
			std::cout << "\nTest form PresidentialPardonForm (Bureaucrat grade 1 / Form double signed)\n\n"; 
		try
		{
			PresidentialPardonForm form("Willy");
			Bureaucrat user("Willy", 1);
			std::cout << user << std::endl;
			user.signForm(form);
			user.signForm(form);
			user.executeForm(form);
		}
		catch(std::exception &e)
		{
			std::cout << "(!) ERROR: " << e.what() << std::endl;
		}
	}
	{
		std::cout << "\nTest form RobotomyRequestForm (Bureaucrat grade 1 / Form signed)\n\n";
		try
		{
			RobotomyRequestForm form("Robot paper");
			Bureaucrat user("Willy", 1);
			std::cout << user << std::endl;
			user.signForm(form);
			user.executeForm(form);
		}
		catch(std::exception &e)
		{
			std::cout << "(!) ERROR: " << e.what() << std::endl;
		}
		std::cout << "\nTest form RobotomyRequestForm (Bureaucrat grade 150 / Form signed)\n\n";
		try
		{
			RobotomyRequestForm form("Robot paper");
			Bureaucrat user("Willy", 150);
			std::cout << user << std::endl;
			user.signForm(form);
			user.executeForm(form);
		}
		catch(std::exception &e)
		{
			std::cout << "(!) ERROR: " << e.what() << std::endl;
		}
		std::cout << "\nTest form RobotomyRequestForm (Bureaucrat grade 1 / Form unsigned)\n\n";
		try
		{
			RobotomyRequestForm form("Robot paper");
			Bureaucrat user("Willy", 1);
			std::cout << user << std::endl;
			user.executeForm(form);
		}
		catch(std::exception &e)
		{
			std::cout << "(!) ERROR: " << e.what() << std::endl;
		}
	}
	return (0);
}
