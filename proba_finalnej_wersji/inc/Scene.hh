//
// Created by kacper on 13.05.2020.
//

#pragma once

#include "Water.hh"
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include "Bottom.hh"
#include "cuboid.hh"
#include "Rod.hh"
#include "Rectangle.hh"
#include <memory>


class Scene{
    Water wat;
    Bottom bot;
    Cuboid cub;
    std::vector<std::shared_ptr<Obstacle>> obst;

public:
    Scene(Bottom b, Water w, Cuboid c);
    void draw(string filename);
    void makeObstacles();
};
