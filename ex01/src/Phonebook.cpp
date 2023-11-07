#include "../Phonebook.hpp"
#include <string>

PhoneBook::PhoneBook( void ) {
    return ;
}

PhoneBook::~PhoneBook( void ){
    return ;
}

int    PhoneBook::ADD(int i) {
    std::string str[8];
    if (i < 8)
    {
        std::cout << "first name : ";
        std::getline(std::cin, str[0]);
        if (str[0][0] == 0) {
            std::cout << "empty first name is impossilbe" << std::endl;
            this->count--;
            return --i;
        }
        std::cout << "second name : ";
        std::getline(std::cin, str[1]);
        if (str[1][0] == 0) {
            std::cout << "empty second name is impossilbe" << std::endl;
            this->count--;
            return --i;
        }
        std::cout << "nickname : ";
        std::getline(std::cin, str[2]);
        if (str[2][0] == 0) {
            std::cout << "empty nickname is impossilbe" << std::endl;
            this->count--;
            return --i;
        }
        std::cout << "phone number : ";
        std::getline(std::cin, str[3]);
        if (str[3][0] == 0) {
            std::cout << "empty phone number is impossilbe" << std::endl;
            this->count--;
            return --i;
        }
        std::cout << "secret : ";
        std::getline(std::cin, str[4]);
        if (str[4][0] == 0) {
            std::cout << "empty secret is impossilbe" << std::endl;
            this->count--;
            return --i;
        }
        this->contacts[i].set_param(1, str[0]);
        this->contacts[i].set_param(2, str[1]);
        this->contacts[i].set_param(3, str[2]);
        this->contacts[i].set_param(4, str[3]);
        this->contacts[i].set_param(5, str[4]);
    }
    else
    {
        std::cout << "first name : ";
        std::getline(std::cin, str[0]);
        if (str[0][0] == 0) {
            std::cout << "empty first name is impossilbe" << std::endl;
            return --i;
        }
        std::cout << "second name : ";
        std::getline(std::cin, str[1]);
        if (str[1][0] == 0) {
            std::cout << "empty second name is impossilbe" << std::endl;
            return --i;
        }
        std::cout << "nickname : ";
        std::getline(std::cin, str[2]);
        if (str[2][0] == 0) {
            std::cout << "empty  nickname is impossilbe" << std::endl;
            return --i;
        }
        std::cout << "phone number : ";
        std::getline(std::cin, str[3]);
        if (str[3][0] == 0) {
            std::cout << "empty phone number is impossilbe" << std::endl;
            return --i;
        }
        std::cout << "secret : ";
        std::getline(std::cin, str[4]);
        if (str[4][0] == 0) {
            std::cout << "empty secret is impossilbe" << std::endl;
            return --i;
        }
        this->contacts[i % 8].set_param(1, str[0]);
        this->contacts[i % 8].set_param(2, str[1]);
        this->contacts[i % 8].set_param(3, str[2]);
        this->contacts[i % 8].set_param(4, str[3]);
        this->contacts[i % 8].set_param(5, str[4]);
    }
    if (count > 8)
        count = 8;
    std::cout << "The contact is add to your phonebook." << std::endl;
    return i;
}

std::string set_dote(std::string str)
{
    if (str.size() >= 10) { return (str.substr(0, 9) + "."); }
    return (str);
}

static void    print_contact(Contact *contacts, int count) {
    std::cout << std::setw(10) << "index";
    std::cout << "|" <<  std::setw(10) << "first_name";
    std::cout << "|" <<  std::setw(10) << "second_na.";
    std::cout << "|" <<  std::setw(10) << "nickname" << "|" <<std::endl;
    for (int i = 0; i < count; i++)
    {
        std::cout << std::setw(10) << i + 1;
        std::cout << "|" <<  std::setw(10) << set_dote(contacts[i].get_param(1));
        std::cout << "|" <<  std::setw(10) << set_dote(contacts[i].get_param(2));
        std::cout << "|" <<  std::setw(10) << set_dote(contacts[i].get_param(3)) << "|" <<std::endl;
    }
}

void    PhoneBook::SEARCH() {
    int i = 0;

    print_contact(this->contacts, this->count);
    std::cin >> i;
    if (std::cin.good() && i >= 1 && i <= this->count) 
    {
        std::cout << this->contacts[i - 1].get_param(1) << std::endl;
        std::cout << this->contacts[i - 1].get_param(2) << std::endl;
        std::cout << this->contacts[i - 1].get_param(3) << std::endl;
        std::cout << this->contacts[i - 1].get_param(4) << std::endl;
        std::cout << this->contacts[i - 1].get_param(5)<< std::endl;
    }
    else {
        std::cin.clear();
        std::cout << "Sorry, this index doesn't exist" << std::endl;
    }
}
