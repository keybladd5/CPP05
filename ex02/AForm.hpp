/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmarti <polmarti@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 17:50:47 by polmarti          #+#    #+#             */
/*   Updated: 2024/12/23 17:50:49 by polmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class AForm
{
	private:
			AForm();
			std::string const	_name;
			unsigned int const	_requiredGradeSign;
			unsigned int const	_requiredGradeExec;
			bool				_itSigned;
	public:
			AForm(std::string const, unsigned int , unsigned int );
			AForm(AForm const &);
			AForm &operator=(AForm const &);
			~AForm();

			std::string const &getName() const;
			unsigned int const &getRequiredGradeSign() const;
			unsigned int const &getRequiredGradeExec() const;
			bool getItSigned() const;
			void beSigned(Bureaucrat const &);
			virtual void execute(Bureaucrat const &executor) const = 0;

			class GradeTooHighExecption : public std::exception
			{
				const char* what() const throw();
			};
			class GradeTooLowExecption : public std::exception
			{
				const char* what() const throw();
			};


};

std::ostream &operator<<(std::ostream &, AForm const &);

#endif
