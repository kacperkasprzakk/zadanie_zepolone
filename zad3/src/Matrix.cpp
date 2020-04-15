#include "Matrix.hh"
#include "Vector.hh"
#include <iostream>
using namespace std;
/*
 *  Tutaj nalezy zdefiniowac odpowiednie metody
 *  klasy Matrix, ktore zawieraja wiecej kodu
 *  niz dwie linijki.
 *  Mniejsze metody mozna definiwac w ciele klasy.
 */
std::istream &operator>>(std::istream &stream, Matrix &matrix)
{
    for(int i=0; i<SIZE; i++)
    {
        stream>>matrix.vec[i];
    }
}
std::ostream &operator<<(std::ostream &stream, const Matrix &matrix)
{
    for(int i=0; i<SIZE; i++)
    {
        stream<<matrix.vec[i];
    }
}
double Matrix::determinant()
{
    double result;
            result = vec[0][0] * vec[1][1] * vec[2][2] + vec[0][1] * vec[1][2] * vec[2][0] +
                        vec[0][2] * vec[1][0] * vec[2][1] -
                        (vec[2][0] * vec[1][1] * vec[0][2] + vec[2][1] * vec[1][2] * vec[0][0] +
                         vec[2][2] * vec[1][0] * vec[0][1]);


    return  result;
}

double Matrix::other_dets(Vector vector, int n)
{
        double  result;
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
Matrix Matrix::operator=(Matrix &m)
{
    for(int i=0; i<SIZE; i++)
    {
        vec[i]=m.vec[i];
    }
}
Vector Matrix::operator*(Vector v)
{
    Vector result;
    for(int i=0; i<SIZE; i++)
    {
        result[i]=vec[i][0]*v[0]+vec[i][1]*v[1]+vec[i][2]*v[2];
    }
    return result;
}
Matrix Matrix::transpose()
{
    Matrix copy;
    for(int i=0; i<SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            copy.vec[i][j] =vec[j][i];
        }
    }
}