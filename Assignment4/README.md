# Assignment4
# File Handling in C++ Part2
## Overview
This assignment involves file handling in C++ to read and process triangle data from a file. The implementation is split between two files: Reader.cpp and Writer.cpp. The tasks include using the getline() function, utilizing istringstream for string parsing, creating Point3D objects, and populating a vector of Triangle objects and to read only vertex value from .stl file.

### Implementation
1.Implemented getline() function in getTriangles() in  /Assignment4/src/Reader.cpp.
2.Implemented if condition logic to read only vertex value from .stl file in /Assignment4/src/Reader.cpp
3.Used an istringstream to parse the string in /Assignment4/src/Reader.cpp
4.Taken all values and pass each (x, y, z) values to the point3D class object in /Assignment4/src/Reader.cpp
5.Added that object in the Triangle class type vector in /Assignment4/src/Reader.cpp Used a range-for loop to print out the data from each object in write() function in location/Assignment4/src/Writer.cpp
