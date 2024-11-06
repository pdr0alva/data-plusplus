#include "../lib/HeaderFileManager.h"

HeaderFileManager::HeaderFileManager(std::string &_filepath)
{
    this -> fpath = _filepath;
}

bool HeaderFileManager::write_TableHeader(TableHeader &_th) const
{   
    std::fstream fs(fpath, std::ios::in | std::ios::out);

    if (!fs.is_open()) throw "Error opening file";
    else
    {
        fs << '%' << _th.getTableName() << '%';

        for (int i = 0; i < _th.size(); i++)
        {
            fs << "$[N{" << _th[i][0] << "}";
            fs << "T{" << _th[i][1] << '}';
            fs << ']';
        }
    
        fs << "&\n";
    }

    return true;
}

TableHeader HeaderFileManager::read_TableHeader() const
{
    HeaderProcessor header_processor; 
    TableHeader th;

    std::ifstream fs(fpath, std::ios::in);
    
    if (!fs.is_open()) throw "Error opening file";
    else
    {
        std::string buffer;

        getline(fs, buffer);

        th = header_processor.processRawString(buffer);
    }
    
    return th;
}