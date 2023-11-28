#include<iostream>
#include<vector>
#include "headers/Reader.h"
#include "headers/Triangle.h"
#include "headers/Triangulation.h"
#include "headers/Writer.h"

int main()
{

    Reader reader("resources/cubeModel.stl");
     for (const auto& pair : reader.LinesMap()) {
        std::cout << "Line " << pair.first << ": " << pair.second << std::endl;
    }
   
    return 0;
}