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

Form::Form(std::string const name, unsigned int requiredGradeSign, unsigned int requiredGradeExec) : _name(name)
{
	std::cout << "Form constructor called\n";
	if (requiredGradeSign < 1)
		throw Form::GradeTooHighExecption();
	else if (requiredGradeSign > 150)
		throw Form::GradeTooLowExecption();
	_requiredGradeSign = requiredGradeSign;
	if (requiredGradeExec < 1)
		throw Form::GradeTooHighExecption();
	else if (requiredGradeExec > 150)
		throw Form::GradeTooLowExecption();
	_requiredGradeExec = requiredGradeExec;
	_itSigned = false;
}

Form::Form(Form const &src) : _name(src._name)
{
	*this = src;
}

Form &Form::operator=(Form const &src)
{
	if (this != &src)
	{
		_requiredGradeSign = src.getRequiredGradeSign();
		_requiredGradeExec = src.getRequiredGradeExec();
	}
	return (*this);
}

Form::~Form()
{
	std::cout << "Form destructor called\n";
}

std::string const &Form::getName() const { return (_name); }

unsigned int const &Form::getRequiredGradeSign() const { return (_requiredGradeSign); }

unsigned int const &Form::getRequiredGradeExec() const { return (_requiredGradeExec); }

bool  const Form::getItSigned() const { return (_itSigned); }



const char *Form::GradeTooHighExecption::what() const throw()
{
	return ("Form cannot be grade bigger than 1.");
}

const char *Form::GradeTooLowExecption::what() const throw()
{
	return ("Form cannot be grade lower than 150.");
}

std::ostream& operator<<(std::ostream &os, Form const &src)
{
	os << src.getName() << ", form grade to sign " << src.getRequiredGradeSign() << " and form grade to exec " << src.getRequiredGradeExec() << std::endl;
	return os;
}
