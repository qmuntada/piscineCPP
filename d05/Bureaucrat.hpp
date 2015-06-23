#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat
{
public:
	Bureaucrat();
	Bureaucrat(std::string name, int grade);
	Bureaucrat(Bureaucrat const & ref);
	Bureaucrat &	operator=(Bureaucrat const & ref);
	~Bureaucrat();

	bool			setGrade(int grade);
	int				getGrade(void) const;
	std::string		getName(void) const;

	class GradeTooHighException : public std::exception
	{
	public:
		GradeTooHighException() throw();
		GradeTooHighException(Bureaucrat::GradeTooHighException const &) throw();
		Bureaucrat::GradeTooHighException &	operator=(Bureaucrat::GradeTooHighException const &) throw();
		~GradeTooHighException() throw();
		virtual const char* what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
	public:
		GradeTooLowException() throw();
		GradeTooLowException(Bureaucrat::GradeTooLowException const &) throw();
		Bureaucrat::GradeTooLowException &	operator=(Bureaucrat::GradeTooLowException const &) throw();
		virtual ~GradeTooLowException() throw();
		virtual const char* what() const throw();
	};
	
	private:
		const std::string	_name;
		int					_grade;

};

std::ostream &operator<<(std::ostream & o, const Bureaucrat & rhs);

#endif