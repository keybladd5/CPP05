/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmarti <polmarti@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 20:08:35 by polmarti          #+#    #+#             */
/*   Updated: 2025/01/07 20:08:39 by polmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBERRYCREATIONFORM_HPP
# define SHRUBERRYCREATIONFORM_HPP

# include "AForm.hpp"
# include <fstream>

class ShrubberyCreationForm : public AForm
{
	private:
			std::string _target;

	public:
			ShrubberyCreationForm();
			ShrubberyCreationForm(std::string const &);
			ShrubberyCreationForm(ShrubberyCreationForm const &);
			ShrubberyCreationForm &operator=(ShrubberyCreationForm const &);
			~ShrubberyCreationForm();
			void execute(Bureaucrat const &executor) const;
};

#endif
