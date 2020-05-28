//
// Created by kacper on 13.05.2020.
//

#pragma once

#include "Water.hh"
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <vector>
#include "Obstacle.hh"
#include "Bottom.hh"
#include "cuboid.hh"
#include "Rod.hh"
#include "Rectangle.hh"
#include <memory>
#include "Complete_drone.hh"


class Scene{
    Water water;
    Bottom bottom;
    Complete_drone drone;
    std::vector<std::shared_ptr<Obstacle>> ob;

public:
    Scene();
    void draw(std::string filename) const;
    void makeObstacles();
    void detectCollision() const;

};
