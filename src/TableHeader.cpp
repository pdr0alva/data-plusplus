#include "../lib/TableHeader.h"

// private //

bool TableHeader::checkTableName(const std::string &_str) const
{   
    return (_str.find('%') == std::string::npos);
}

// public // 

TableHeader::TableHeader(const std::string &_t_name)
{
    table_name = _t_name;
}

bool TableHeader::inputNewColumn(std::string col_name, std::string data_type)
{
    column_set.push_back(Column(col_name, data_type));
    return true;
}

bool TableHeader::inputNewColumn(const Column &col)
{
    /* check column name */
    column_set.push_back(col);
    return true;
}

std::vector<Column> TableHeader::getColumnSet() const { return column_set; }

Column TableHeader::operator[](int idx) { return column_set[idx]; }

int TableHeader::size() const { return column_set.size(); }

std::string TableHeader::getTableName() const { return table_name; }