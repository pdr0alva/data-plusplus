#ifndef DATABASE_ERROR__H__
#define DATABASE_ERROR__H__

#include <stdexcept>


class DatabaseError : public std::exception
{
    private: 
        std::string e_msg;

    public:
        char * what () noexcept;    
};


#endif