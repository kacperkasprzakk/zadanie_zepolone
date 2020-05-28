//
// Created by kacper on 12.05.2020.
//

#include "Bottom.hh"
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

/**
 * Konstruktor Bottom
 * otwiera plik do którego ścieżka i nazwa są podane w
 * kModelBottom
 * konstruktor jest analogiczny do
 * kontruktora cuboida
 *
 */
Bottom::Bottom()
{
    ifstream inputFile;
    inputFile.open(kModelBottom);
    if(!inputFile.is_open())
    {
        cerr << "Unable to load model Bottom file!"
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
 * wypisywanie do pliku, analogicznie do cuboida
 *
 * @param filename - nazwa pliku do którego zapisujemy dane z dna
 *
 *
 */
void Bottom::draw(string filename) const
{
    ofstream outputFile;
    outputFile.open(filename);
    if(!outputFile.is_open())
    {
        cerr << "Unable to open Bottom file!" << endl;
        return;
    }
    for(unsigned i = 0; i < points.size(); ++i)
    {
        outputFile << points[i]<< endl;
    }
}
