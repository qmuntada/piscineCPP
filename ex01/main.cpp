
#include "contact.class.hpp"
#include <climits>

int		main(void)
{
	std::string		buff;
	Contact			contactList[8];
	int 			idChose;

	std::cout << "Welcome to the PhoneBook !" << std::endl;
	while(buff.compare("EXIT") != 0)
	{
		std::cout << "Command available are " << (Contact::getNbContact()
			>= 8 ? "" : "ADD, ") << "SEARCH and EXIT" << std::endl;
		std::cout << "Please enter a command: ";
		std::cin >> buff;
		if (buff.compare("ADD") == 0)
		{
			if (Contact::getNbContact() >= 8)
				std::cout << " Maximun amount of contact exceeded" << std::endl;
			else
				contactList[Contact::getNbContact()].initContact();
		}
		else if (buff.compare("SEARCH") == 0)
		{
			if (Contact::getNbContact() > 0)
			{
				for(int i = 0; i < Contact::getNbContact(); i++)
					contactList[i].printShortContact();
				std::cout << " Which contact would you want to see ?" <<
					std::endl << " Please enter a correct ID: ";
				std::cin >> idChose;
				if (std::cin.good() && idChose >= 0 && idChose < Contact::getNbContact())
					contactList[idChose].printContact();
				else
				{
					std::cin.clear();
					std::cin.ignore(INT_MAX, '\n');
					std::cout << "Wrong entry, please try again" << std::endl;
				}
			}
			else
				std::cout << " No contact add yet" << std::endl;
		}
		else if (buff.compare("EXIT") != 0)
			std::cout << "Wring entry, please try again" << std::endl;
	}
	std::cout << "The PhoneBook will now close, good bye !" << std::endl;
	return (0);
}
