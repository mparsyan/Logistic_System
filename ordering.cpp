#include "ordering.h"

std::string Order::get_name() const
{
    return m_name;
}

std::string Order::get_destination() const
{
    return m_destination;
}

std::string Order::get_origin() const
{
    return m_origin;
}

double Order::get_time() const
{
    return m_time;
}

int Order::get_id() const
{
    return m_id;
}


void Order::set_name(const std::string& name)
{
    m_name = name;
}

void Order::set_destination(const std::string& destination)
{
    m_destination = destination;
}

void Order::set_origin(const std::string& origin)
{
    m_origin = origin;
}

void Order::set_time(double time)
{
    m_time = time;
}