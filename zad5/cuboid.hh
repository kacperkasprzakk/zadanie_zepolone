#pragma once

#include <vector>
#include <string>
#include "Vector.hh"
constexpr double PI=3.14159265;

const std::string kModelCuboid("solid/model.dat");

class Cuboid
{
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
    void rotate(double angle);
    void move(double distance, double angle);
};