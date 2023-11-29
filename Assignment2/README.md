# Assignment 2
## Character Functions
### Overview
This assignment involves prints a string returned from a function call using std::cout. In the /Assignment2/src/Point3D.cpp file,
a function named showX(),showY(),showZ() is defined, which returns a string. This string is then outputted to the user with std::cout.
### Function 
1.Three functions showX(),showY(),showZ() is defined in /Assignment2/headers/Point3D.h which has a string return type.
2.Functions are implemented in /Assignment2/src/Point3D.cpp.
### Main File
1.Object of Point3D is created with three parameters(x,y,z)
2.A function call in std::cout.
    Point3D point(1,2,3);
    std::cout<<"("<<point.showX()<<"," << point.showY()<<","<<point.showZ()<<")"<<std::endl;
