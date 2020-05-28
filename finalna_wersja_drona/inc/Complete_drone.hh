//
// Created by kacper on 23.05.2020.
//

#pragma once

#include "cuboid.hh"
#include "Shape.hh"
#include <fstream>
#include "Turbine.hh"
#include "Rotate_Matrix.hh"
const std::string kModelDrone("solid/model.dat");
const std::string kDroneFile("solid/drone.dat");


class Complete_drone: public Shape
{
    Matrix3D current_angle;
    Vector3D translation;
    double angle;
    Turbine left, right;
public:
    std::vector<Vector3D> outside;
    Complete_drone();
    void draw(std::string filename) const;
    void rotate(double  angle);
    void move(double distance, double angle);
    std::string getName() const
    {
        return "drone";
    }

};