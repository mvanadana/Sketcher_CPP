#pragma once
#include <vector>
#include <string>
#include "Triangle.h"
#include <map>

class Reader {
public:
    Reader(std::string filePath);
    ~Reader();

    void getTriangles(std::vector<Triangle>& triangles);
    std::map<int,std::string> LinesMap();
private:
    std::string mFilePath;
};