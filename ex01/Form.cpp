/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmarti <polmarti@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 17:50:39 by polmarti          #+#    #+#             */
/*   Updated: 2024/12/23 17:50:41 by polmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string const name, unsigned int requiredGradeSign, unsigned int requiredGradeExec) : _name(name), _requiredGradeSign(requiredGradeSign), _requiredGradeExec(requiredGradeExec)
{
	std::cout << "Form constructor called\n";
	if (requiredGradeSign < 1)
		throw Form::GradeTooHighExecption();
	else if (requiredGradeSign > 150)
		throw Form::GradeTooLowExecption();
	if (requiredGradeExec < 1)
		throw Form::GradeTooHighExecption();
	else if (requiredGradeExec > 150)
		throw Form::GradeTooLowExecption();
	_itSigned = false;
}

Form::Form(Form const &src) : _name(src.getName()), _requiredGradeSign(src._requiredGradeSign), _requiredGradeExec(src._requiredGradeExec)
{
	*this = src;
}

Form &Form::operator=(Form const &src)
{
	if (this != &src)
		_itSigned = src.getItSigned();
	return (*this);
}

Form::~Form()
{
	std::cout << "Form destructor called\n";
}

std::string const &Form::getName() const { return (_name); }

unsigned int const &Form::getRequiredGradeSign() const { return (_requiredGradeSign); }

unsigned int const &Form::getRequiredGradeExec() const { return (_requiredGradeExec); }

bool Form::getItSigned() const { return (_itSigned); }

void Form::beSigned(Bureaucrat const &bureaucrat)
{
	if (bureaucrat.getGrade() < getRequiredGradeSign())
		_itSigned = true;
	else
		throw Form::GradeTooLowExecption();
}

const char *Form::GradeTooHighExecption::what() const throw()
{
	return ("Grade too high for this form.");
}

const char *Form::GradeTooLowExecption::what() const throw()
{
	return ("Grade too low for this form.");
}

std::ostream& operator<<(std::ostream &os, Form const &src)
{
	os << src.getName() << ", form grade to sign: " << src.getRequiredGradeSign() << ", and form grade to exec: " << src.getRequiredGradeExec();
	os << ", status: ";
	if (src.getItSigned() == true)
		os << "signed.";
	else
		os << "unsigned.";
	return os;
}
