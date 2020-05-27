//
// Created by kacper on 23.05.2020.
//
#pragma once

#include "Shape.hh"
#include <fstream>
const std::string kModelTurbine("solid/turbine.dat");
class Turbine : public Shape{
    public:
        Turbine();
        void draw(string filename);
};


