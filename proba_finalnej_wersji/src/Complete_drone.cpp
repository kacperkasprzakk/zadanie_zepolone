#include "Complete_drone.hh"
#include "Rotate_Matrix.hh"
#include "Matrix.hh"
#include "gnuplot_link.hh"
#include <fstream>
#include <iostream>
#include <cmath>

using namespace std;

Complete_drone::Complete_drone() : current_angle{0}
{
    ifstream inputFile;
    inputFile.open(kModelDrone);
    if (!inputFile.is_open())
    {
        cerr << "Unable to load model Drone file!"
        << endl;
        return;
    }
    Vector3D point;
    while (inputFile>>point)
    {
        points.push_back(point);
    }
    inputFile.close();
    leftTurbine = new Turbine;
    rightTurbine = new Turbine;
    inputFile.open("solid/outside.dat");
    if (!inputFile.is_open())
    {
        cerr<<"Problem z kolizją (krawedziami)"<<endl;
        return;
    }
    while (inputFile>>point)
    {
        outside.push_back(point);
    }
    inputFile.close();
}
void Complete_drone::draw(std::string filename) const
{
    ofstream outputFile;
    outputFile.open(filename);
    if (!outputFile.is_open())
    {
        cerr<<"Unable to open Drone file!"<<endl;
        return;
    }
    Matrix3D rotation('z',current_angle);
    for (unsigned i=0; i<points.size(); ++i)
    {
        outputFile<<(rotation*points[i]) +translation<<endl;
        if (i % 4 == 3)
        {
            outputFile << "#\n\n";
        }
    }
    leftTurbine->followTheComplete_drone(kLTurbineFile,current_angle,translation);
    rightTurbine->followTheComplete_drone(kRTurbineFile,current_angle,translation);
}

void Complete_drone::move(double angle, double distance)
{
    angle *= PI / 180;
    Vector3D final_point;

    for (int i = 0; i < points.size(); i++)
    {
        final_point[0] = distance * cos(angle) *cos(current_angle);
        final_point[1] = distance * cos(angle) *sin(current_angle);
        final_point[2] = distance * sin(angle);
    }
    translate(final_point);
    for (int i = 0; i < outside.size(); i++)
    {
        outside[i] = outside[i] + final_point;
    }
}

bool Complete_drone::position() const
{
    if (translation[2] >= 180)
    {
        cout<<"Uderzono w wode"<<endl;
        return 1;
    }
    else if (translation[2]<=-180)
    {
        cout<<"Uderzono w dno"<<endl;
        return 1;
    }
    return 0;
}