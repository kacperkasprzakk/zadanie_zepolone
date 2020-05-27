//
// Created by kacper on 24.05.2020.
//

#include "Rod.hh"


Rod::Rod()
{
    ifstream inputFile;
    inputFile.open(kModelRod);
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

void  Rod::draw(string filename) const
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
        outputFile << points[i] << endl;
    }
}