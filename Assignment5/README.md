# Assignment 5
## Algorithm with Lambda Expression
### Overview
This assignment involves utilizing a lambda expression in the /src/Reader.cpp file to define a function named ErrorFile.
The lambda expression returns a string, and this string is then printed to the user with std::cout.
### Implementation
1.Added a lambda function in /Assignment5/src/Reader.cpp
2.Function return string.
3.Used this function if file did not find.
### Code
auto ErrorFile=[]()
    {
         std:: string msg = "File not exist, check your file.";
         return msg;
    };
