#include "cuboid.hh"
#include "Matrix.hh"
#include "Rotate_Matrix.hh"
#include <fstream>
#include <iostream>
#include <cmath>

using namespace std;
/**
 * Konstruktor Cuboida
 * otwiera plik do którego ścieżka i nazwa są podane w
 * kModelCuboid
 * konstruktory wszystkich innych klas (Bottom i Water) są odpowiednio przerobionym
 * kontruktorem cuboida
 *
 */
Cuboid::Cuboid()
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
/**
 * wypisywanie do pliku
 *
 * @param filename - nazwa pliku do którego zapisujemy dane z drona
 *
 */
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
         outputFile << points[i]  << endl;
     }
 }

 void Cuboid::detectCollision(const Complete_drone &drone) const
 {

 }
/**
 * Funkcja ta miała obracać naszego drona,
 * niestety z nieznanych mi przyczyn
 * nie funkcjonuje ona jak należy
 * @param angle- kąt o jaki obracamy obiekt
 */

/**
 * Funckja mająca za zadanie przesuwać
 * drona, samo przesuwanie jest oparte
 * o geometrię (niestety nie potrafiłem
 * skonstruować zależności geometrycznej
 * aby na podstawie zadanej długości (wektora)
 * w trójwymiarze i jednego kąta obliczyć
 * przesunięcie w kierunku wszystkich osi,
 * zatem uznałem za zerowe przesunięcie w osi y)
 * Funckja ta opiera się zatem o pewne
 * trygonmetryczne zależności
 *
 *
 * @param distance- długość przesunięcia
 * @param angle- kąt wznoszenia/opadania
 */
/*void Cuboid::move(double distance, double angle)
{
    Vector3D final_point;
        final_point[0]=final_point[0]+distance*cos(angle*PI/180)*cos(angle*PI/180);
        final_point[1]=final_point[1];
        final_point[2]=final_point[2]+distance*sin(angle*PI/180)*sin(angle*PI/180);
    translate(final_point);
}*/
