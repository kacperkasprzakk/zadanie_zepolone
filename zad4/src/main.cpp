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
    Complex a,b;
    cin>>a;
    cin>>b;
    a+b;
    /*Matrix<Complex, SIZE> mat;
    cin>>mat;
    cout<<mat.determinant(); */
    return 0;
}

/* INFORMACJE DOTYCZĄCE PROGRAMU
 * Macierz A oraz wektor b odpowiadają macierzy i wektorowi we wzorze z polecenia
 * Nie wykorzystałem pliku systemoflinearequations, nie wykonałem przeciążenia () w macierzy. Podjąłem próbę
 * wykonania rozszerzenia tego zadania tzn. udało mi się ustawić odległości, ale nie wiem jak zrobić | | w odpowiendnim
 * układzie, a chętnie bym zobaczył rozwiązanie tego rozszerzenia :)
 * */