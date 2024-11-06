#ifndef HEADER_PROCESSOR__H__
#define HEADER_PROCESSOR__H__

#include <cstddef>
#include <iostream>
#include <regex>
#include <string>

#include "./TableHeader.h"

class HeaderProcessor
{
    private:

    public:
        TableHeader processRawString(std::string &raw_data) const;
};


#endif