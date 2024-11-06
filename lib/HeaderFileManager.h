#ifndef TABLE_FILE_MANAGER__H__
#define TABLE_FILE_MANAGER__H__

#include <fstream>

#include "TableHeader.h"
#include "HeaderProcessor.h"


class HeaderFileManager 
{
    private: 
        std::string fpath;

    public:
        HeaderFileManager(std::string &_filepath);

        bool write_TableHeader(TableHeader &_th) const;
        TableHeader read_TableHeader() const;
};


#endif