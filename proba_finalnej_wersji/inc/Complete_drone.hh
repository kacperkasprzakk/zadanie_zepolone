//
// Created by kacper on 23.05.2020.
//

#pragma once

#include "cuboid.hh"
#include "Shape.hh"
#include <fstream>
#include "Turbine.hh"

class Complete_drone: public Shape
{
    std::vector<Vector3D> points;
    Matrix3D current_angle;
    Vector3D translation;
    double angle;
    Cuboid main_part;
    Turbine *left,*right;
public:
    Complete_drone();
    void draw(string filename) const;
    void rotate(double  angle);
    void move(double distance, double angle);


};