#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <thread>         
#include <chrono>        
#include <ctime>     

#include "gnuplot_link.hh"
#include "cuboid.hh"
#include "Bottom.hh"
#include "Water.hh"
#include "Shape.hh"
#include "Size.hh"
#include "Vector.hh"
#include "Matrix.hh"

using namespace std;

const string kDroneFile("solid/drone.dat");
const string kWaterFile("solid/Water_done.dat");
const string kBottomFile("solid/Bottom_done.dat");

int main()
{
    /**
     * deklaracje zmiennych
     */
    Cuboid cuboid;
    Water water;
    Bottom bottom;
    char choice='0';
    double angle, distance, distance_100;
    bool menu=true;
    PzG::GnuplotLink link;
    using namespace std::this_thread;
    using namespace std::chrono;      
    link.Init();
    link.AddFilename(kDroneFile.c_str(), PzG::LS_CONTINUOUS, 1);
    link.SetDrawingMode(PzG::DM_3D);
    link.Init();
    link.AddFilename(kWaterFile.c_str(), PzG::LS_CONTINUOUS, 1);
    link.SetDrawingMode(PzG::DM_3D);
    link.Init();
    link.AddFilename(kBottomFile.c_str(), PzG::LS_CONTINUOUS, 1);
    link.SetDrawingMode(PzG::DM_3D);

    cuboid.draw(kDroneFile);
    water.draw(kWaterFile);
    bottom.draw(kBottomFile);


    link.Draw();
    cout << "Naciśnij ENTER, aby kontynuowac" << endl;
    cin.ignore(100000, '\n');


    /*Vector3D translation;
    translation[0] = 50;
    translation[1] = 50;
    translation[2] = 50;

    cuboid.translate(translation);
    cuboid.draw(kDroneFile);
    water.draw(kWaterFile);


    link.Draw();
    cout << "Naciśnij ENTER, aby kontynuowac" << endl;
    cin.ignore(100000, '\n'); */
    /**
     * zasadnicza częśc programu, w której
     * dzieje się wszystko co najważniejsze
     * użyłem pętli while do wyboru opcje jak w pliku
     * dra Kreczmera
     * 
     */
    while (choice!='k') {
        if (menu) {
            cout << "r - zadaj ruch na wprost" << endl;
            cout << "o - zadaj zmiane orientacji" << endl;
            cout << "m - wyswietl menu" << endl;
            cout << endl;
            cout << "k - koniec dzialania programu" << endl;
            menu = false;
        }
        cout << "Twoj wybor, m - menu>";
        cin >> choice;
        switch (choice) {
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
                distance_100=distance/100;
                for(int i=0; i<distance; ++i)
                {
                    /*cuboid.move(1, angle);
                    cuboid.draw(kDroneFile);
                    link.Draw();
                    sleep_for(milliseconds(5));
                    sleep_until(system_clock::now());*/
                }

                cout << endl;
                cout << endl;
                cout << endl;
                break;
            case 'o':
                cout << "Podaj wartosc kata obrotu w stopniach." << endl;
                cout << "Wartosc kata>";
                cin >> angle;
                //cuboid.rotate(angle);
                cuboid.draw(kDroneFile);
                link.Draw();
                break;
            case 'm':
                menu = true;
                break;
            case 'k':
                cout<<"Koniec programu";
                break;
            default:
                cout << "Nieznany symbol!" << endl;
                break;
        }
    }
    return 0;
}
