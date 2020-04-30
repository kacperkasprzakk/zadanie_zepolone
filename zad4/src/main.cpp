#include <iostream>
#include "Vector.hh"
#include "Matrix.hh"
#include "Complex.h"
#include  <cmath>
#include "SystemOfLinearEquations.hh"
#include "Size.hh"

using namespace std;

/*
 * Tu definiujemy pozostale funkcje.
 * Lepiej jednak stworzyc dodatkowy modul
 * i tam je umiescic. Ten przyklad pokazuje
 * jedynie absolutne minimum.
 */

int main()
{
    /***** MODYFIKACJA *****/
    /** Complex number;
    cin>>number;
    Matrix<double, 2> wlasnosc4;
    cin>>wlasnosc4;
    if(abs(wlasnosc4.determinant()-sqrt(number)*sqrt(number))<0.0001)
        cout<<"OK!";
    else
    {
        cout<<"NIE!";
    } **/ //sprawdzona dla (3+4i) i działa :)

    /** Tworzenie zmiennych **/
    bool zero;
    int counter=1;
    Vector<Complex, SIZE> b;
    Vector<Complex, SIZE> epsilon;
    Vector<Complex, SIZE> x;
    Matrix<Complex, SIZE> A;
    Complex dets[SIZE+1];
    cin>>A;
    //cin>>b;
    A.transpose();
    cout<<A<<endl;
    dets[0]=A.determinant();
    cout<<dets[0];
    for(int i=1; i<SIZE+1; i++)
    {
        dets[i] = A.other_dets(b, i);
    }
    if(sqrt(dets[0]))
    {
        for(int i=1; i<SIZE+1; i++)
        {
            x[i]=dets[i]/dets[0];
            cout<<"x_"<<i+1<<"="<<x[i]<<endl;
        }
    }
    else
    {
        while(counter<SIZE+1 && zero!=true)
        {
            if(sqrt(dets[counter]))
            {
                zero=true;
            }
            counter++;
        }
        if(zero)
        {
            cout<<"Infinity number of solutions";
        }
        else
        {
            cout<<"Contradiction";
        }
    }
    epsilon=A*x-b;
    return 0;
    }

/* INFORMACJE DOTYCZĄCE PROGRAMU
 * Macierz A oraz wektor b odpowiadają macierzy i wektorowi we wzorze z polecenia
 * Nie wykorzystałem pliku systemoflinearequations, nie wykonałem przeciążenia () w macierzy. Podjąłem próbę
 * wykonania rozszerzenia tego zadania tzn. udało mi się ustawić odległości, ale nie wiem jak zrobić | | w odpowiendnim
 * układzie, a chętnie bym zobaczył rozwiązanie tego rozszerzenia :)
 * */