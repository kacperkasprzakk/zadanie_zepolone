#include "Rod.hh"
#include <fstream>

using namespace std;
/**
 * Konstruktor Rod
 * otwiera plik do którego ścieżka i nazwa są podane w
 * kModelRod
 * konstruktory wszystkich innych klas (Bottom i Water) są odpowiednio przerobionym
 * kontruktorem cuboida
 *
 */

Rod::Rod()
{
    ifstream inputFile;
    inputFile.open(kModelRod);
    if (!inputFile.is_open())
    {
        cerr << "Unable to load model Rod file!" << endl;
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
void Rod::draw(string filename) const
{
    ofstream outputFile;
    outputFile.open(filename);
    if (!outputFile.is_open())
    {
        cerr << "Unable to open Rod file!" << endl;
        return;
    }

    for (unsigned i = 0; i < points.size(); ++i)
    {
        outputFile << points[i] << endl;
    }
}
/**
 * Funkcja sprawdzająca czy nastąpiło zderzenie z cuboidem (dla pozostałych analogiczne)
 * @param drone
 * @return prawda lub fałsz czyli zderzenie lub nie
 */
bool Rod::detectCollision(const Complete_drone &drone) const
{
    double maxX, maxY, maxZ;
    double minX, minY, minZ;
    maxX =-500;
    maxY =-500;
    maxZ = -500;
    minX = 500;
    minY =500;
    minZ = 500;

    for (int i = 0; i < points.size(); i++)
    {
        if(maxX< points[i][0]){
            maxX= points[i][0];
        }
        if(maxY< points[i][1]){
            maxY= points[i][1];
        }
        if(maxZ< points[i][2]){
            maxZ= points[i][2];
        }
        if(minX> points[i][0]){
            minX= points[i][0];
        }
        if(minY> points[i][1]){
            minY= points[i][1];
        }
        if(minZ> points[i][2]){
            minZ= points[i][2];
        }
    }

    double maxXCdrone, maxYCdrone, maxZCdoner;
    double minXCdrone, minYCdrone, minZCdrone;
    maxXCdrone=-500;
    maxYCdrone=-500;
    maxZCdoner=-500;
    minXCdrone=500;
    minYCdrone=500;
    minZCdrone=500;

    for (int i = 0; i < drone.outside.size(); i++)
    {
        double X = drone.outside[i][0];
        double Y = drone.outside[i][1];
        double Z = drone.outside[i][2];

        if(maxXCdrone < X){
            maxXCdrone = X;
        }
        if(maxYCdrone < Y){
            maxYCdrone = Y;
        }
        if(maxZCdoner < Z){
            maxZCdoner = Z;
        }
        if(minXCdrone > X){
            minXCdrone = X;
        }
        if(minYCdrone > Y){
            minYCdrone = Y;
        }
        if(minZCdrone > Z){
            minZCdrone = Z;
        }
    }

    int counter = 0;

    for(int i = minX; i <= maxX; i++)
    {
        if(i <= maxXCdrone && i >= minXCdrone)
        {
            counter++;
            break;
        }
    }

    for(int i = minY; i <= maxY; i++)
    {
        if(i <= maxYCdrone && i >= minYCdrone)
        {
            counter++;
            break;
        }
    }

    for(int i = minZ; i <= maxZ; i++)
    {
        if(i <= maxZCdoner && i >= minZCdrone){
            counter++;
            break;
        }
    }

    if(counter >= 3){
        return 1;
    }else return 0;
}
