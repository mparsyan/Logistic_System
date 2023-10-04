#ifndef MANAGEMENT_SYSTEM_H
#define MANAGEMENT_SYSTEM_H

#include "ordering.h"
#include "user.h"

#include <vector>

class ManagementSystem
{
public:
    ManagementSystem() = default;
    ~ManagementSystem();

public:
    void register_ordering(const std::string& name, const std::string& origin, const std::string& destination, double time);
    void register_user(const std::string& name, const std::string& contact);
    void update_order_name(int id, const std::string& name);
    void update_order_destination(int id, const std::string& destination);
    void report();
   

private:
    std::vector<User*> users;
    std::vector<Order*> orders;
};

#endif  // MANAGEMENT_SYSTEM_H