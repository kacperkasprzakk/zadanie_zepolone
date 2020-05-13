#pragma once

#include "Matrix.hh"
#include <cmath>

class Matrix3D : public Matrix<double,3>
{
public:
    Matrix3D(double angle)
    {
        rotation_matrix(0,0) = cos(angle*PI/180);
        rotation_matrix(0,1) = -sin(angle*PI/180);
        rotation_matrix(0,2) = 0;
        rotation_matrix(1,0) = sin(angle*PI/180);
        rotation_matrix(1,1) = cos(angle*PI/180);
        rotation_matrix(1,2) = 0;
        rotation_matrix(2,0) = 0;
        rotation_matrix(2,1) = 0;
        rotation_matrix(2,2) = 1;
    }
};
