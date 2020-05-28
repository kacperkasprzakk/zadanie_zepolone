//
// Created by kacper on 25.05.2020.
//

#pragma once
#include <iostream>
#include <fstream>
#include "Obstacle.hh"

const std::string kModelRectangle("solid/rectangle.dat");

class Rectangle: public Obstacle
{
public:
    Rectangle();
    void draw(string filename) const ;
    void detectCollision(const Complete_drone &drone) const;
    std::string getName() const
    {
        return "rectangle";
    }
};
