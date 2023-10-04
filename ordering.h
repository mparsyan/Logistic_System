#ifndef ORDERING_H
#define ORDERING_H

#include <string>

class Order
{
public:
    Order(const std::string& name, const std::string& origin, const std::string& destination, double time)
        : m_name{name}
        , m_origin{origin}
        , m_destination{destination}
        , m_time{time}
        {
            ++m_id;
        }
    
    ~Order() = default;

public:
    std::string get_name() const;
    std::string get_origin() const;
    std::string get_destination() const;
    double get_time() const;
    int get_id() const;

    void set_name(const std::string& name);
    void set_origin(const std::string& origin);
    void set_destination(const std::string& destination);
    void set_time(double time);

private:
    std::string m_name;
    std::string m_origin;
    std::string m_destination;
    double m_time;
    int m_id = 10000;
};

#endif  // ORDERING_H