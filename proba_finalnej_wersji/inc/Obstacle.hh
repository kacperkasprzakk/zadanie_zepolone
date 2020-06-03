#pragma once

#include "Shape.hh"
#include "Complete_drone.hh"


class Obstacle: public Shape{
    public:
        virtual void draw(std::string filename) const = 0;
        virtual bool detectCollision(const Complete_drone &drone) const = 0;
        virtual void getName() const = 0;
};