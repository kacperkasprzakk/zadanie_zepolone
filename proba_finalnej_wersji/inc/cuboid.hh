#pragma once

#include "Obstacle.hh"

const std::string kModelCuboid("solid/cuboidRead.dat");
const std::string kCuboidFile("solid/cuboid.dat");


class Cuboid: public Obstacle{
  public:
    Cuboid();
    void draw(std::string filename) const;
    bool detectCollision(const Complete_drone& drone) const;
    void getName() const
    {
        std::cout << "klocek";
    };
};