#include<iostream>
#include<vector>
#include "headers/Reader.h"
#include "headers/Triangle.h"
#include "headers/Triangulation.h"
#include "headers/Writer.h"

int main()
{
    /*std::vector<Triangle> triangles;
    Reader reader("unknown.stl");
    reader.getTriangles(triangles);

    Triangulation triangulation(triangles);

    Writer writer;

    std::vector<Triangle> outTriangles=triangulation.getTriangles();
    writer.write("output.txt", outTriangles);


    // std::cout<<triangles.size()<<std::endl;

    std::cout<<"Press enter to exit\n";
    std::cin.ignore();
    std::cin.get();*/
    Point3D point(1,2,3);
    std::cout<<"("<<point.showX()<<"," << point.showY()<<","<<point.showZ()<<")"<<std::endl;
}