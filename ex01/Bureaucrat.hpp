/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmarti <polmarti@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 17:50:47 by polmarti          #+#    #+#             */
/*   Updated: 2024/12/23 17:50:49 by polmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>

class Bureaucrat
{
	private:
			Bureaucrat();
			std::string const	_name;
			unsigned int 		_grade;
	public:
			Bureaucrat(std::string const, unsigned int);
			Bureaucrat(Bureaucrat const &);
			Bureaucrat &operator=(Bureaucrat const &);
			~Bureaucrat();

			std::string const &getName() const;
			unsigned int const &getGrade() const;
			void incrementGrade();
			void decrementGrade();
			void signForm();

			class GradeTooHighExecption : public std::exception
			{
				const char* what() const throw();
			};
			class GradeTooLowExecption : public std::exception
			{
				const char* what() const throw();
			};


};

std::ostream &operator<<(std::ostream &, Bureaucrat const &);

#endif
