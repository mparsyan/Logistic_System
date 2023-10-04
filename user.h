#ifndef USER_H
#define USER_H

#include <string>

class User
{
public:
    User(const std::string& name, const std::string& contact)
        : m_name{name}
        , m_contact{contact}
        {}
    
    ~User() = default;

public:
    std::string get_name() const;
    std::string get_contact() const;

    void set_name(const std::string& name);
    void set_contact(const std::string& contact);

private:
    std::string m_name;
    std::string m_contact;
};

#endif  // USER_H