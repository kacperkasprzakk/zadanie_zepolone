//
// Created by kacper on 23.05.2020.
//
#pragma once

#include "Shape.hh"
#include <fstream>
#include "Rotate_Matrix.hh"


const std::string kModelTurbine("solid/turbine.dat");
class Turbine : public Shape{
    double curr_angle;
    public:
        Turbine();
        void draw(std::string filename) const ;
        Vector3D stickToComplete_drone();
        void followTheComplete_drone();
        std::string getName() const
        {
            return "turbine";
        }
};


