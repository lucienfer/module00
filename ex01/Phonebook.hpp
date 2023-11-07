#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include <string>
# include <iomanip>
# include <iostream>
# include "Contact.hpp"

class   PhoneBook {
private :
    Contact contacts[8];

public :
    PhoneBook( void );
    ~PhoneBook( void );
    int ADD(int i);
    void SEARCH( void );

    int count;
};

#endif
