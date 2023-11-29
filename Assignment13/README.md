# Assignment 13
## Interfacing to C
### Overview
This task involves integrating a specific segment of C code into the existing program. 
While applicable across various programming languages, the implementation might vary in terms of keywords or methods used. 
The primary goal is to optimize program performance by directly incorporating a C code segment.
### Function Declaration and Definition
Function Declaration: The /Assignment13/src/Display.h file contains the segment of code designated for implementation as a C function, accessible via a C++ file.
Macro Implementation: The #ifdef __cplusplus macro differentiates the inclusion of the file in C++ code, enabling the extern "C" {} construct to facilitate compatibility.

### Implementation
In the /Assignment13/src/Display.cpp file, the void display() function is implemented to execute the specified code segment:

### Code 
void display()
{
    printf("File does not exist");
}

