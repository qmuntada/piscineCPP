
#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
public:
	Form();
	Form(std::string const name, int const gradeReq, int const gradeExec);
	Form(Form const & ref);
	Form &		operator=(Form const & rhs);
	~Form();

	int				getGradeReq(void) const;
	int				getGradeExec(void) const;
	std::string		getName(void) const;
	bool			getSign(void) const;
	bool			setSign(bool sign);

	void			beSigned(Bureaucrat &bureaucrat);

	class GradeTooHighException : public std::exception
	{
	public:
		GradeTooHighException() throw();
		GradeTooHighException(GradeTooHighException const & ref) throw();
		GradeTooHighException &		operator=(GradeTooHighException const & rhs) throw();
		~GradeTooHighException() throw();
		virtual const char* what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
	public:
		GradeTooLowException() throw();
		GradeTooLowException(GradeTooLowException const & ref) throw();
		GradeTooLowException& operator=(GradeTooLowException const & rhs) throw();
		~GradeTooLowException() throw();
		virtual const char* what() const throw();
	};

private:
	const std::string		_name;
	const int				_gradeReq;
	const int				_gradeExec;
	bool					_sign;
};

std::ostream &		operator<<(std::ostream &o, const Form& rhs);

#endif
