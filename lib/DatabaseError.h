#ifndef DATABASE_ERROR__H__
#define DATABASE_ERROR__H__

#include <stdexcept>
#include <cstring>
#include <string>
#include <iostream>

class DatabaseError : public std::exception
{
    private: 
        std::string e_msg;
        int error_code; // based on HTTP

    public:
        const char* what() const noexcept;    
        int what_code() const noexcept;

        void set_error_code(const int &_i);
        void set_error_msg(const std::string &_str);

        void print_error() const noexcept;
};     


#endif