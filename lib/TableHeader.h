#ifndef TABLE_HEADER__H__
#define TABLE_HEADER__H__

#include <vector>
#include <array>
#include <string>


#include "Column.h"
#include "DatabaseError.h"

class TableHeader
{
    private:
        std::string table_name;
        std::vector<Column> column_set; 

        bool checkTableName(const std::string &_str) const;

    public:
        TableHeader(const std::string &_t_name);
        TableHeader() = default;

        bool inputNewColumn(std::string col_name, std::string data_type);
        bool inputNewColumn(const Column &col);

        std::string getTableName() const;
        std::vector<Column> getColumnSet() const;

        Column operator[](int idx);
        int size() const;   
};


#endif