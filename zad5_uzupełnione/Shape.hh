//
// Created by kacper on 12.05.2020.
//
#pragma once

#include <vector>
#include <iostream>
#include <cmath>
#include "Vector.hh"

class Shape
{
protected:
    std::vector<Vector3D> coords;
    string name;
    Vector3D translation;
public:
    void translate(Vector3D change)
    {
        translation = translation + change;
    }
};