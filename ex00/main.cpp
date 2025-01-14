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

int main()
{
	{
		std::cout << "\nTest grade 0 on bureaucrat\n\n"; 
		try
		{
			Bureaucrat("billy", 0);
		}
		catch(std::exception &e)
		{
			std::cout << "(!) ERROR: " << e.what() << std::endl;
		}
	}
	{
		std::cout << "\nTest grade 151 on bureaucrat\n\n"; 
		try
		{
			Bureaucrat("billy", 151);
		}
		catch(std::exception &e)
		{
			std::cout << "(!) ERROR: " << e.what() << std::endl;
		}
	}
	{
		std::cout << "\nTest increment grade on bureaucrat\n\n"; 
		try
		{
			Bureaucrat billy("billy", 2);
			std::cout << billy << std::endl;
			billy.incrementGrade();
			std::cout << billy << std::endl;
		}
		catch(std::exception &e)
		{
			std::cout << "(!) ERROR: " << e.what() << std::endl;
		}
	}
	{
		std::cout << "\nTest decrement grade on bureaucrat\n"; 
		try
		{
			Bureaucrat billy("billy", 72);
			std::cout << billy << std::endl;
			billy.decrementGrade();
			std::cout << billy << std::endl;
		}
		catch(std::exception &e)
		{
			std::cout << "(!) ERROR: " << e.what() << std::endl;
		}
	}
	return (0);
}
