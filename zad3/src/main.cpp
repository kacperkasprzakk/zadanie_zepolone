#include <iostream>
#include "Vector.hh"
#include "Matrix.hh"
#include "SystemOfLinearEquations.hh"

using namespace std;

/*
 * Tu definiujemy pozostale funkcje.
 * Lepiej jednak stworzyc dodatkowy modul
 * i tam je umiescic. Ten przyklad pokazuje
 * jedynie absolutne minimum.
 */

int main()
{
    Vector v1, v2;
    cin>>v1;
    cin>>v2;
    cout<<(v1+v2);
    SystemOfLinearEquations system; // To tylko przykladowe definicje zmiennej

    cout << endl
         << " Start programu " << endl
         << endl;
}
