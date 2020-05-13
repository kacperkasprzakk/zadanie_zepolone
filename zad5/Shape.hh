#pragma once

#include <iostream>
#include <cmath>
#include "Vector.hh"

class Shape
{
protected:
    Vector3D translation;
public:
    void translate(Vector3D change)
        {
		translation = translation + change;
	}

};
