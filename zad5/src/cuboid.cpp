#include "cuboid.hh"
#include <fstream>
#include <iostream>
#include <cmath>
#include <iostream>
#include "Matrix.hh"

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
    	Matrix <double, 3> rotation_matrix;
        rotation_matrix(0,0) = cos(angle*PI/180);
        rotation_matrix(0,1) = -sin(angle*PI/180);
        rotation_matrix(0,2) = 0;
        rotation_matrix(1,0) = sin(angle*PI/180);
        rotation_matrix(1,1) = cos(angle*PI/180);
        rotation_matrix(1,2) = 0;
        rotation_matrix(2,0) = 0;
        rotation_matrix(2,1) = 0;
        rotation_matrix(2,2) = 1;
}



