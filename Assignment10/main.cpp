#include<iostream>
#include<deque>
#include "headers/Reader.h"
#include "headers/Triangle.h"
#include "headers/Triangulation.h"
#include "headers/Writer.h"

int main()
{
     std::deque<Triangle> triangles;
     
    Reader reader("resources/cubeModel.stl");
    reader.getTriangles(triangles);
    Triangulation triangulation(triangles);

    Writer writer;

    std::deque<Triangle> outTriangles=triangulation.getTriangles();
    writer.write("output.txt", outTriangles);


    // std::cout<<triangles.size()<<std::endl;

    std::cout<<"Press enter to exit\n";
    std::cin.ignore();
    std::cin.get();
   
    return 0;
}