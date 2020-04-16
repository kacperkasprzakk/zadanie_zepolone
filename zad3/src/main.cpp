#include <iostream>
#include "Vector.hh"
#include "Matrix.hh"
#include "SystemOfLinearEquations.hh"
<<<<<<< HEAD
#include "Size.hh"
=======
<<<<<<< HEAD
#include "Size.hh"
=======
>>>>>>> 9393e5459b0851e2057887e1c8f50ffd301267de
>>>>>>> 0727b52ad5c697a5c975fe30f2c0a0869c823620

using namespace std;

/*
 * Tu definiujemy pozostale funkcje.
 * Lepiej jednak stworzyc dodatkowy modul
 * i tam je umiescic. Ten przyklad pokazuje
 * jedynie absolutne minimum.
 */

int main()
{
<<<<<<< HEAD
=======
<<<<<<< HEAD
>>>>>>> 0727b52ad5c697a5c975fe30f2c0a0869c823620
    bool zero;
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
    cout<<epsilon.length();
    return 0;
}

/* INFORMACJE DOTYCZĄCE PROGRAMU
 * Macierz A oraz wektor b odpowiadają macierzy i wektorowi we wzorze z polecenia
 * Nie wykorzystałem pliku systemoflinearequations, nie wykonałem przeciążenia () w macierzy. Podjąłem próbę
 * wykonania rozszerzenia tego zadania tzn. udało mi się ustawić odległości, ale nie wiem jak zrobić | | w odpowiendnim
 * układzie, a chętnie bym zobaczył rozwiązanie tego rozszerzenia :)
<<<<<<< HEAD
 * */
=======
 * */
=======
    Vector v1, v2;
    cin>>v1;
    cin>>v2;
    cout<<(v1+v2);
    SystemOfLinearEquations system; // To tylko przykladowe definicje zmiennej

    cout << endl
         << " Start programu " << endl
         << endl;
}
>>>>>>> 9393e5459b0851e2057887e1c8f50ffd301267de
>>>>>>> 0727b52ad5c697a5c975fe30f2c0a0869c823620
