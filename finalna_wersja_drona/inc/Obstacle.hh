//
// Created by kacper on 23.05.2020.
//
#pragma once
#include "cuboid.hh"

class Complete_drone;

class Obstacle: public Shape
{
public:
    virtual void draw(string filename) const=0;
    virtual void detectCollision(const  Complete_drone &drone) const =0;
    virtual std::string getName() const =0;
};
