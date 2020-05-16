#include "cuboid.hh"
#include "Matrix.hh"
#include "Rotate_Matrix.hh"
#include <fstream>
#include <iostream>
#include <cmath>

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
    Vector3D final_point;
    for (int i = 0; i < points.size(); i++)
    {
        final_point=Matrix3D(angle*PI/180)*final_point;
    }
    translate(final_point);

}
void Cuboid::move(double distance, double angle)
{
    Vector3D final_point;
    for(int i=0; i<points.size(); i++)
    {
        final_point[0]=distance*cos(angle*PI/180)*cos(angle*PI/180);
        final_point[1]=final_point[1];
        final_point[2]=final_point[2]*sin(angle*PI/180)*sin(angle*PI/180);
    }
    translate(final_point);
}
