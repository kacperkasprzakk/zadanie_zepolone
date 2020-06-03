#pragma once

#include "Obstacle.hh"

const std::string kModelRod("solid/rodRead.dat");
const std::string kRodFile("solid/rod.dat");


class Rod: public Obstacle{
  public:
    Rod();
    void draw(std::string filename) const;
    bool detectCollision(const Complete_drone& drone) const;
    void getName() const
    {
        std::cout << "rod";
    };
};