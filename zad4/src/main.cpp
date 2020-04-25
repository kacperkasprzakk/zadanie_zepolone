#include <iostream>
#include "Vector.hh"
#include "Matrix.hh"
#include "Complex.h"
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
    bool zero;
    int counter=1;
    Vector<Complex, SIZE> b, epsilon, x;
    Matrix<Complex, SIZE> A;
    cin>>A;
    cin>>b;
    A.transpose();
    Complex dets[SIZE+1];
    dets[0]=A.determinant();
    for(int i=1; i<SIZE+1; i++)
    {
        dets[i] = A.other_dets(b, i);
    }
    if(zero(dets[0]))
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
            if(zero(dets[counter]))
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
    cout<<epsilon.length();
    return 0;
}



    return 0;
}

/* INFORMACJE DOTYCZĄCE PROGRAMU
 * Macierz A oraz wektor b odpowiadają macierzy i wektorowi we wzorze z polecenia
 * Nie wykorzystałem pliku systemoflinearequations, nie wykonałem przeciążenia () w macierzy. Podjąłem próbę
 * wykonania rozszerzenia tego zadania tzn. udało mi się ustawić odległości, ale nie wiem jak zrobić | | w odpowiendnim
 * układzie, a chętnie bym zobaczył rozwiązanie tego rozszerzenia :)
 * */