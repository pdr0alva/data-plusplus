#include "../lib/Column.h"

Column::Column(const std::string &_name, const std::string &_type)
{
    cinfo[0] = _name;
    cinfo[1] = _type;
}

std::string Column::setName(const std::string &_name) 
{
    cinfo[0] = _name;
}

std::string Column::setType(const std::string &_t)
{
    /* ! CHECK IF TYPE IS VALID */    
    cinfo[1] = _t;
}

bool Column::checkColumnName(const std::string &_name) const
{
    return _name.find('"') == std::string::npos;
}

std::string Column::operator[](int idx) const
{
    return cinfo[idx];
}

std::string Column::getName() const { return cinfo[0]; }
std::string Column::getType() const { return cinfo[1]; }