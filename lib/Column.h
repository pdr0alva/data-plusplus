#ifndef COLUMN__H__
#define COLUMN__H__

#include <string>

class Column
{
    private:
        std::string cinfo[4];
        std::string fixColumnName(std::string str); 
        bool checkColumnToken(const std::string &str);

    public:
        Column(const std::string &_name, const std::string &_type);
        Column() = default;

        std::string getName() const;
        std::string getType() const;

        std::string setName(const std::string &_name);
        std::string setType(const std::string &_t);

        std::string operator[](int idx) const;
};

#endif