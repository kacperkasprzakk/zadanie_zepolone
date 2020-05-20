//
// Created by kacper on 13.05.2020.
//

#pragma once

#include "Matrix.hh"
#include "cuboid.hh"
#include <cmath>
constexpr double PI=3.14159265;
/**
 * macierz obrotu uzupełniona według danych
 * podanych na wikipedii pod linkiem
 * https://pl.wikipedia.org/wiki/Macierz_obrotu
 *
 *
 */
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
     Matrix3D operator*(Matrix3D v2)
     {
         Matrix3D result(0);
         for (int i = 0; i < 3; ++i)
         {
             for (int j = 0; j <3 ; ++j)
             {
                 result.vec[i][j]=0;
             }
         }
         for (int i = 0; i < 3; ++i)
         {
             for (int j = 0; j <3 ; ++j)
             {
                 result.vec[i][j]=result.vec[i][j]+ this->vec[i][j]*v2.vec[j][i];
             }
         }
         return  result;
     }
    Matrix3D operator=(Matrix3D v2)
    {
        for (int i = 0; i < 3; ++i)
        {
            for (int j = 0; j <3 ; ++j)
            {
                this->vec[i][j]=v2.vec[i][j];
            }
        }
        return *this;
    }
    Vector3D operator*(Vector3D v) const
    {
        Vector3D result;
        for(int i=0; i<3; ++i)
        {
            for (int j = 0; j < SIZE; ++j)
            {
                result[i] =result[i]+ this->vec[i][j]*v[i];
            }
        }
        return result;
    }
};

/*Matrix3D Matrix3D::operator*(Matrix3D v2)
{
    Matrix3D result(0);
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j <3 ; ++j)
        {
            result.vec[i][j]=0;
        }
    }
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j <3 ; ++j)
        {
            result.vec[i][j]=result.vec[i][j]+ this->vec[i][j]*v2.vec[j][i];
        }
    }
    return  result;

}
Matrix3D Matrix3D::operator=(Matrix3D v2)
{
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j <3 ; ++j)
        {
            this->vec[i][j]=v2.vec[i][j];
        }
    }
    return *this;
}
*/
