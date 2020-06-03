#pragma once

#include "Shape.hh"

const std::string kModelWater("solid/waterRead.dat");
const std::string kWaterFile("solid/water.dat");


class Water: public Shape{
    public:
        Water();
        void draw(std::string filename) const;
};