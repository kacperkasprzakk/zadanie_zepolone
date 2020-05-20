#pragma once

#include <vector>
#include <string>
#include "Vector.hh"
#include "Rotate_Matrix.hh"

const std::string kModelCuboid("solid/model.dat");

class Cuboid
{
    std::vector<Vector3D> points;
    Matrix3D current_angle;
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