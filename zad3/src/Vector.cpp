#include "Vector.hh"
#include <iostream>
using namespace std;
/*
 *  Tutaj nalezy zdefiniowac odpowiednie metody
 *  klasy Vector, ktore zawieraja wiecej kodu
 *  niz dwie linijki.
 *
 *Mniejsze metody mozna definiwac w ciele klasy.
 */


const double &Vector::operator[](int index) const
{
    if(index<0 || index>=SIZE)
    {
        cerr<<"Out of range!"<<endl;
        return 0;
    }
    return data[index];
}
double &Vector::operator[](int index)
{
    return const_cast <double &>(const_cast<const Vector *>(this)->operator[](index));
}

inline Vector Vector::operator+(Vector&  v)
{
    Vector result;
    for(int i=0; i<SIZE; i++)
    {
        result[i]=data[i]+v.data[i];
    }
    return result;
}
inline Vector Vector::operator-(Vector & v)
{
    Vector result;
    for(int i=0; i<SIZE; i++)
    {
        result[i]=data[i]-v.data[i];
    }
    return result;
}
inline double Vector::operator*(Vector & v)
{
    double result=0;
    for(int i=0; i<SIZE; i++)
    {
        result=result+(data[i]*v.data[i]);
    }
    return result;
}
inline Vector Vector::operator*(double& factor)
{
    Vector result;
    for(int i=0; i<SIZE; i++)
    {
        result[i]=data[i]*factor;
    }
    return result;
}
inline Vector Vector::operator/(double& divider)
{
    Vector result;
    for(int i=0; i<SIZE; i++)
    {
        result[i]=data[i]/divider;
    }
    return result;
}
std::istream &operator>>(std::istream &stream, Vector &vec)
{
    for(int i=0; i<SIZE; i++)
    {
        stream>>vec.data[i];
    }
}
std::ostream &operator<<(std::ostream &stream, const Vector &vec)
{
    for(int i=0; i<SIZE; i++)
    {
        stream<<vec.data[i]<<endl;
    }

}
