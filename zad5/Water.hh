//
// Created by kacper on 12.05.2020.
//

#pragma once

#include <iostream>
#include <cmath>
#include "Shape.hh"

const std::string kModelWater("solid/water.dat");

class Water: public Shape
{
    std::vector<Vector3D> points;
    Vector3D translation;
public:
    Water();
    void draw(string filename);
};
