#pragma once

#include "Shape.hh"

const std::string kModelBottom("solid/bottomRead.dat");
const std::string kBottomFile("solid/bottom.dat");


class Bottom: public Shape{
    public:
        Bottom();
        void draw(std::string filename) const;
};