/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmarti <polmarti@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 17:50:39 by polmarti          #+#    #+#             */
/*   Updated: 2024/12/23 17:50:41 by polmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string const name, unsigned int grade) : _name(name)
{
	std::cout << "Bureaucrat constructor called\n";
	if (grade < 1)
		throw Bureaucrat::GradeTooHighExecption();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowExecption();
	_grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const &src) : _name(src._name)
{
	*this = src;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &src)
{
	if (this != &src)
		_grade = src.getGrade();
	return (*this);
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat destructor called\n";
}

std::string const &Bureaucrat::getName() const { return (_name); }

unsigned int const &Bureaucrat::getGrade() const { return (_grade); }

void Bureaucrat::incrementGrade() 
{ 
	if ((_grade - 1) >= 1)
		_grade--;
	else
		throw Bureaucrat::GradeTooHighExecption();
}

void Bureaucrat::decrementGrade() 
{ 
	if ((_grade + 1) <= 150)
		_grade++;
	else
		throw Bureaucrat::GradeTooLowExecption();
}

void Bureaucrat::signForm(AForm &form)
{

	if (form.getItSigned())
		std::cout << getName() << " couldn't sign " << form.getName() << " form because its already signed" << std::endl;
	try
	{
		form.beSigned(*this);
		std::cout << getName() << " signed " << form.getName() << " form" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << getName() << " couldn't sign " << form.getName() << " form because: " << e.what() << std::endl;
	}
}

void Bureaucrat::executeForm(AForm const &form)
{
	try
	{
		std::cout << getName() << " executed " << form.getName() << std::endl;
		form.execute(*this);
	}
	catch(const std::exception& e)
	{
		std::cerr << "(!) ERROR: " << e.what() << '\n';
	}
	
}

const char *Bureaucrat::GradeTooHighExecption::what() const throw()
{
	return ("Bureaucrat cannot be grade bigger than 1");
}

const char *Bureaucrat::GradeTooLowExecption::what() const throw()
{
	return ("Bureaucrat cannot be grade lower than 150");
}

std::ostream& operator<<(std::ostream &os, Bureaucrat const &src)
{
	os << src.getName() << ", bureaucrat grade " << src.getGrade();
	return os;
}
