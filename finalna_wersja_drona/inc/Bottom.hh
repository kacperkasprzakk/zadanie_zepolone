//
// Created by kacper on 12.05.2020.
//
#pragma once

#include "Shape.hh"
const std::string kModelBottom("solid/bottom.dat");
const std::string kBottomResult("solid/bottom.dat");
class Bottom: public Shape
{
public:
    Bottom();
    virtual void draw(string filename) const;
    std::string getName() const
    {
        return "bottom";
    }
};
