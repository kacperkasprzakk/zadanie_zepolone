#pragma once

#include "Shape.hh"

const std::string kModelTurbine("solid/modelTurbine.dat");
const std::string kLTurbineFile("solid/leftTurbine.dat");
const std::string kRTurbineFile("solid/rightTurbine.dat");

class Turbine: public Shape{
    double angleX;
public:
    Turbine();
    void draw(std::string filename) const{};
    Vector3D stickToComplete_drone(double dis) const;
    void followTheComplete_drone(std::string filename,double angle,Vector3D translation);
};