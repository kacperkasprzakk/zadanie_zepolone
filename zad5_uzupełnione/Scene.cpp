//
// Created by kacper on 16.05.2020.
//

#include "Scene.hh"

Scene::Scene(Bottom b, Water w, Cuboid c)
{
    bot=b;
    wat=w;
    cub=c;
}
 void Scene::draw(string filename)
{
    ofstream outputFile;
    outputFile.open(filename);
    if(!outputFile.is_open())
    {
        cerr << "Unable to open drone file!" << endl;
        return;
    }
    bot.draw(kModelBottom);
    wat.draw(kModelWater);
    cub.draw(kModelCuboid);
}