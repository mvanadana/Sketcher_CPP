#pragma once
#include <deque>
#include "Triangle.h"
#include "BBox.h"
#include <functional>

class Triangulation
{

public:
    Triangulation(std::deque<Triangle> triangles);
    ~Triangulation();

    std::deque<Triangle> getTriangles();
    

private:
    std::deque<Triangle> mTriangles;
    BBox mBBox;
};
