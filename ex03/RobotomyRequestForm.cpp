/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmarti <polmarti@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 20:09:23 by polmarti          #+#    #+#             */
/*   Updated: 2025/01/07 20:09:26 by polmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): AForm("RobotomyRequestForm", 72, 45)
{
std::cout << "Constructor RobotomyRequestForm called\n";
_target = "(null)";
}


RobotomyRequestForm::RobotomyRequestForm(std::string const &target): AForm("RobotomyRequestForm", 145, 137)
{
std::cout << "Constructor RobotomyRequestForm called\n";
_target = target;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src) : AForm(src.getName(), src.getRequiredGradeSign(), getRequiredGradeExec())
{
	*this = src;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &src)
{
if (this != &src)
	_target = src._target;
return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
std::cout << "Destructor ShrubberyCreationForm called\n";
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	if (executor.getGrade() > getRequiredGradeExec())
		throw AForm::GradeTooLowToExExecption();
	else if (!getItSigned())
		throw AForm::UnsignedExecption();
	else
	{
		std::cout << "* S O M E  D R I L L I N G  N O I S E S *" << std::endl;
		std::srand(std::time(0));
		if (std::rand() % 2 == 1)
			std::cout << _target << " has been robotomized! ✅" << std::endl;
		else
			std::cout << _target << " has not been robotomized!❌" << std::endl;

	}

}
