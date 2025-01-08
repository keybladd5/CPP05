/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmarti <polmarti@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 20:09:12 by polmarti          #+#    #+#             */
/*   Updated: 2025/01/07 20:09:14 by polmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP
# include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
	private:
			std::string _target;

	public:
			RobotomyRequestForm();
			RobotomyRequestForm(std::string const &);
			RobotomyRequestForm(RobotomyRequestForm const &);
			RobotomyRequestForm &operator=(RobotomyRequestForm const &);
			~RobotomyRequestForm();
			void execute(Bureaucrat const &executor);
};

#endif