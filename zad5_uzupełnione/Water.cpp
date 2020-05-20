//
// Created by kacper on 12.05.2020.
//
#pragma  once

#include "Water.hh"
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>


/**
 * Konstruktor Water
 * otwiera plik do którego ścieżka i nazwa są podane w
 * kModelWater
 * konstruktor jest analogiczny do
 * kontruktora cuboida
 *
 */

Water::Water()
{
    ifstream inputFile;
    inputFile.open(kModelWater);
    if(!inputFile.is_open())
    {
        cerr << "Unable to load model Water file!"
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
 * @param filename - nazwa pliku do którego zapisujemy dane z wody
 *
 *
 */
void Water::draw(string filename)
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
    }
}