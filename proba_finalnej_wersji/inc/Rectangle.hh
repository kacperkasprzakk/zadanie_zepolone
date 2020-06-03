#pragma once

#include "Obstacle.hh"

const std::string kModelRectangle("solid/rectangleRead.dat");
const std::string kRectangleFile("solid/rectangle.dat");

class Rectangle: public Obstacle{
  public:
    Rectangle();
    void draw(std::string filename) const;
    bool detectCollision(const Complete_drone& drone) const;
    void getName() const
    {
        std::cout << "rectangle";
    };
};