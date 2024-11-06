#ifndef TABLE_HEADER__H__
#define TABLE_HEADER__H__

#include <vector>
#include <array>
#include <string>

#include "Column.h"

class TableHeader
{
    private:
        std::string table_name;
        std::vector<Column> col_desc; 

    public:
        TableHeader(std::string _t_name);
        TableHeader() = default;

        bool inputNewColumn(std::string col_name, std::string data_type);
        bool inputNewColumn(const Column &col);

        std::vector<Column> getColTypes() const;
        Column operator[](int idx);

        std::string getTableName() const;
        int size() const;
};


#endif