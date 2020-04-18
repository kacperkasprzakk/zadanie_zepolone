#pragma once

#include "Size.hh"
#include <iostream>
#include "Vector.hh"

/*
 *  Tutaj trzeba opisac klase. Jakie pojecie modeluje ta klasa
 *  i jakie ma glowne cechy.
 */
/*class Matrix
{
    Vector vec[SIZE];

     //  Tutaj trzeba wstawic definicje odpowiednich pol i metod prywatnych

public:
    friend std::istream &operator>>(std::istream &stream, Matrix &matrix);
    friend std::ostream &operator<<(std::ostream &stream, const Matrix &matrix);
    double determinant();
    double laplace();
    double other_dets(Vector vector, int n);
    Matrix operator =(Matrix& m);
    Vector operator *(Vector v);
    Matrix transpose();
    Matrix hadamard(Matrix m2);

    // *  Tutaj trzeba wstawic definicje odpowiednich metod publicznych

};*/
template <typename T, int SIZE>
class Matrix
{
    T vec[SIZE];
public:
    Matrix();
    T operator()(int i, int j) const;
    T operator()(int i, int j);
    friend std::istream &operator>>(std::istream &stream, Matrix &matrix);
    friend std::ostream &operator<<(std::ostream &stream, const Matrix &matrix);
    Vector<T, SIZE> operator *(Vector<T, SIZE> &arg);
    Matrix<T, SIZE> transpose();
    Matrix<T, SIZE> operator =(Matrix<T, SIZE>& mat);
};
template <typename T, int SIZE>
Matrix<T, SIZE> Matrix<T, SIZE>::operator=(Matrix<T, SIZE> &mat)
{
    for(int i=0; i<SIZE; i++)
    {
        vec(i)=mat(i);
    }
}

template <typename T, int SIZE>
Matrix<T, SIZE> Matrix<T, SIZE>::transpose()
{
    Matrix<T, SIZE> copy;
    for(int i=0; i<SIZE; i++)
    {
        for(int j=0; j<SIZE; j++)
        {
            copy(i,j)=*this(j,i);
        }
    }
    return copy;
}
template <typename T, int SIZE>
Vector<T, SIZE> Matrix<T, SIZE>::operator*(Vector<T, SIZE> &arg)
{
    Vector<double, SIZE> result;
    for(int i=0; i<SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            result[i] =result[i]+vec(i,j)*arg[j];
        }
    }
}
template <typename T, int SIZE>
Matrix<T, SIZE>::Matrix()
{
    for(int i=0; i<SIZE; i++)
    {
        for(int j=0; j<SIZE; j++)
        {
            vec(i,j)=0;
        }
    }
}
template <typename T, int SIZE>
T  Matrix<T, SIZE>::operator()(int i, int j)
{
    if(i<0 || i>SIZE)
    {
        std::cerr<<"POZA ZAKRESEM"<<std::endl;
        return 0;
    }
    else
    {
        return vec(i,j);
    }
}
template <typename T, int SIZE>
T  Matrix<T, SIZE>::operator()(int i, int j) const
{
    if(i<0 || i>SIZE)
    {
        std::cerr<<"POZA ZAKRESEM"<<std::endl;
        return 0;
    }
    else
    {
        return vec(i,j);
    }
}
template <typename T, int SIZE>
std::istream &operator>>(std::istream &stream, Matrix<T,SIZE> &matrix)
{
    for(int i=0; i<SIZE; i++)
    {
        for(int j=0; j<SIZE; j++)
        {
            stream>>T(i,j);
        }
    }
}
template <typename T, int SIZE>
std::istream &operator<<(std::ostream &stream, Matrix<T,SIZE> &matrix)
{
    for(int i=0; i<SIZE; i++)
    {
        for(int j=0; j<SIZE; j++)
        {
            stream<<T(i,j);
        }
    }
}

/*
 * To przeciazenie trzeba opisac. Co ono robi. Jaki format
 * danych akceptuje. Jakie jest znaczenie parametrow itd.
 * Szczegoly dotyczace zalecen realizacji opisow mozna
 * znalezc w pliku:
 *    ~bk/edu/kpo/zalecenia.txt 
 */


/*
 * To przeciazenie trzeba opisac. Co ono robi. Jaki format
 * danych akceptuje. Jakie jest znaczenie parametrow itd.
 * Szczegoly dotyczace zalecen realizacji opisow mozna
 * znalezc w pliku:
 *    ~bk/edu/kpo/zalecenia.txt 
 */
