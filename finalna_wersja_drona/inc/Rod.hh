//
// Created by kacper on 24.05.2020.
//

#pragma once
#include "Shape.hh"
#include "Obstacle.hh"
#include <iostream>
#include <fstream>

const std::string kModelRod("solid/rod_read.dat");
const std::string kRodFile ("solid/rod.dat");

class Rod: public Obstacle
{
public:
    Rod();
    void draw(string filename) const;
    void detectCollision(const Complete_drone &drone) const;
    std::string getName() const
    {
        return "rod";
    }
};