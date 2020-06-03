#include "Scene.hh"

using namespace std;


Scene::Scene()
{
    drone = new Complete_drone;
    water = new Water;
    bottom = new Bottom;
    makeObstacles();
}
void Scene::draw() const
{
    drone->draw(kDroneFile);
    water->draw(kWaterFile);
    bottom->draw(kBottomFile);
    objects[0]->draw(kModelRod);
    objects[1]->draw(kCuboidFile);
    objects[2]->draw(kRectangleFile);
}
void Scene::makeObstacles()
{
    shared_ptr<Rod> rod = make_shared<Rod>();
    shared_ptr<Cuboid> cuboid = make_shared<Cuboid>();
    shared_ptr<Rectangle> rec = make_shared<Rectangle>();

    objects.push_back(rod);
    objects.push_back(cuboid);
    objects.push_back(rec);
}
bool Scene::detectCollision() const
{
    for(const auto& obstacle : objects){
        if(obstacle->detectCollision(*drone))
        {
            cout << "UWAGA! Prawie uderzono w  "; obstacle->getName();
            cout<<"" <<endl;
            return 1;
        }
    }
    return 0;
}