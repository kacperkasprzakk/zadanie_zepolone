#include "Scene.hh"

using namespace std;

/**
 * Konstruktor Sceny,
 * Utworzone są obiekty (wskaźniki konkrtnego typu) oraz wywołana funkcja makeObstacles, dzięki której pojawia się przeszkody.
 *
 */
Scene::Scene()
{
    drone = new Complete_drone;
    water = new Water;
    bottom = new Bottom;
    makeObstacles();
}
/**
 * Wywołanie zapisu danych z wszystkich obiektów do właściwych plików za pomocom właściwych metod
 */
void Scene::draw() const
{
    drone->draw(kDroneFile);
    water->draw(kWaterFile);
    bottom->draw(kBottomFile);
    objects[0]->draw(kModelRod);
    objects[1]->draw(kCuboidFile);
    objects[2]->draw(kRectangleFile);
}
/**
 * Funkcja tworząca przeszkody wraz z wektorem shared_pointerów
 */
void Scene::makeObstacles()
{
    shared_ptr<Rod> rod = make_shared<Rod>();
    shared_ptr<Cuboid> cuboid = make_shared<Cuboid>();
    shared_ptr<Rectangle> rec = make_shared<Rectangle>();

    objects.push_back(rod);
    objects.push_back(cuboid);
    objects.push_back(rec);
}
/**
 * Sprawdzenie czy dron zderzył się z czymkolwiek. Wywołanie funkcji odbywa się w każdej klatce animacji.
 * Funkcja podaje nazwę obiektu
 * @return prawda lub fałsz czyli zderzenie lub nie
 */
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