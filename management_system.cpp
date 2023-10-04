#include "management_system.h"

#include <iostream>
#include <fstream>

void ManagementSystem::register_ordering(const std::string& name, const std::string& origin, const std::string& destination, double time)
{
    Order* new_order = new Order(name, origin, destination, time);
    orders.push_back(new_order);
}

void ManagementSystem::register_user(const std::string& name, const std::string& contact)
{
    User* new_user = new User(name, contact);
    users.push_back(new_user);
}

void ManagementSystem::update_order_name(int id, const std::string& name)
{
    for (int i = 0; i < orders.size(); ++i)
    {
        if (orders[i]->get_id() == id)
        {
            orders[i]->set_name(name);
            return;
        }
    }
}

void ManagementSystem::update_order_destination(int id, const std::string& destination)
{
    for (int i = 0; i < orders.size(); ++i)
    {
        if (orders[i]->get_id() == id)
        {
            orders[i]->set_destination(destination);
            return;
        }
    }
}

void ManagementSystem::report()
{
    std::ofstream report_file("report.txt");
    if (report_file.is_open())
    {
        for (int i = 0; i < orders.size(); ++i)
        {
            report_file << "Name: " << orders[i]->get_name() << std::endl;   
            report_file << "ID: " << orders[i]->get_id() << std::endl;
            report_file << "Origin: " << orders[i]->get_origin() << std::endl;
            report_file << "Destination: " << orders[i]->get_destination() << std::endl;
            report_file << "Time: " << orders[i]->get_time() << std::endl;
        }

        report_file << "***********************************" << std::endl;

        for (int i = 0; i < users.size(); ++i)
        {
            report_file << "Name: " << users[i]->get_name() << std::endl;   
            report_file << "Contact: " << users[i]->get_contact() << std::endl;
        }

        report_file.close();
    }
    else
    {
        std::cout << "Unanable to open report file!" << std::endl;
    }
}

ManagementSystem::~ManagementSystem()
{
    for (int i = 0; i < users.size(); ++i)
    {
        delete users[i];
    }

    for (int i = 0; i < orders.size(); ++i)
    {
        delete orders[i];
    }
}