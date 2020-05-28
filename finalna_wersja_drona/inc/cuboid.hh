#pragma once

#include <vector>
#include <string>
#include "Vector.hh"
#include "Shape.hh"
#include "Obstacle.hh"

const std::string kModelCuboid("solid/model.dat");
class Complete_drone;
class Cuboid: public Shape
{
//    double angle;
public:
    Cuboid();
    void draw(std::string filename) const;
    void translate(Vector3D change)
    {
        translation = translation + change;
    }
    void detectCollision(const Complete_drone &drone) const;
    //void rotate(double angle);
    //void move(double distance, double angle);
    std::string getName() const
    {
        return "cuboid";
    }
};