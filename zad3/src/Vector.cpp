#include "Vector.hh"
#include <iostream>

using namespace std;
/*
 *  Tutaj nalezy zdefiniowac odpowiednie metody
 *  klasy Vector, ktore zawieraja wiecej kodu
 *  niz dwie linijki.
 *  Mniejsze metody mozna definiwac w ciele klasy.
 */
std::istream &operator>>(std::istream &streamIn, Vector &v)
{
    for(int i=0; i<SIZE; i++) {
        if (streamIn.peek() != '|') {
            streamIn.setstate(ios::failbit);
            return streamIn;
        }
        streamIn.get();
        if (streamIn.peek() != ' ') {
            streamIn.setstate(ios::failbit);
            return streamIn;
        }
        streamIn.get();
        streamIn>>(v.vec[i]);
        if (streamIn.peek() != ' ') {
            streamIn.setstate(ios::failbit);
            return streamIn;
        }
        streamIn.get();
        if (streamIn.peek() != '|') {
            streamIn.setstate(ios::failbit);
            return streamIn;
        }
        streamIn.get();
        streamIn.get();

    }
}

std::ostream &operator << (std::ostream &streamOut, Vector v)
{
    for (int i = 0; i < SIZE; i++)
    {
        streamOut << "| " <<v.vec[i]<<" |";
        streamOut<<endl;
    }
}

Vector operator +(Vector v1, Vector v2)
{
    Vector result;
    for(int i=0; i<SIZE; i++)
    {
        result.vec[i]=v1.vec[i]+v2.vec[i];
    }
    return result;
}

Vector operator -(Vector v1, Vector v2)
{
    Vector result;
    for(int i=0; i<SIZE; i++)
    {
        result.vec[i]=v1.vec[i]-v2.vec[i];
    }
    return result;
}

Vector operator *(Vector v1, Vector v2)
{
    Vector result;
    for(int i=0; i<SIZE; i++)
    {
        result.vec[i]=v1.vec[i]*v2.vec[i];
    }
    return result;
}

Vector operator *(Vector v1, double factor)
{
    Vector result;
    for(int i=0; i<SIZE; i++)
    {
        result.vec[i]=v1.vec[i]*factor;
    }
    return result;
}

Vector operator /(Vector v1, double factor)
{
    Vector result;
    double divider=1/factor;
    result=v1*divider;
    return result;
}
