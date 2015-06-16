
#include <iomanip>
#include <climits>
#include "contact.class.hpp"

Contact::Contact(void)
{
	return ;
}

Contact::~Contact(void)
{
	return ;
}

void	Contact::initContact()
{
	this->_id = Contact::_nbContact;
	std::cout << "  Please enter the first name: ";
	std::cin >> this->_firstName;
	std::cin.clear();
	std::cin.ignore(INT_MAX, '\n');
	std::cout << "  Please enter the last name: ";
	std::cin >> this->_lastName;
	std::cin.clear();
	std::cin.ignore(INT_MAX, '\n');
	std::cout << "  Please enter the nickname: ";
	std::cin >> this->_nickName;
	std::cin.clear();
	std::cin.ignore(INT_MAX, '\n');
	std::cout << "  Please enter the login: ";
	std::cin >> this->_login;
	std::cin.clear();
	std::cin.ignore(INT_MAX, '\n');
	std::cout << "  Please enter the postal address: ";
	std::cin >> this->_postalAdress;
	std::cin.clear();
	std::cin.ignore(INT_MAX, '\n');
	std::cout << "  Please enter the email address: ";
	std::cin >> this->_email;
	std::cin.clear();
	std::cin.ignore(INT_MAX, '\n');
	std::cout << "  Please enter the phone number: ";
	std::cin >> this->_phone;
	std::cin.clear();
	std::cin.ignore(INT_MAX, '\n');
	std::cout << "  Please enter the birthday date: ";
	std::cin >> this->_birthday;
	std::cin.clear();
	std::cin.ignore(INT_MAX, '\n');
	std::cout << "  Please enter the favorite meal: ";
	std::cin >> this->_favoriteMeal;
	std::cin.clear();
	std::cin.ignore(INT_MAX, '\n');
	std::cout << "  Please enter the underwear color: ";
	std::cin >> this->_underwearColour;
	std::cin.clear();
	std::cin.ignore(INT_MAX, '\n');
	std::cout << "  Please enter the darkest secret: ";
	std::cin >> this->_darkestSecret;
	std::cin.clear();
	std::cin.ignore(INT_MAX, '\n');

	Contact::_nbContact += 1;
	return ;
}

int		Contact::getNbContact(void)
{
	return Contact::_nbContact;
}

std::string		Contact::maxLengthString(std::string str)
{
	if (str.length() > 10)
	{
		str = str.substr(0, 9);
		str.append(".");
	}
	return str;
}


void	Contact::printShortContact(void)
{
	std::cout << std::setw(10) << this->_id << "|" << std::setw(10) <<
		Contact::maxLengthString(this->_firstName) << "|" << std::setw(10)
		<< Contact::maxLengthString(this->_lastName) << "|" << std::setw(10)
		<< Contact::maxLengthString(this->_nickName) << std::endl;
	return ;
}

void	Contact::printContact(void)
{
	std::cout << this->_id << std::endl;
	std::cout << this->_firstName << std::endl;
	std::cout << this->_lastName << std::endl;
	std::cout << this->_nickName << std::endl;
	std::cout << this->_login << std::endl;
	std::cout << this->_postalAdress << std::endl;
	std::cout << this->_email << std::endl;
	std::cout << this->_phone << std::endl;
	std::cout << this->_birthday << std::endl;
	std::cout << this->_favoriteMeal << std::endl;
	std::cout << this->_underwearColour << std::endl;
	std::cout << this->_darkestSecret << std::endl;

	return ;
}

int		Contact::_nbContact = 0;
