#include "../lib/DatabaseError.h"

const char* DatabaseError::what() const noexcept
{
    std::string whatmsg = "[CODE " + std::to_string(error_code) + ": " + e_msg + "]";

    return whatmsg.c_str();
}

void DatabaseError::set_error_code(const int &_i)
{   
    error_code = _i;

    if (_i == 200)
        e_msg = "NO ERRORS";

    return;
}

void DatabaseError::set_error_msg(const std::string &_str)
{
    e_msg = _str;

    return;
}

void DatabaseError::print_error() const noexcept
{
    std::cerr << '\n' << what() << '\n';
}

int DatabaseError::what_code() const noexcept { return error_code; }