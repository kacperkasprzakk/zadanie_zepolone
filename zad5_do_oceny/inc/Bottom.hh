//
// Created by kacper on 12.05.2020.
//
#pragma once

#include "Shape.hh"
const std::string kModelBottom("solid/bottom.dat");
class Bottom: public Shape
{
    std::vector<Vector3D> points;
public:
    Bottom();
    void draw(string filename);
};
