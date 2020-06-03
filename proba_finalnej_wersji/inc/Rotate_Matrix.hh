#pragma once

#include "Matrix.hh"
#include <cmath>

/**
 * macierz obrotu uzupełniona według danych
 * podanych na wikipedii pod linkiem
 * https://pl.wikipedia.org/wiki/Macierz_obrotu
 *
 *
 */
class Matrix3D : public Matrix<double, 3>{
public:
    Matrix3D(char a, double angle)
    {
        switch (a)
        {
            case 'z':
                vec[0][0] = cos(angle);
                vec[0][1] = sin(angle);
                vec[0][2] = 0;
                vec[1][0] = -sin(angle);
                vec[1][1] = cos(angle);
                vec[1][2] = 0;
                vec[2][0] = 0;
                vec[2][1] = 0;
                vec[2][2] = 1;
            break;
            case 'y':
                vec[0][0] = cos(angle);
                vec[0][1] = 0;
                vec[0][2] = sin(angle);
                vec[1][0] = 0;
                vec[1][1] = 1;
                vec[1][2] = 0;
                vec[2][0] = -sin(angle);
                vec[2][1] = 0;
                vec[2][2] = cos(angle);
                break;
        case 'x':
                vec[0][0] = 1;
                vec[0][1] = 0;
                vec[0][2] = 0;
                vec[1][0] = 0;
                vec[1][1] = cos(angle);
                vec[1][2] = sin(angle);
                vec[2][0] = 0;
                vec[2][1] = -sin(angle);
                vec[2][2] = cos(angle);
        default:
            break;
        }
    }
};