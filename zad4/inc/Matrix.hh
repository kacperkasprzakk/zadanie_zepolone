#pragma once

#include "Size.hh"
#include "Complex.h"
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
    Vector<T, SIZE> vec[SIZE];
public:
    //Matrix();
    T operator()(int i, int j) const;
    T operator()(int i, int j);
    friend std::istream &operator>>(std::istream &stream, Matrix<T,SIZE>& mat)
    {
        for(int i=0; i<SIZE; i++)
        {
            for(int j=0; j<SIZE; j++)
            {
                stream>>mat.vec[i][j];
            }
        }
        return stream;
    }
    friend std::ostream &operator<<(std::ostream &stream, const Matrix<T,SIZE>& mat)
    {
        for(int i=0; i<SIZE; i++)
        {
            for(int j=0; j<SIZE; j++)
            {
                stream<<mat.vec[i][j];
            }
        }
        return  stream;
    }
    Vector<T, SIZE> operator *(Vector<T, SIZE> &arg);
    Matrix<T, SIZE> transpose();
    T determinant();
    Matrix<T, SIZE> operator =(Matrix<T, SIZE>& mat);
};
template <typename T, int SIZE>
T Matrix<T, SIZE>::determinant()
{
    bool changed= false;
    Matrix<T, SIZE> copy=*this;
    T result=1;
    T ratio;
    int column=0;
    for(int i=0; i<SIZE; i++)
    {
        if(column==i)
        {
            for(int j=column; j<SIZE-1; j++)
            {
                if(copy.vec[column][column]==0 && column+1<SIZE)
                {
                    Vector<T, SIZE> temporary=copy.vec[column];
                    copy.vec[column]=copy.vec[column+1];
                    copy.vec[column+1]=temporary;
                    changed=!changed;
                }
                ratio = copy.vec[j + 1][column] / copy.vec[column][column];
                auto tmp = copy.vec[column] * ratio;
                copy.vec[j + 1] = (copy.vec[j + 1]) - tmp;
            }
            column++;
        }
    }
    for(int i=0; i<SIZE; i++)
    {
        result=result*copy.vec[i][i];
    }
    if(changed==true)
    {
        result=result*(-1);
    }
    return  result;

}
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
}/*
template <typename T, int SIZE>
Matrix<T, SIZE>::Matrix()
{
    for(int i=0; i<SIZE; i++)
    {
        for(int j=0; j<SIZE; j++)
        {
            vec[i][j]=0;
        }
    }
}*/
template <typename T, int SIZE>
T  Matrix<T, SIZE>::operator()(int i, int j)
{
    if(i<0 || i>SIZE || j<0 || j>SIZE)
    {
        std::cerr<<"POZA ZAKRESEM"<<std::endl;
        return 0;
    }
    else
    {
        return &vec[i][j];
    }
}
template <typename T, int SIZE>
T  Matrix<T, SIZE>::operator()(int i, int j) const
{
    if(i<0 || i>SIZE || j<0 || j>SIZE)
    {
        std::cerr<<"POZA ZAKRESEM"<<std::endl;
        return 0;
    }
    else
    {
        return vec[i][j];
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
