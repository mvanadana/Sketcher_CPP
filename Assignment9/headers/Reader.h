#pragma once
#include <list>
#include <string>
#include "Triangle.h"

class Reader {
public:
    Reader(std::string filePath);
    ~Reader();

    void getTriangles(std::list<Triangle>& triangles);
    void ReadLines();
private:
    std::string mFilePath;
};