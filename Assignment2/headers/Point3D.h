#pragma once
#include<string>
#include<iostream>
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
    std::string showX();
    std::string showY();
    std::string showZ();

private:
    double mX;
    double mY;
    double mZ;
};