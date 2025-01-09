/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmarti <polmarti@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 20:09:54 by polmarti          #+#    #+#             */
/*   Updated: 2025/01/07 20:09:56 by polmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): AForm("PresidentialPardonForm", 72, 45)
{
	std::cout << "Constructor PresidentialPardonForm called\n";
	_target = "(null)";
}


PresidentialPardonForm::PresidentialPardonForm(std::string const &target): AForm("PresidentialPardonForm", 145, 137)
{
	std::cout << "Constructor PresidentialPardonForm called\n";
	_target = target;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src) : AForm(src.getName(), src.getRequiredGradeSign(), getRequiredGradeExec())
{
	*this = src;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &src)
{
	if (this != &src)
		_target = src._target;
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "Destructor ShrubberyCreationForm called\n";
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	if (executor.getGrade() > getRequiredGradeExec())
		throw AForm::GradeTooLowToExExecption();
	else if (!getItSigned())
		throw AForm::UnsignedExecption();
	else
		std::cout << _target << " has been pardoned by the Magnificient Zaphod Beeblebrox" << std::endl;

}
