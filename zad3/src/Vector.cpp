#include "Vector.hh"
#include <iostream>
<<<<<<< HEAD
#include <iomanip>
#include <cmath>
=======
<<<<<<< HEAD
#include <iomanip>
#include <cmath>
=======
>>>>>>> 9393e5459b0851e2057887e1c8f50ffd301267de
>>>>>>> 0727b52ad5c697a5c975fe30f2c0a0869c823620
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

<<<<<<< HEAD
Vector Vector::operator+(Vector&  v)
=======
<<<<<<< HEAD
Vector Vector::operator+(Vector&  v)
=======
inline Vector Vector::operator+(Vector&  v)
>>>>>>> 9393e5459b0851e2057887e1c8f50ffd301267de
>>>>>>> 0727b52ad5c697a5c975fe30f2c0a0869c823620
{
    Vector result;
    for(int i=0; i<SIZE; i++)
    {
        result[i]=data[i]+v.data[i];
    }
    return result;
}
<<<<<<< HEAD
Vector Vector::operator-(Vector & v)
=======
<<<<<<< HEAD
Vector Vector::operator-(Vector & v)
=======
inline Vector Vector::operator-(Vector & v)
>>>>>>> 9393e5459b0851e2057887e1c8f50ffd301267de
>>>>>>> 0727b52ad5c697a5c975fe30f2c0a0869c823620
{
    Vector result;
    for(int i=0; i<SIZE; i++)
    {
        result[i]=data[i]-v.data[i];
    }
    return result;
}
<<<<<<< HEAD
double Vector::operator*(Vector & v)
=======
<<<<<<< HEAD
double Vector::operator*(Vector & v)
=======
inline double Vector::operator*(Vector & v)
>>>>>>> 9393e5459b0851e2057887e1c8f50ffd301267de
>>>>>>> 0727b52ad5c697a5c975fe30f2c0a0869c823620
{
    double result=0;
    for(int i=0; i<SIZE; i++)
    {
        result=result+(data[i]*v.data[i]);
    }
    return result;
}
<<<<<<< HEAD
Vector Vector::operator*(double& factor)
=======
<<<<<<< HEAD
Vector Vector::operator*(double& factor)
=======
inline Vector Vector::operator*(double& factor)
>>>>>>> 9393e5459b0851e2057887e1c8f50ffd301267de
>>>>>>> 0727b52ad5c697a5c975fe30f2c0a0869c823620
{
    Vector result;
    for(int i=0; i<SIZE; i++)
    {
        result[i]=data[i]*factor;
    }
    return result;
}
<<<<<<< HEAD
Vector Vector::operator/(double& divider)
=======
<<<<<<< HEAD
Vector Vector::operator/(double& divider)
=======
inline Vector Vector::operator/(double& divider)
>>>>>>> 9393e5459b0851e2057887e1c8f50ffd301267de
>>>>>>> 0727b52ad5c697a5c975fe30f2c0a0869c823620
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
<<<<<<< HEAD
=======
<<<<<<< HEAD
>>>>>>> 0727b52ad5c697a5c975fe30f2c0a0869c823620
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
<<<<<<< HEAD
=======
=======
        stream<<vec.data[i]<<endl;
    }

>>>>>>> 9393e5459b0851e2057887e1c8f50ffd301267de
>>>>>>> 0727b52ad5c697a5c975fe30f2c0a0869c823620
}
