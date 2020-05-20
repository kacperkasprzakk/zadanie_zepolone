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


class Scene{
    Water wat;
    Bottom bot;
    Cuboid cub;

public:
    Scene(Bottom b, Water w, Cuboid c);
    void draw(string filename);
};
