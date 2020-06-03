#pragma once

#include "Shape.hh"
#include "Turbine.hh"
#include <cmath>

const std::string kModelDrone("solid/model.dat");
const std::string kDroneFile("solid/drone.dat");
constexpr double PI=3.14159265;

class Complete_drone: public Shape{
    double current_angle;
    Turbine* leftTurbine;
    Turbine* rightTurbine;
public:
    std::vector<Vector3D> outside;
    Complete_drone();
    void move(double angle, double distance);
    bool position() const;
    void draw(std::string filename) const;
    void rotate(double angle)
    {
        current_angle += (angle*PI/180);
    }

};
