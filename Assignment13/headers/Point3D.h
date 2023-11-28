#pragma once
#include<string>
#include<iostream>
#include <cmath>
class Point3D
{
public:
    Point3D(double inX, double inY, double inZ);
    ~Point3D();

    double x();
    double y();
    double z();

    void setX(double x);
    void setY(double y);
    void setZ(double z);
    double showX();
    double showY();
    double showZ();
    virtual void display() ;
   
private:
    double mX;
    double mY;
    double mZ;
};