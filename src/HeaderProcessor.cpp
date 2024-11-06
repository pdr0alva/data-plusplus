#include "../lib/HeaderProcessor.h"

TableHeader HeaderProcessor::processRawString(std::string &raw_data) const
{
    TableHeader th;

    std::string name;

    size_t sname = raw_data.find('%');

    while (sname != std::string::npos)
    {
        size_t end = raw_data.find('%', sname + 1);

        if (end != std::string::npos)
        {
            name = raw_data.substr(sname + 1, end - sname - 1);
            break;
        }
    }
    
    th.inputNewColumn(name, name);

    return th;
}