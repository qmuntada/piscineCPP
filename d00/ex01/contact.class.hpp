
#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

# include <iostream>

class Contact
{

public:

					Contact(void);
					~Contact(void);

	static int		getNbContact(void);
	void			initContact(void);
	void			printContact(void);
	void			printShortContact(void);


private:

	static int		_nbContact;
	int				_id;
	std::string		_firstName;
	std::string		_lastName;
	std::string		_nickName;
	std::string		_login;
	std::string		_postalAdress;
	std::string		_email;
	std::string		_phone;
	std::string		_birthday;
	std::string		_favoriteMeal;
	std::string		_underwearColour;
	std::string		_darkestSecret;
	std::string		maxLengthString(std::string str);

};

#endif
