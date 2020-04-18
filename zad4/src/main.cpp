#include <iostream>
#include "Vector.hh"
#include "Matrix.hh"
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
    /*bool zero;
    double main_determinant;
    double dets[SIZE];
    int counter=0;
    Matrix A;
    Vector b, epsilon, x;
    cin>>A;
    cin>>b;
    A.transpose();
    main_determinant=A.determinant();
    for(int i=0; i<SIZE; i++)
    {
        dets[i] = A.other_dets(b, i);
    }
    if(main_determinant)
    {
        for(int i=0; i<SIZE; i++)
        {
            x[i]=dets[i]/main_determinant;
            cout<<"x_"<<i+1<<"="<<x[i]<<endl;
        }
    }

    else
    {
        while(counter<SIZE && zero!=true)
        {
            if(dets[counter]==0)
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
    cout<<epsilon.length(); */
    return 0;
}

/* INFORMACJE DOTYCZĄCE PROGRAMU
 * Macierz A oraz wektor b odpowiadają macierzy i wektorowi we wzorze z polecenia
 * Nie wykorzystałem pliku systemoflinearequations, nie wykonałem przeciążenia () w macierzy. Podjąłem próbę
 * wykonania rozszerzenia tego zadania tzn. udało mi się ustawić odległości, ale nie wiem jak zrobić | | w odpowiendnim
 * układzie, a chętnie bym zobaczył rozwiązanie tego rozszerzenia :)
 * */