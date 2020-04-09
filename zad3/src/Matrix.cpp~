#include "Matrix.hh"
#include <iostream>
using namespace std;
/*
 *  Tutaj nalezy zdefiniowac odpowiednie metody
 *  klasy Matrix, ktore zawieraja wiecej kodu
 *  niz dwie linijki.
 *  Mniejsze metody mozna definiwac w ciele klasy.
 */

std::istream &operator>>(std::istream &streamIn, Matrix &matrix)
{
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++)
        {
            if(streamIn.peek()!='|')
            {
                streamIn.setstate(ios::failbit);
                return streamIn;
            }
            streamIn.get();
            if(streamIn.peek()!=' ')
            {
                streamIn.setstate(ios::failbit);
                return streamIn;
            }
            streamIn.get();
            for (int i = 0; i < SIZE; i++)
            {
                streamIn>>(matrix.mat[i][j]);
                if(streamIn.peek()!=' ')
                {
                    streamIn.setstate(ios::failbit);
                    return streamIn;
                }
                streamIn.get();

            }
            if(streamIn.peek()!='|')
            {
                streamIn.setstate(ios::failbit);
                return streamIn;
            }
            streamIn.get();
            streamIn.get();

        }
    }
}

std::ostream &operator<<(std::ostream &streamOut, Matrix matrix)
{
    for (int i = 0; i <SIZE ; i++)
    {
        streamOut << "| ";
        for(int j=0; j<SIZE; j++)
        {
            streamOut<<matrix.mat[i][j]<<' ';
        }
        streamOut<<'|'<<endl;
    }
}