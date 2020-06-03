#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <chrono>
#include <thread>
#include "gnuplot_link.hh"
#include "Scene.hh"

using namespace std;
using namespace std::this_thread;
using namespace std::chrono;

int main()
{
    bool menu=true;
    char option;
    double distance, angle=0;
    Scene* scene = new Scene; 
    PzG::GnuplotLink link;

    link.Init();
    link.AddFilename(kDroneFile.c_str(), PzG::LS_CONTINUOUS, 1);
    link.Init();
    link.AddFilename(kWaterFile.c_str(), PzG::LS_CONTINUOUS, 1);
    link.Init();
    link.AddFilename(kBottomFile.c_str(), PzG::LS_CONTINUOUS, 1);
    link.Init();
    link.AddFilename(kCuboidFile.c_str(), PzG::LS_CONTINUOUS, 1);
    link.Init();
    link.AddFilename(kModelRod.c_str(), PzG::LS_CONTINUOUS, 1);
    link.Init();
    link.AddFilename(kRectangleFile.c_str(), PzG::LS_CONTINUOUS, 1);
    link.Init();
    link.AddFilename(kLTurbineFile.c_str(), PzG::LS_CONTINUOUS, 1);
    link.Init();
    link.AddFilename(kRTurbineFile.c_str(), PzG::LS_CONTINUOUS, 1);
    link.Init();
    link.SetDrawingMode(PzG::DM_3D);

    scene->draw();

    link.Draw();
    cout << "Naciśnij ENTER, aby kontynuowac" << endl;
    cin.ignore(100000, '\n');

    while(option!='k')
    {
        if (menu)
        {
            cout << endl
                 << "r - zadaj ruch na wprost" << endl
                 << "o - zadaj zmiane orientacji" << endl
                 << "m - wyswietl menu" << endl
                 << endl
                 << "k - koniec dzialania programu" << endl
                 << endl;
            menu=false;
        }
        cout << "Twoj wybor, m - menu> ";
        cin >> option;
        switch (option)
        {
        case 'o':
            cout << "Podaj wartosc kata obrotu w stopniach." << endl;
            cout << "Wartosc kata>";
            cin >> angle;
            while (angle>360)
            {
                angle=angle-360;
            }
            for (int i = 0; i < abs(angle); i++)
            {
                if(angle>0)
                    {scene->rotateDrone(1);}
                else{scene->rotateDrone(-1);}
                scene->drawDrone();
                link.Draw();
                sleep_for(milliseconds(5));
                sleep_until(system_clock::now());
            }
            break;
        case 'r':
                cout << "Podaj wartosc kata (wznoszenia/opadania) w stopniach." << endl;
                cout << "Wartosc kata>";
                cin >> angle;
                cout << endl;
                cout << endl;
                cout << endl;
                cout << "Podaj wartosc odleglosci, na ktora ma sie przemiescic dron." << endl;
                cout << "Wartosc odleglosci>";
                cin >> distance;
            for (int i = 0; i < abs(distance); i++)
            {
                if(distance > 0)
                    {scene->moveDrone(angle, 1);}
                else{scene->moveDrone(angle, -1);}
                if(!scene->dronePosition()&&!scene->detectCollision()){
                    scene->drawDrone();
                    link.Draw();
                    sleep_for(milliseconds(5));
                    sleep_until(system_clock::now());
                } else break;
            }
            break;
        case 'm':
            menu=true;
            break;
        case 'k':
            break;
        default:
            cout << "Nieznany symbol!" << endl;
        }
    }
    return 0;
}
