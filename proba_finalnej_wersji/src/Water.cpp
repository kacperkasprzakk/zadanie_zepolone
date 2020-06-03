#include "Water.hh"
#include <fstream>

using namespace std;

Water::Water()
{
    ifstream inputFile;
    inputFile.open(kModelWater);
    if (!inputFile.is_open())
    {
        cerr << "Unable to load model Water file!"<< endl;
        return;
    }

    Vector3D point;
    while (inputFile >> point)
    {
        points.push_back(point);
    }
    inputFile.close();
}
void Water::draw(std::string filename) const
{
    ofstream outputFile;
    outputFile.open(filename);
    if (!outputFile.is_open())
    {
        cerr << "Unable to open Water file!" << endl;
        return;
    }
    for (unsigned i = 0; i < points.size(); ++i)
    {
        outputFile << points[i] << endl;
    }
}
