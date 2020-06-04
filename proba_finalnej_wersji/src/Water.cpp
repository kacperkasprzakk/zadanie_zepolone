#include "Water.hh"
#include <fstream>

using namespace std;
/**
 * Konstruktor Cuboida
 * otwiera plik do którego ścieżka i nazwa są podane w
 * kModelWater
 * konstruktory wszystkich innych klas (Bottom i Water) są odpowiednio przerobionym
 * kontruktorem cuboida
 *
 */
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
/**
 * wypisywanie do pliku
 *
 * @param filename - nazwa pliku do którego zapisujemy dane z drona
 *
 */
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
