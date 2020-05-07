#pragma once

#include <vector>
#include <string>
#include "Vector.hh"

const std::string kModelCuboid("model.dat");

class Cuboid{
    std::vector<Vector3D> points;
    Vector3D translation;
    double angle;

public:
    Cuboid();
    void draw(std::string filename) const;
    void translate(Vector3D change)
    {
        translation = translation + change;
    }
};