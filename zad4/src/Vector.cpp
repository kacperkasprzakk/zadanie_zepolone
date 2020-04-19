#include "Vector.hh"
#include "Vector.hh"
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
/*
 *  Tutaj nalezy zdefiniowac odpowiednie metody
 *  klasy Vector, ktore zawieraja wiecej kodu
 *  niz dwie linijki.
 *
 *Mniejsze metody mozna definiwac w ciele klasy.
 */


/*#include "Vector.hh"
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;



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

Vector Vector::operator+(Vector&  v)
{
    Vector result;
    for(int i=0; i<SIZE; i++)
    {
        result[i]=data[i]+v.data[i];
    }
    return result;
}
Vector Vector::operator-(Vector & v)
{
    Vector result;
    for(int i=0; i<SIZE; i++)
    {
        result[i]=data[i]-v.data[i];
    }
    return result;
}
double Vector::operator*(Vector & v)
{
    double result=0;
    for(int i=0; i<SIZE; i++)
    {
        result=result+(data[i]*v.data[i]);
    }
    return result;
}
Vector Vector::operator*(double& factor)
{
    Vector result;
    for(int i=0; i<SIZE; i++)
    {
        result[i]=data[i]*factor;
    }
    return result;
}
Vector Vector::operator/(double& divider)
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
        stream<<setw(5);
        stream<<vec.data[i]<<" ";
    }
    cout<<endl;
}
double Vector::length()
{
    double result;
    result=sqrt(data[0]*data[0]+data[1]*data[1]+data[2]*data[2]);
    return result;
}
*/