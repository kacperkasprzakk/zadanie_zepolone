#pragma once

#include "Size.hh"
#include <iostream>
#include <iomanip>
#include <cmath>

/*
 *  *  Tutaj trzeba opisac klase. Jakie pojecie modeluje ta klasa
 *  i jakie ma glowne cechy.

class Vector
{
    double data[SIZE];
public:
    const double &operator [] (int index) const;
    double &operator [] (int index);
    Vector operator +(Vector& v);
    Vector operator -(Vector& v);
    double operator *(Vector& v); //! DOROBIĆ
    Vector operator *(double& factor);
    Vector operator /(double& divider);
    friend std::istream &operator>>(std::istream &stream, Vector &vec);
    friend std::ostream &operator<<(std::ostream &stream, const Vector &vec);
    double length();
    /*
     *  Tutaj trzeba wstawic definicje odpowiednich metod publicznych
 *
 *  Tutaj trzeba opisac klase. Jakie pojecie modeluje ta klasa
 *  i jakie ma glowne cechy.
 */
template <typename T, int SIZE>
class Vector
{
    T data[SIZE];
public:
    Vector();
    Vector<T, SIZE> operator +(const Vector<T, SIZE> &arg) const;
    T operator[](int i) const;
    T operator[](int i);
    std::istream &operator>>(std::istream &stream);
    std::ostream &operator<<(std::ostream &stream);
    Vector<T, SIZE> operator +(Vector<T, SIZE> &arg);
    Vector<T, SIZE> operator -(Vector<T, SIZE> &arg);
    Vector<T, SIZE> operator *(double factor);
    double operator *(Vector<T,SIZE>& v);
    Vector<T, SIZE> operator /(double divider);
    double length();
};
template <typename T, int SIZE>
double Vector<T, SIZE>::operator*(Vector<T, SIZE> &v)
{
    double result=0;
    for(int i=0; i<SIZE; i++)
    {
        result=result+(data[i]*v[i]);
    }
    return result;
}
template <typename T, int SIZE>
double Vector<T, SIZE>::length()
{
    double result=0;
    for(int i=0; i<SIZE; i++)
    {
        result=result+data[i]*data[i];
    }
    return   sqrt(result);
}
template <typename T, int SIZE>
Vector<T, SIZE> Vector<T,SIZE>::operator*(double factor)
{
    Vector<double, SIZE> result;
    for(int i=0; i<SIZE; i++)
    {
        result[i]=data[i]*factor;
    }
    return  result;
}
template <typename T, int SIZE>
Vector<T, SIZE> Vector<T,SIZE>::operator/(double divider)
{
    Vector<T, SIZE> result;
    for(int i=0; i<SIZE; i++)
    {
        result[i]=data[i]/divider;
    }
    return  result;
}

template <typename T, int SIZE>
Vector<T,SIZE> Vector<T, SIZE>::operator-(Vector<T, SIZE> &arg)
{
    Vector<T, SIZE> result;
    for(int i=0; i<SIZE; i++)
    {
        result[i]=data[i]-arg[i];
    }
    return  result;
}
template <typename T, int SIZE>
Vector<T,SIZE> Vector<T, SIZE>::operator+(Vector<T, SIZE> &arg)
{
    Vector<double, SIZE> result;
    for(int i=0; i<SIZE; i++)
    {
        result[i]=data[i]+arg[i];
    }
    return  result;
}


template <typename T, int SIZE>
Vector<T, SIZE>::Vector()
{
    for(int i=0; i<SIZE; i++)
    {
        data[i]=0;
    }
}
template <typename T, int SIZE>
T  Vector<T, SIZE>::operator[](int i) const
{
    if(i<0 || i>SIZE)
    {
        std::cerr<<"POZA ZAKRESEM"<<std::endl;
        return 0;
    }
    else
    {
        return data[i];
    }
}
template <typename T, int SIZE>
T  Vector<T, SIZE>::operator[](int i)
{
    if(i<0 || i>SIZE)
    {
        std::cerr<<"POZA ZAKRESEM"<<std::endl;
        return 0;
    }
    else
    {
        return &data[i];
    }
}

template <typename T, int SIZE>
std::istream Vector<T,SIZE>::operator>>(std::istream &stream)
{
    for(int i=0; i<SIZE; i++)
    {
        stream>>data[i];
    }
}
template <typename T, int SIZE>
std::ostream Vector<T, SIZE>::operator<<(std::ostream &stream)
{
    for(int i=0; i<SIZE; i++)
    {
        stream<<std::setw(5);
        stream<<data[i];
    }
    std::cout<<std::endl;
}
/*
 * To przeciazenie trzeba opisac. Co ono robi. Jaki format
 * danych akceptuje. Jakie jest znaczenie parametrow itd.
 * Szczegoly dotyczace zalecen realizacji opisow mozna
 * znalezc w pliku:
 *    ~bk/edu/kpo/zalecenia.txt
 */
//std::istream &operator>>(std::istream &stream, Vector &vec);

/*
 * To przeciazenie trzeba opisac. Co ono robi. Jaki format
 * danych akceptuje. Jakie jest znaczenie parametrow itd.
 * Szczegoly dotyczace zalecen realizacji opisow mozna
 * znalezc w pliku:
 *    ~bk/edu/kpo/zalecenia.txt
 */
//std::ostream &operator<<(std::ostream &stream, const Vector &vec);