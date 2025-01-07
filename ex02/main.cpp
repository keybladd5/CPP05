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
#include "Form.hpp"

int main()
{
	{
		std::cout << "\nTest form grade 0\n"; 
		try
		{
			Form("pay_taxes", 0, 0);
		}
		catch(std::exception &e)
		{
			std::cout << "(!) ERROR: " << e.what() << std::endl;
		}
	}
	{
		std::cout << "\nTest form grade 151\n"; 
		try
		{
			Form("pay_taxes", 151, 151);
		}
		catch(std::exception &e)
		{
			std::cout << "(!) ERROR: " << e.what() << std::endl;
		}
	}
	{
		std::cout << "\nTest bureaucrat grade 150 sign form grade 1\n"; 
		try
		{
			Bureaucrat billy("billy", 150);
			Form form("buy_inditex", 1, 1);
			std::cout << "There are " << billy << " and " << form << std::endl;
			billy.signForm(form);
		}
		catch(std::exception &e)
		{
			std::cout << "(!) ERROR: " << e.what() << std::endl;
		}
	}
	{
		std::cout << "\nTest bureaucrat grade 1 sign form grade 150\n"; 
		try
		{
			Bureaucrat billy("billy", 1);
			Form form("pay_taxes", 150, 150);
			std::cout << "There are " << billy << " and " << form << std::endl;
			billy.signForm(form);
			billy.signForm(form);
			std::cout << "There are " << billy << " and " << form << std::endl;
		}
		catch(std::exception &e)
		{
			std::cout << "(!) ERROR: " << e.what() << std::endl;
		}
	}
	return (0);
}
