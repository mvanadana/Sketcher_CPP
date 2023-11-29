# Assignment 6 
## Mutable Lambda
### Overview
This assignment involves utilizing a lambda expression in the /src/Reader.cpp file to define a function named ErrorFile. 
The lambda expression returns a string which is referenced from the user function stack by using & reference operator
in Capture Clause
and this string is then outputted to the user with std::cout.

### Function File:
Function Definition: /src/Reader.cpp funtion void Reader::getTriangles(std::vector<Triangle> &triangles) 
### Code 
 auto ErrorFile = [ &msg ] () mutable
    {
         std:: string msg = "File not exist, check your file.";
         return msg;
    };
