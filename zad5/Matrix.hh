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
template <typename T, int SIZE> /** szablon klasy wraz z metodami (szablonami) przyjmujący typ zmiennych i rozmiar SIZE **/
class Matrix
{
protected:
    Vector<T, SIZE> vec[SIZE]; /** Macierz jako SIZE wektorów **/
public:
    //Matrix();
    T other_dets(Vector<T,SIZE> vector, int n);
    T operator()(int i, int j) const;
    T &operator()(int i, int j);
    friend std::istream &operator>>(std::istream &stream, Matrix<T,SIZE>& mat)
    {
        for(int i=0; i<SIZE; i++)
        {
            stream>>mat.vec[i];
        }
        return stream;
    }
    friend std::ostream &operator<<(std::ostream &stream, const Matrix<T,SIZE>& mat)
    {
        for(int i=0; i<SIZE; i++)
        {
                stream<<mat.vec[i];
        }
        return  stream;
    }
    Vector<T, SIZE> operator *(Vector<T, SIZE> &arg);
    Matrix<T, SIZE> transpose();
    T determinant();
    Matrix<T, SIZE> operator =(Matrix<T, SIZE>& mat);
};
template <typename T, int SIZE>
/** Do policzenia pozostałych wyznaczników w metodzie Cramera **/
T Matrix<T,SIZE>::other_dets(Vector<T, SIZE> vector, int n)
{
    T  result;
    if(n>=SIZE)
    {
        cerr<<"OUT OF RANGE IN OTHER_DETERMINANTS FUNCTION";
    }
    Matrix copy;
    copy=*this;
    copy.vec[n]=vector;
    result=copy.determinant();
    return result;
}
template <typename T, int SIZE>
/** Funkcja licząca wyznacznik zwracająca typ T, jest z nią jakiś problem, którego nie umiem określić, za argument macierz **/
T Matrix<T, SIZE>::determinant()
{
    bool changed= false;
    Matrix<T, SIZE> copy=*this;
    double starting=1;
    T result;
    T ratio;
    int column=0;
    for(int i=0; i<SIZE; i++)
    {
        if(column==i)
        {
            for(int j=column; j<SIZE-1; j++)
            {
                if(sqrt(copy.vec[column][column])==0 && column+1<SIZE)
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
    result=copy.vec[0][0]*starting;
    for(int i=1; i<SIZE; i++)
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
/** Przeciążenie = dla dwóch macierzy **/
Matrix<T, SIZE> Matrix<T, SIZE>::operator=(Matrix<T, SIZE> &mat)
{
    for(int i=0; i<SIZE; i++)
    {
        vec[i]=mat.vec[i];
    }
}
template <typename T, int SIZE>
/**  Metoda transponująca macierz, przyjmująca za argument macierz i zwracająca macierz **/
Matrix<T, SIZE> Matrix<T, SIZE>::transpose()
{
    Matrix<T, SIZE> copy;
    copy=*this;
    for(int i=0; i<SIZE; i++)
    {
        for(int j=0; j<SIZE; j++)
        {
            vec[j][i]=copy.vec[i][j];
        }
    }
    return *this;
}
/** Przeciążenie operatoru mnożenia macierzy i wektora, zwracający wektor **/
template <typename T, int SIZE>
Vector<T, SIZE> Matrix<T, SIZE>::operator*(Vector<T, SIZE> &arg)
{
    Vector<T, SIZE> result;
    for(int i=0; i<SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            result[i] =result[i]+vec[i][j]*arg[j];
        }
    }
} /** Konstruktor usunąłem bo był problem w przypadku zmiennych Complex
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
}**/
template <typename T, int SIZE>
/** Przeciążenie operatora () dla typu  Matrix, zwracająca typ T **/
T  &Matrix<T, SIZE>::operator()(int i, int j)
{
    if(i<0 || i>SIZE || j<0 || j>SIZE)
    {
        std::cerr<<"POZA ZAKRESEM"<<std::endl;
    }
    else
    {
        return vec[i][j];
    }
}
template <typename T, int SIZE>
/** Przeciążenie operatora () dla typu const Matrix, zwracająca typ T **/
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
