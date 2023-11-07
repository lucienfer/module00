#ifndef CONTACT_H
# define CONTACT_H

# include <string>

class   Contact {
private:
    std::string    first_name;
    std::string    second_name;
    std::string    nickname;
    std::string    phone_number;
    std::string    darkest_secret;

public:
    Contact( void );
    ~Contact( void );
    std::string get_param(int i);
    void        set_param(int i, std::string str);
};

#endif
