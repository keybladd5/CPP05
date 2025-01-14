/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmarti <polmarti@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 20:21:07 by polmarti          #+#    #+#             */
/*   Updated: 2025/01/09 20:21:09 by polmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
	std::cout << "Intern constructor called \n";
}

Intern::Intern(Intern const &src)
{
	std::cout << "* Intern copy constructor called" << std::endl;
	*this = src;
}

Intern &Intern::operator=(Intern const &src)
{
	std::cout << "Intern copy assignment constructor called" << std::endl;
	(void)src;
	return *this;
}

//this does malloc, pay attention!
AForm *Intern::makeForm(std::string const &name, std::string const &target)
{
	std::string forms[3] = {"PresidentialPardon", "RobotomyRequest", "ShrubberyCreation"};
	int i = 0;
	AForm *tmp;
	while (name != forms[i] && i < 3)
		i++;
	switch(i)
	{
		case 0:
			std::cout << "Intern creates the PresidentialPardonForm\n";
			tmp = new PresidentialPardonForm(target);
			break;
		case 1:
			std::cout << "Intern creates the RobotomyRequestForm\n";
			tmp = new RobotomyRequestForm(target);
			break;
		case 2:
			std::cout << "Intern creates the ShrubberyCreationForm\n";
			tmp = new ShrubberyCreationForm(target);
			break;
		case 3:
			std::cout << "Intern can't find the form\n";
			throw CannotCreateForm();
			tmp = NULL;
	}
	return (tmp);
}

const char *Intern::CannotCreateForm::what() const throw()
{
	return ("The name of the form passed as a value doesn't exist in our lovely office; you should go to office 2B...");
}

Intern::~Intern()
{
	std::cout << "Intern destructor called \n";
}
