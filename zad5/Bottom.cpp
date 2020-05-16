//
// Created by kacper on 12.05.2020.
//
#pragma once

#include "Bottom.hh"
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

Bottom::Bottom()
{
    ifstream inputFile;
    inputFile.open(kModelBottom);
    if(!inputFile.is_open())
    {
        cerr << "Unable to load model Cuboid file!"
             << endl;
        return;
    }
    Vector3D point;
    while(inputFile >> point)
    {
        points.push_back(point);
    }
    inputFile.close();
}
void Bottom::draw(string filename)
{
    ofstream outputFile;
    outputFile.open(filename);
    if(!outputFile.is_open())
    {
        cerr << "Unable to open drone file!" << endl;
        return;
    }
    for(unsigned i = 0; i < points.size(); ++i)
    {
        outputFile << points[i]<< endl;
    }
}
