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

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
			Form();
			std::string const	_name;
			unsigned int 		_requiredGradeSign;
			unsigned int 		_requiredGradeExec;
			bool				_itSigned;
	public:
			Form(std::string const, unsigned int , unsigned int );
			Form(Form const &);
			Form &operator=(Form const &);
			~Form();

			std::string const &getName() const;
			unsigned int const &getRequiredGradeSign() const;
			unsigned int const &getRequiredGradeExec() const;
			void beSigned(Bureaucrat const &);

			class GradeTooHighExecption : public std::exception
			{
				const char* what() const throw();
			};
			class GradeTooLowExecption : public std::exception
			{
				const char* what() const throw();
			};


};

std::ostream &operator<<(std::ostream &, Form const &);

#endif
