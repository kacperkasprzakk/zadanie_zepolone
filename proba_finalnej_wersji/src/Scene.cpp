//
// Created by kacper on 16.05.2020.
//

#include "Scene.hh"

Scene::Scene(Bottom b, Water w, Cuboid c)
{
    bot=b;
    wat=w;
    cub=c;
    makeObstacles();
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
    obst[0]->draw(kRodFile);
    obst[1]->draw(kModelRectangle);
    obst[2]->draw(kModelCuboid);
}

void Scene::makeObstacles()
{
    shared_ptr<Rod> rod=make_shared<Rod>();
    shared_ptr<Rectangle> rec=make_shared<Rectangle>();
    shared_ptr<Cuboid> cubod=make_shared<Cuboid>();
}