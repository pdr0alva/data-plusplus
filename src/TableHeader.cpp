#include "../lib/TableHeader.h"

TableHeader::TableHeader(std::string _t_name)
{
    this -> table_name = _t_name;
}

bool TableHeader::inputNewColumn(std::string col_name, std::string data_type)
{
    this -> col_desc.push_back(Column(col_name, data_type));

    return true;
}

bool TableHeader::inputNewColumn(const Column &col)
{
    // check if column is valid (method inside Column)
    this -> col_desc.push_back(col);

    return true;
}

int TableHeader::size() const
{
    return this -> col_desc.size();
}

std::vector<Column> TableHeader::getColTypes() const 
{
    return this -> col_desc;
}

Column TableHeader::operator[](int idx)
{
    return this -> col_desc[idx];
}

std::string TableHeader::getTableName() const
{
    return this -> table_name;
}