#include "../Contact.hpp"

Contact::Contact() {
    return ;
}

Contact::~Contact() {
    return ;
}

std::string Contact::get_param(int i) {
    if (i == 1)
        return (this->first_name);
    else if (i == 2)
        return (this->second_name);
    else if (i == 3)
        return (this->nickname);
    else if (i == 4) 
        return (this->phone_number);
    else if (i == 5)
        return (this->darkest_secret);
    else
        return (0);
}


void    Contact::set_param(int i, std::string str) {
    if (i == 1)
        this->first_name = str;
    else if (i == 2)
        this->second_name = str;
    else if (i == 3)
        this->nickname = str;
    else if (i == 4) 
        this->phone_number = str;
    else if (i == 5)
        this->darkest_secret = str;
    else
        return ;

}
