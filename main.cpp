#include <iostream>
#include <fstream>
#include <vector>
#include <string>

#include "./lib/TableHeader.h"
#include "./lib/HeaderFileManager.h"
#include "./lib/Column.h"

int main (void)
{
    std::string path = "test.log";

    TableHeader th("My Table");

    th.inputNewColumn(Column("id", "INT(4)"));
    th.inputNewColumn(Column("name", "VARCHAR(20)"));
    th.inputNewColumn(Column("age", "INT(4)"));

    HeaderFileManager tfm(path);

    try 
    {
        tfm.write_TableHeader(th);
        TableHeader th_read = tfm.read_TableHeader();

        std::cout << th_read[0][1];
    }
    catch (char * e) 
    {
        std::cout << e;
    }

    return 0;
}