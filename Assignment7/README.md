# Assignment 7
## Generalized capture with initialization
### Overview 
In the /Assignment7/src/Reader.cpp file, a lambda expression named ErrorFile is employed within an assignment.
This lambda defines a function that returns a string copied from a stack within the user function. T
he initialization of this string occurs locally within the Capture Clause.
Though the mutable keyword is used to enable alterations to the string within the Lambda Expression, it's unnecessary in this context. 
The resulting string is then outputted to the user via std::cout.
### Function
Function Definition:/Assignment7/src/Reader.cpp function void Reader::getTriangles(std::vector<Triangle> &triangles).
### Code
 auto ErrorFile = [ &msg = "File error"] () mutable
    {
         std:: string msg = "File not exist, check your file.";
         return msg;
    };
