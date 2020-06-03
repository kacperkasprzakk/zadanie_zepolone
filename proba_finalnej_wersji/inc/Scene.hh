#pragma once

#include "Water.hh"
#include "Bottom.hh"
#include "Complete_drone.hh"
#include "Obstacle.hh"
#include "Rod.hh"
#include "Rectangle.hh"
#include "cuboid.hh"
#include <vector>
#include <memory>


class Scene{
    Complete_drone* drone;
    Water* water;
    Bottom* bottom;
    std::vector<std::shared_ptr<Obstacle>> objects;
    public:
        Scene();
        void draw()const;
        void drawDrone()
        {
            drone->draw(kDroneFile);
        };
        void rotateDrone(double angle)
        {
            drone->rotate(angle);
        };
        void moveDrone(double angle, double distance)
        {
            drone->move(angle,distance);
        };
        bool dronePosition() const
        {
            drone->position();
        };
        void makeObstacles();
        bool detectCollision() const;
};