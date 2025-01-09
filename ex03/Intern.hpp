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

class Intern
{
	public:
				Intern();
				Intern(Intern const &);
				Intern &operator=(Intern const &);
				~Intern();
};

#endif
