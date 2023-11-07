#include "../Phonebook.hpp"

int main() {
	int			i = 0;
    std::string	str;
    PhoneBook	phone_book;

	phone_book.count = 0;
    while (std::getline(std::cin, str))
    {
        if (!str.compare("ADD"))
		{
			i = phone_book.ADD(i);
			phone_book.count++;
			i++;
		}
		else if (!str.compare("SEARCH"))
			phone_book.SEARCH();
		else if (!str.compare("EXIT"))
			return (0);
    }
}
