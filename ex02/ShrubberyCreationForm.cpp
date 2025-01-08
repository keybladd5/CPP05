/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmarti <polmarti@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 20:08:46 by polmarti          #+#    #+#             */
/*   Updated: 2025/01/07 20:08:48 by polmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

 ShrubberyCreationForm::ShrubberyCreationForm(): AForm("ShrubberyCreationForm", 145, 137)
 {
	std::cout << "Constructor ShrubberyCreationForm called\n";
	_target = "(null)";
 }


 ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target): AForm("ShrubberyCreationForm", 145, 137)
 {
	std::cout << "Constructor ShrubberyCreationForm called\n";
	_target = target;
 }

  ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src) : AForm(src.getName(), src.getRequiredGradeSign(), getRequiredGradeExec())
  {
		*this = src;
  }

 ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &src)
 {
	if (this != &src)
		_target = src._target;
	return (*this);
 }

 ShrubberyCreationForm::~ShrubberyCreationForm()
 {
	std::cout << "Destructor ShrubberyCreationForm called\n";
 }

 void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
 {
	if (executor.getGrade() > getRequiredGradeExec())
		throw AForm::GradeTooLowExecption();
	else if (!getItSigned())
		throw AForm::UnsignedExecption();
	else
	{
		std::ofstream ofs;
		ofs.open((_target + "_shrubbery").c_str());
		if (ofs.fail())
			std::cout << "(!) ERROR: Unable to create new file. " << std::endl;
		else
		{
			ofs << "         _{\\ _{\\{\\/}/}/}__" << std::endl;
			ofs << "          {/{/\\}{/{/\\}(\\}{/\\} _" << std::endl;
			ofs << "         {/{/\\}{/{/\\}(_)\\}{/{/\\}  _" << std::endl;
			ofs << "      {\\{/(\\" << "}\\}{/{/\\}\\}{/){/\\}\\} /\\}" << std::endl;
			ofs << "     {/{/(_)/}{\\{/)}{\\(_){/}/}/}/}" << std::endl;
			ofs << "    _{\\{/{/{\\{/{/(_)/}/}/}{\\(/}/}/}" << std::endl;
			ofs << "   {/{/{\\{\\{(/}{\\{\\/}/}{\\}(_){\\/}\\}" << std::endl;
			ofs << "   _{\\{/{\\{/(_)}{/{/{/\\}\\})\\}{/\\}" << std::endl;
			ofs << "  {/{/{\\{(/}{/{\\{\\{\\/})/}{\\(_)/}/}\\}" << std::endl;
			ofs << "   {\\{\\/}(_){\\{\\{\\/}/}(_){\\/}{\\/}/})/}" << std::endl;
			ofs << "    {/{\\{\\/}{/{\\{\\{\\/}/}{\\{\\/}/}\\}(_)" << std::endl;
			ofs << "   {/{\\{\\/}{/){\\{\\{\\/}/}{\\{(/}/}\\}/}" << std::endl;
			ofs << "    {/{\\{\\/}(_){\\{\\{(/}/}{\\(_)/}/}\\}" << std::endl;
			ofs << "      {/({/{\\{/{\\{\\/}(_){\\/}/}\\}/}(\\}" << std::endl;
			ofs << "       (_){/{\\/}{\\{\\/}/}{\\{\\)/}/}(_)" << std::endl;
			ofs << "         {/{/{\\{\\/}{/{\\{\\{(_)/}" << std::endl;
			ofs << "          {/{\\{\\{\\/}/}{\\{\\\\}/}" << std::endl;
			ofs << "           {){/ {\\/}{\\/} \\}\\}" << std::endl;
			ofs << "           (_)  \\.-'.-/" << std::endl;
			ofs << "       __...--- |'-.-'| --...__" << std::endl;
			ofs << "  _...--\"   .-'   |'-.-'|  ' -.  \"\"--..__" << std::endl;
			ofs << " -\"    ' .  . '    |.'-._| '  . .  '   jro" << std::endl;
			ofs << " .  '-  '    .--'  | '-.'|    .  '  . '" << std::endl;
			ofs << "         ' ..     |'-_.-|" << std::endl;
			ofs << " .  '  .       _.-|-._ -|-._  .  '  ." << std::endl;
			ofs << "             .'   |'- .-|   '." << std::endl;
			ofs << " ..-'   ' .  '.   `-._.-�   .'  '  - ." << std::endl;
			ofs << "  .-' '        '-._______.-'     '  ." << std::endl;
			ofs << "       .      ~," << std::endl;
			ofs << "   .       .   |\\   .    ' '-." << std::endl;
		}
		ofs.close();
	}
 }

