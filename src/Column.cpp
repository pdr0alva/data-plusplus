#include "../lib/Column.h"

Column::Column(const std::string &_name, const std::string &_type)
{
    this -> fixColumnName(_name);

    this -> cinfo[0] = _name;
    this -> cinfo[1] = _type;
}

std::string Column::setName(const std::string &_name) 
{
    this -> cinfo[0] = fixColumnName(_name);
}

std::string Column::setType(const std::string &_t)
{
    /* ! CHECK IF TYPE IS VALID */    
    this -> cinfo[1] = _t;
}

std::string Column::fixColumnName(std::string _name)
{
    for (size_t i = 0; i < _name.size(); i++)
    {
        if (_name[i] == '{' || _name[i] == '}')
            _name.erase(_name.begin() + i);
    }

    return _name; 
}

std::string Column::operator[](int idx) const
{
    return cinfo[idx];
}

std::string Column::getName() const { return cinfo[0]; }
std::string Column::getType() const { return cinfo[1]; }