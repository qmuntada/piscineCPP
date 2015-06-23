#include "Form.hpp"

Form::Form() : _name("no_name"), _gradeReq(150), _gradeExec(1) {
	return ;
}
Form::Form(std::string const name, int const gradeReq, int const gradeExec):
	_name(name), _gradeReq(gradeReq), _gradeExec(gradeExec)
{
	if (this->_gradeReq > 150 || this->_gradeExec > 150)
		throw Form::GradeTooLowException();
	if (this->_gradeReq < 1 || this->_gradeExec < 1)
		throw Form::GradeTooHighException();
	this->_sign = false;
	return ;
}
Form::Form(Form const & ref) : _name(ref.getName()), _gradeReq(ref.getGradeReq()), _gradeExec(ref.getGradeExec())
{
	this->_sign = false;
	return ;
}
Form& Form::operator=(Form const &rhs) {
	this->setSign(rhs.getSign());
	return *this;
}
Form::~Form() {
	return ;
}

void		Form::beSigned(Bureaucrat &bureaucrat) {
	if (bureaucrat.getGrade() > this->_gradeReq)
		throw Form::GradeTooLowException();
	this->_sign = true;
}

int			Form::getGradeReq(void) const {
	return this->_gradeReq;
}
int			Form::getGradeExec(void) const {
	return this->_gradeExec;
}
std::string	Form::getName(void) const {
	return this->_name;
}
bool		Form::getSign(void) const {
	return this->_sign;
}
bool		Form::setSign(bool sign) {
	this->_sign = sign;
	return true;
}

std::ostream &	operator<<(std::ostream &o, const Form& rhs) {
	o << rhs.getName() << ", form grade " << rhs.getGradeReq() << ".";
	return o;
}

Form::GradeTooHighException::GradeTooHighException() throw() {
	return ;
}
Form::GradeTooHighException::GradeTooHighException(Form::GradeTooHighException const &ref) throw() {
	*this = ref;
	return ;
}
Form::GradeTooHighException& Form::GradeTooHighException::operator=(Form::GradeTooHighException const &rhs) throw() {
	this->std::exception::operator=(rhs);
	return *this;
}
Form::GradeTooHighException::~GradeTooHighException() throw() {
	return ;
}
const  char* Form::GradeTooHighException::what() const throw() {
	return ("Exeption Form::GradeTooHighException");
}

Form::GradeTooLowException::GradeTooLowException() throw() {
	return ;
}
Form::GradeTooLowException::GradeTooLowException(Form::GradeTooLowException const &ref) throw() {
	*this = ref;
	return ;
}
Form::GradeTooLowException& Form::GradeTooLowException::operator=(Form::GradeTooLowException const &rhs) throw() {
	this->std::exception::operator=(rhs);
	return *this;
}
Form::GradeTooLowException::~GradeTooLowException() throw() {
	return ;
}
const  char* Form::GradeTooLowException::what() const throw() {
	return ("Exeption Form::GradeTooLowException");
}

