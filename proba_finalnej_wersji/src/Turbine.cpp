#include "Turbine.hh"
#include "Rotate_Matrix.hh"
#include <fstream>
constexpr double PI=3.14159265;
using namespace std;


Turbine::Turbine() :angleX{0}
{
    ifstream inputFile;
    inputFile.open(kModelTurbine);
    if (!inputFile.is_open())
    {
        cerr<<"Unable to load model Turbine file!"
             <<endl;
        return;
    }
    Vector3D point;
    while (inputFile>>point)
    {
        points.push_back(point);
    }
    inputFile.close();
}


Vector3D Turbine::stickToComplete_drone(double dis) const
{
    Vector3D change;
    change[0]=-10;
    change[1]=dis;
    change[2]=0;
    return change;
}

void Turbine::followTheComplete_drone(string filename, double angleZ, Vector3D change)
{
    ofstream outputFile;
    outputFile.open(filename);
    if (!outputFile.is_open())
    {
        cerr << "Unable to open Turbine file!" << endl;
        return;
    }
    if (angleX<180)
    {
        angleX+=PI/180;
    }
    else
    {
        angleX=0;
    }
    Matrix3D rotationZ('z', angleZ);
    Matrix3D rotationX('x', angleX);
    Vector3D v, w;

    for (unsigned i=0; i<points.size(); ++i)
    {
        v= rotationX*points[i];
        if (filename=="solid/leftTurbine.dat")
        {
            w=v+stickToComplete_drone(20);
        }
        else if(filename=="solid/rightTurbine.dat")
        {
            w=v+stickToComplete_drone(-20);
        }
        outputFile<<(rotationZ*w)+change<<endl;
        if (i%4==3)
        {
            outputFile<<"#\n\n";
        }
    }
}