#include "management_system.h"

#include <string>
#include <iostream>

int main()
{
    ManagementSystem mgmt_sys;

    while (true)
    {
        std::cout << "==== Menu ====" << std::endl;
        std::cout << "1. Register Order" << std::endl;
        std::cout << "2. Register User" << std::endl;
        std::cout << "3. Update Order Name" << std::endl;
        std::cout << "4. Update Order Destination" << std::endl;
        std::cout << "5. Generate Report" << std::endl;
        std::cout << "6. Quit" << std::endl;
        std::cout << "Enter your choice: ";

        int choice;
        std::cin >> choice;

        switch (choice)
        {
            case 1:
            {
                std::string name, origin, destination;
                double time;

                std::cout << "Enter order name: ";
                std::cin.ignore();
                std::getline(std::cin, name);

                std::cout << "Enter origin: ";
                std::getline(std::cin, origin);

                std::cout << "Enter destination: ";
                std::getline(std::cin, destination);

                std::cout << "Enter time: ";
                std::cin >> time;

                mgmt_sys.register_ordering(name, origin, destination, time);
                std::cout << "Order registered successfully!" << std::endl;
                break;
            }

            case 2:
            {
                std::string name, contact;

                std::cout << "Enter user name: ";
                std::cin.ignore();
                std::getline(std::cin, name);

                std::cout << "Enter user contact: ";
                std::getline(std::cin, contact);

                mgmt_sys.register_user(name, contact);
                std::cout << "User registered successfully!" << std::endl;
                break;
            }

            case 3:
            {
                int id;
                std::string name;

                std::cout << "Enter order ID: ";
                std::cin >> id;

                std::cout << "Enter new order name: ";
                std::cin.ignore();
                std::getline(std::cin, name);

                mgmt_sys.update_order_name(id, name);
                std::cout << "Order name updated successfully!" << std::endl;
                break;
            }

            case 4:
            {
                int id;
                std::string destination;
                std::cout << "Enter order ID: ";
                std::cin >> id;
                std::cout << "Enter new destination: ";
                std::cin.ignore();
                std::getline(std::cin, destination);

                mgmt_sys.update_order_destination(id, destination);
                std::cout << "Order destination updated successfully!" << std::endl;
                break;
            }

            case 5:
            {
                mgmt_sys.report();
                std::cout << "Report generated successfully!" << std::endl;
                break;
            }

            case 6:
            {
                std::cout << "Goodbye!" << std::endl;
                return 0;
            }
            default:
            {
                std::cout << "Invalid choice. Please enter a valid option!" << std::endl;
                break;
            }
        }
    }

    return 0;
}