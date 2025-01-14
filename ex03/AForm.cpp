/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmarti <polmarti@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 17:50:39 by polmarti          #+#    #+#             */
/*   Updated: 2024/12/23 17:50:41 by polmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(std::string const name, unsigned int requiredGradeSign, unsigned int requiredGradeExec) : _name(name), _requiredGradeSign(requiredGradeSign), _requiredGradeExec(requiredGradeExec)
{
	std::cout << "AForm constructor called\n";
	if (requiredGradeSign < 1)
		throw AForm::GradeTooHighExecption();
	else if (requiredGradeSign > 150)
		throw AForm::GradeTooLowExecption();
	if (requiredGradeExec < 1)
		throw AForm::GradeTooHighExecption();
	else if (requiredGradeExec > 150)
		throw AForm::GradeTooLowExecption();
	_itSigned = false;
}

AForm::AForm(AForm const &src) : _name(src.getName()), _requiredGradeSign(src._requiredGradeSign), _requiredGradeExec(src._requiredGradeExec)
{
	*this = src;
}

AForm &AForm::operator=(AForm const &src)
{
	if (this != &src)
		_itSigned = src.getItSigned();
	return (*this);
}

AForm::~AForm()
{
	std::cout << "AForm destructor called\n";
}

std::string const &AForm::getName() const { return (_name); }

unsigned int const &AForm::getRequiredGradeSign() const { return (_requiredGradeSign); }

unsigned int const &AForm::getRequiredGradeExec() const { return (_requiredGradeExec); }

bool AForm::getItSigned() const { return (_itSigned); }

void AForm::beSigned(Bureaucrat const &bureaucrat)
{
	if (_itSigned)
		throw FormIsSignedException();
	else if (bureaucrat.getGrade() < getRequiredGradeSign())
		_itSigned = true;
	else
		throw GradeTooLowExecption();
}

const char *AForm::GradeTooHighExecption::what() const throw()
{
	return ("Grade too high for this form.");
}

const char *AForm::GradeTooLowExecption::what() const throw()
{
	return ("Grade too low for this form.");
}
const char *AForm::GradeTooLowToExExecption::what() const throw()
{
	return ("Grade too low for execute this form.");
}

const char *AForm::UnsignedExecption::what() const throw()
{
	return ("Form cannot execute because is unsigned");
}
const char *AForm::FormIsSignedException::what() const throw()
{
	return ("Form cannot be signed because is already signed");
}

std::ostream& operator<<(std::ostream &os, AForm const &src)
{
	os << src.getName() << ", form grade to sign: " << src.getRequiredGradeSign() << ", and form grade to exec: " << src.getRequiredGradeExec();
	os << ", status: ";
	if (src.getItSigned() == true)
		os << "signed.";
	else
		os << "unsigned.";
	return os;
}
