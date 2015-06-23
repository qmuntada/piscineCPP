#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("no_name"), _grade(150)
{
	return;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
	try
	{
		if (grade > 150)
			throw Bureaucrat::GradeTooLowException();
		else if (grade < 1)
			throw Bureaucrat::GradeTooHighException();
		else
			this->_grade = grade;
	}
	catch (Bureaucrat::GradeTooHighException &e)
	{
		std::cout << "exception: " << e.what() << std::endl;
		this->_grade = 1;

	}
	catch (Bureaucrat::GradeTooLowException &e)
	{
		std::cout << "exception: " << e.what() << std::endl;
		this->_grade = 150;
	}
}

Bureaucrat::Bureaucrat(Bureaucrat const &ref)
{
	this->setGrade(ref.getGrade());
	return ;
}

Bureaucrat &	Bureaucrat::operator=(Bureaucrat const &rhs)
{
	this->setGrade(rhs.getGrade());
	return *this;
}

Bureaucrat::~Bureaucrat()
{
	return ;
}

void			Bureaucrat::signForm(Form & ref)
{
	try
	{
		ref.beSigned(*this);
		std::cout << *this << " signs " << ref << std::endl;
	}
	catch (Form::GradeTooLowException &e)
	{
		std::cout << *this << " cannot sign " << ref << " because " << e.what() << std::endl;
	}
}

bool			Bureaucrat::setGrade(int grade)
{
	try
	{
		if (grade > 150)
			throw Bureaucrat::GradeTooLowException();
		else if (grade < 1)
			throw Bureaucrat::GradeTooHighException();
		else
			this->_grade = grade;
	}
	catch (Bureaucrat::GradeTooHighException &e)
	{
		std::cout << "exception: " << e.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException &e)
	{
		std::cout << "exception: " << e.what() << std::endl;
	}

	return true;
}

int				Bureaucrat::getGrade(void) const
{
	return this->_grade;
}

std::string		Bureaucrat::getName(void) const
{
	return this->_name;
}

Bureaucrat::GradeTooLowException::GradeTooLowException() throw()
{
	return ;
}

Bureaucrat::GradeTooLowException::GradeTooLowException(Bureaucrat::GradeTooLowException const &ref) throw()
{
	*this = ref;
	return ;
}

Bureaucrat::GradeTooLowException& Bureaucrat::GradeTooLowException::operator=(Bureaucrat::GradeTooLowException const &rhs) throw()
{
	this->std::exception::operator=(rhs);
	return *this;
}

Bureaucrat::GradeTooLowException::~GradeTooLowException() throw()
{
	return ;
}
const  char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("GradeTooLowException");
}

Bureaucrat::GradeTooHighException::GradeTooHighException() throw()
{
	return ;
}

Bureaucrat::GradeTooHighException::GradeTooHighException(Bureaucrat::GradeTooHighException const &ref) throw()
{
	*this = ref;
	return ;
}

Bureaucrat::GradeTooHighException& Bureaucrat::GradeTooHighException::operator=(Bureaucrat::GradeTooHighException const &rhs) throw()
{
	this->std::exception::operator=(rhs);
	return *this;
}

Bureaucrat::GradeTooHighException::~GradeTooHighException() throw()
{
	return ;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("GradeTooHighException");
}

std::ostream &operator<<(std::ostream &o, const Bureaucrat& rhs) {
	o << "The bureaucrat " << rhs.getName() << " get the grade " << rhs.getGrade() << ".";
	return o;
}
