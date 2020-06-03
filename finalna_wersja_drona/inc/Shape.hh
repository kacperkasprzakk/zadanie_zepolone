//
// Created by kacper on 12.05.2020.
//
#pragma once

#include <vector>
#include <iostream>
#include <cmath>
#include "Vector.hh"

class Shape
{
protected:
    std::vector<Vector3D> points;
    Vector3D translation;
public:
    void translate(Vector3D change)
    {
        translation = translation + change;
    }
    virtual void draw(std::string filename) const = 0;
    virtual std::string getName() const =0;
};