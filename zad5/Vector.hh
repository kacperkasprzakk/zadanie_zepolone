#pragma once

#include "Size.hh"
#include "Complex.h"
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
/** szablon klasy wraz z metodami (szablonami) przyjmujący typ zmiennych i rozmiar SIZE **/
template <typename T, int SIZE>
class Vector
{
    T data[SIZE]={0}; /** Vector jako SIZE zmiennych typu T **/
public:
    Vector() {for(T &type: data) type = 0;}
    Vector<T, SIZE> operator =(Vector<T, SIZE> arg);
    T operator[](int i) const;
    T &operator[](int i);
    friend std::istream &operator>>(std::istream &stream, Vector<T,SIZE>& vec)
    {
        for(int i=0; i<SIZE; i++)
        {
            stream>>vec[i];
        }
        return  stream;
    }
    friend std::ostream &operator<<(std::ostream &stream, const Vector<T,SIZE>& vec)
    {
        for(int i=0; i<SIZE; i++)
        {
            stream<<std::setw(5);
            stream<<vec[i];
        }
        std::cout<<std::endl;
        return stream;
    }
    Vector<T, SIZE> operator +(Vector<T, SIZE> arg);
    Vector<T, SIZE> operator +(Vector<T, SIZE> arg) const;
    Vector<T, SIZE> operator -(Vector<T, SIZE> arg);
    Vector<T, SIZE> operator *(T factor);
    double operator *(Vector<T,SIZE>& v);
    Vector<T, SIZE> operator /(T divider);

};


using Vector3D = Vector<double,3>;
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

/** Liczenie długości wektora **/

template <typename T, int SIZE>
/** Przeciążenie operatora / wektora i liczby, zwracający wektor **/
Vector<T, SIZE> Vector<T,SIZE>::operator*(T factor)
{
    Vector<T, SIZE> result;
    for(int i=0; i<SIZE; i++)
    {
        result[i]=data[i]*factor;
    }
    return  result;
}
template <typename T, int SIZE>
/** Przeciążenie operatora = wektora i wektora, zwracający wektor **/
Vector<T, SIZE> Vector<T,SIZE>::operator=(Vector<T, SIZE> arg)
{
    for(int i=0; i<SIZE; i++)
    {
        data[i]=arg.data[i];
    }
}

template <typename T, int SIZE>
/** Przeciążenie operatora / wektora i liczby, zwracający wektor **/
Vector<T, SIZE> Vector<T,SIZE>::operator/(T divider)
{
    Vector<T, SIZE> result;
    for(int i=0; i<SIZE; i++)
    {
        result[i]=data[i]/divider;
    }
    return  result;
}

template <typename T, int SIZE>
/** Przeciążenie operatora / wektora i wektora, zwracający wektor **/
Vector<T,SIZE> Vector<T, SIZE>::operator-(Vector<T, SIZE> arg)
{
    Vector<T, SIZE> result;
    for(int i=0; i<SIZE; i++)
    {
        result[i]=data[i]-arg[i];
    }
    return  result;
}
template <typename T, int SIZE>
Vector<T,SIZE> Vector<T, SIZE>::operator+( Vector<T, SIZE> arg)
{
    Vector<double, SIZE> result;
    for(int i=0; i<SIZE; i++)
    {
        result[i]=data[i]+arg[i];
    }
    return  result;
}
template <typename T, int SIZE>
Vector<T,SIZE> Vector<T, SIZE>::operator+( Vector<T, SIZE> arg) const
{
    Vector<double, SIZE> result;
    for(int i=0; i<SIZE; i++)
    {
        result[i]=data[i]+arg[i];
    }
    return  result;
}
/*
template <typename T, int SIZE>
Vector<T, SIZE>::Vector()
{
    for(int i=0; i<SIZE; i++)
    {
        data[i]=0;
    }
} */
template <typename T, int SIZE>
/** Przeciążenie operatora [] wektora stałego  zwracający wektor **/
T  Vector<T, SIZE>::operator[](int i) const
{
    if(i<0 || i>SIZE)
    {
        std::cerr<<"POZA ZAKRESEM"<<std::endl;
    }
    else
    {
        return data[i];
    }
}
template <typename T, int SIZE>
/** Przeciążenie operatora [] wektora   zwracający wektor **/
T  &Vector<T, SIZE>::operator[](int i)
{
    if(i<0 || i>SIZE)
    {
        std::cerr<<"POZA ZAKRESEM"<<std::endl;
    }
    else
    {
        return data[i];
    }
}

/*template <typename T, int SIZE>
std::istream Vector<T,SIZE>::operator>>(std::istream &stream)
{

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
} */
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
