//
// Created by kacper on 13.05.2020.
//

#pragma once

#include "Matrix.hh"
#include "cuboid.hh"
#include <cmath>

class Matrix3D : public Matrix<double,3>
{
public:
    Matrix3D(double angle)
    {
        vec[0][0] = cos(angle*PI/180);
        vec[0][1] = -sin(angle*PI/180);
        vec[0][2] = 0;
        vec[1][0] = sin(angle*PI/180);
        vec[1][1] = cos(angle*PI/180);
        vec[1][2] = 0;
        vec[2][0] = 0;
        vec[2][1] = 0;
        vec[2][2] = 1;
    }
};