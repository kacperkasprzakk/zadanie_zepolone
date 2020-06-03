#include "Bottom.hh"
#include <fstream>

using namespace std;

Bottom::Bottom()
{
    ifstream inputFile;
    inputFile.open(kModelBottom);
    if (!inputFile.is_open())
    {
        cerr << "Unable to load model Bottom file!"
             << endl;
        return;
    }

    Vector3D point;
    while (inputFile >> point)
    {
        points.push_back(point);
    }
    inputFile.close();
}

void Bottom::draw(std::string filename) const
{
    ofstream outputFile;
    outputFile.open(filename);
    if (!outputFile.is_open())
    {
        cerr << "Unable to open Bottom file!" << endl;
        return;
    }
    for (unsigned i = 0; i < points.size(); ++i)
    {
        outputFile << points[i] << endl;
    }
}
