#pragma once

#include "Size.hh"
#include <iostream>
<<<<<<< HEAD
#include "Vector.hh"
=======
>>>>>>> 9393e5459b0851e2057887e1c8f50ffd301267de

/*
 *  Tutaj trzeba opisac klase. Jakie pojecie modeluje ta klasa
 *  i jakie ma glowne cechy.
 */
class Matrix
{
<<<<<<< HEAD
    Vector vec[SIZE];
=======
>>>>>>> 9393e5459b0851e2057887e1c8f50ffd301267de
    /*
     *  Tutaj trzeba wstawic definicje odpowiednich pol i metod prywatnych
     */
public:
<<<<<<< HEAD
    friend std::istream &operator>>(std::istream &stream, Matrix &matrix);
    friend std::ostream &operator<<(std::ostream &stream, const Matrix &matrix);
    double determinant();
    double other_dets(Vector vector, int n);
    Matrix operator =(Matrix& m);
    Vector operator *(Vector v);
    Matrix transpose();
=======
>>>>>>> 9393e5459b0851e2057887e1c8f50ffd301267de
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
<<<<<<< HEAD

=======
std::istream &operator>>(std::istream &stream, Matrix &matrix);
>>>>>>> 9393e5459b0851e2057887e1c8f50ffd301267de

/*
 * To przeciazenie trzeba opisac. Co ono robi. Jaki format
 * danych akceptuje. Jakie jest znaczenie parametrow itd.
 * Szczegoly dotyczace zalecen realizacji opisow mozna
 * znalezc w pliku:
 *    ~bk/edu/kpo/zalecenia.txt 
 */
<<<<<<< HEAD
=======
std::ostream &operator<<(std::ostream &stream, const Matrix &matrix);
>>>>>>> 9393e5459b0851e2057887e1c8f50ffd301267de
