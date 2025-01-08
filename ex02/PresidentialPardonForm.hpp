/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmarti <polmarti@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 20:09:46 by polmarti          #+#    #+#             */
/*   Updated: 2025/01/07 20:09:48 by polmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
	private:
			std::string _target;

	public:
			PresidentialPardonForm();
			PresidentialPardonForm(std::string const &);
			PresidentialPardonForm(PresidentialPardonForm const &);
			PresidentialPardonForm &operator=(PresidentialPardonForm const &);
			~PresidentialPardonForm();
			void execute(Bureaucrat const &executor);
};

#endif