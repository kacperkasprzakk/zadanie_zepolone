//
// Created by kacper on 23.05.2020.
//
#include "Complete_drone.hh"
#include "Turbine.hh"

Complete_drone::Complete_drone(): current_angle{0}
{
    ifstream inputFile;
    inputFile.open(kModelCuboid);
    if(!inputFile.is_open())
    {
        cerr << "Unable to load model Drone file!"
             << endl;
        return;
    }
    Vector3D point;
    while(inputFile >> point)
    {
        points.push_back(point);
    }
    inputFile.close();

    inputFile.open("solid/outside.dat");
    if (!inputFile.is_open())
    {
        cerr << "Unable to load \"collision cage\" file!"
             << endl;
        return;
    }
    while (inputFile >> point)
    {
        outside.push_back(point);
    }
    inputFile.close();

}

void Complete_drone::draw(string filename) const
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
            outputFile << current_angle*points[i] + translation << endl;
            if(i % 4 == 3)
            {
                outputFile << "#\n\n";
            }
        }
}
void  Complete_drone::rotate(double angle)
{
    /*Vector3D final_point;

    for (int i = 0; i < points.size(); i++)
    {
        final_point=Matrix3D(angle)*final_point;
        translate(final_point);
    } */
    current_angle=current_angle*Matrix3D(angle);

}
void Complete_drone::move(double distance, double angle)
{
    Vector3D final_point;
    final_point[0]=final_point[0]+distance*cos(angle*PI/180)*cos(angle*PI/180);
    final_point[1]=final_point[1];
    final_point[2]=final_point[2]+distance*sin(angle*PI/180)*sin(angle*PI/180);
    translate(final_point);

    for(int i=0; i<points.size(); ++i)
    {
        outside[i]=outside[i]+final_point;
    }
}