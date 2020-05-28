//
// Created by kacper on 23.05.2020.
//

#include "Turbine.hh"

Turbine::Turbine() : curr_angle{0}
{
    ifstream inputFile;
    inputFile.open(kModelTurbine);
    if(!inputFile.is_open())
    {
        cerr << "Unable to load model Turbine file!"
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

void Turbine::draw(string filename) const
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
Vector3D Turbine::stickToComplete_drone()
{

}
void Turbine::followTheComplete_drone()
{

}