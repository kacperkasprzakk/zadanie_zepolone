#pragma once

#include "Size.hh"
#include <iostream>
#include "Vector.hh"

/*
 *  Tutaj trzeba opisac klase. Jakie pojecie modeluje ta klasa
 *  i jakie ma glowne cechy.
 */
class Matrix
{
    Vector vec[SIZE];
    /*
     *  Tutaj trzeba wstawic definicje odpowiednich pol i metod prywatnych
     */
public:
    friend std::istream &operator>>(std::istream &stream, Matrix &matrix);
    friend std::ostream &operator<<(std::ostream &stream, const Matrix &matrix);
    double determinant();
    double other_dets(Vector vector, int n);
    Matrix operator =(Matrix& m);
    Vector operator *(Vector v);
    Matrix transpose();
    /*
     *  Tutaj trzeba wstawic definicje odpowiednich metod publicznych
     */
};

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
