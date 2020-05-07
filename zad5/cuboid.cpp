#include "cuboid.hh"
#include <fstream>
#include <iostream>
#include <cmath>
#include <iostream>

using namespace std;

Cuboid::Cuboid(): angle{0}
{
    ifstream inputFile;
    inputFile.open(kModelCuboid);
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

void Cuboid::draw(std::string filename) const
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
        outputFile << points[i] + translation << endl;
        if(i % 4 == 3) // triggers after every 4 points
        {
            outputFile << "#\n\n";
        }
    }
}

void  Cuboid::rotate(double angle)
{
    for(int i=0; i< points.size(); i++)
    {
        double x,y,xb,yb;
        x=points[i][0];
        y=points[i][1];
        xb=x*cos(angle*PI/180) - y*sin(angle*PI/180);
        yb=x*sin(angle*PI/180) + y*cos(angle*PI/180);
    }
}