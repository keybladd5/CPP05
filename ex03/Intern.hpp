/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmarti <polmarti@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 20:21:14 by polmarti          #+#    #+#             */
/*   Updated: 2025/01/09 20:21:19 by polmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef INTERN_HPP
#define INTERN_HPP

# include <iostream>
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Intern
{
	public:
				Intern();
				Intern(Intern const &);
				Intern &operator=(Intern const &);
				AForm *makeForm(std::string const &, std::string const &);
				~Intern();
				class CannotCreateForm : public std::exception
				{
					const char* what() const throw();
				};
};

#endif
