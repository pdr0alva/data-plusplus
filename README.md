## Data PlusPlus

#### A Lightweight Embedded Database for C++ Developers

Data PlusPlus is designed to be a simple, efficient embedded database for C++ applications, offering essential data storage without the overhead of complex database management systems like MySQL.

The idea originated from the need to analyze backtracking performance in a word iterator program. Setting up a full SQL database seemed excessive for this purpose, so I initially created a lightweight module to save timing data directly to a file. 

This approach inspired Data PlusPlus: a minimalistic, high-performance tool that allows C++ developers to store and retrieve data directly within their applications, making it ideal for projects that prioritize speed and simplicity.

Data PlusPlus is both easy to integrate and highly performant, providing C++ developers a straightforward data solution without compromising reliability.


--- 

#### Showcase of it's power

You can create a entire file structure to store N tables with M columns with this snippet:

```cpp
#include "data-plusplus.h"

int main (void)
{  
    TableFile tf("file_name");
    TableHeader th("My Table");
    TableRowType twtype;

    th.inputNewColumn("id", "INT32");
    th.inputNewColumn("username", "char[30]");
    th.inputNewColumn("password", "HASH"); // create a automatic hash column

    tf.createFile();
    tf.associateHeader(th);    

    twtype.associateHeader(th);

    twtype[0] = 0;
    twtype[1] = "pdr0alva";
    twtype[2] = "generic";

    tf.inputData(twtype);

    return 0;
}
```
