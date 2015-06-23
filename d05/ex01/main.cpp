#include "Bureaucrat.hpp"
#include "Form.hpp"

int 	main()
{
	try {
		Form form("Formulaire A", 120, 120);
	} catch (Form::GradeTooHighException &e) {
		std::cout << "A" << e.what() << std::endl;
	} catch (Form::GradeTooLowException &e) {
		std::cout << "A" << e.what() << std::endl;
	}

	try {
		Form form("Formulaire B", 0, 450);
	} catch (Form::GradeTooHighException &e) {
		std::cout << "B" << e.what() << std::endl;
	} catch (Form::GradeTooLowException &e) {
		std::cout << "B" << e.what() << std::endl;
	}

	try {
		Form form("Formulaire C", -10, 5);
	} catch (Form::GradeTooHighException &e) {
		std::cout << "C" << e.what() << std::endl;
	} catch (Form::GradeTooLowException &e) {
		std::cout << "C" << e.what() << std::endl;
	}

	Form form("Formulaire D", 20, 40);
	Bureaucrat toto("toto", 50);
	Bureaucrat tata("tata", 10);

	toto.signForm(form);
	tata.signForm(form);

	return 0;
}
