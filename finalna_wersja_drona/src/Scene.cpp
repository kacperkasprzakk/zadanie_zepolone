//
// Created by kacper on 16.05.2020.
//

#include "Scene.hh"

Scene::Scene()
{

    makeObstacles();
}
 void Scene::draw(string filename) const
{
    ofstream outputFile;
    outputFile.open(filename);
    if(!outputFile.is_open())
    {
        cerr << "Unable to open drone file!" << endl;
        return;
    }

}

void Scene::makeObstacles()
{
    shared_ptr<Rod> rod=make_shared<Rod>();
    shared_ptr<Rectangle> rec=make_shared<Rectangle>();
    shared_ptr<Cuboid> cubod=make_shared<Cuboid>();
}
void Scene::detectCollision() const
{

}