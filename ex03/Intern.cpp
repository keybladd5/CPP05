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

