#pragma once

#include "Size.hh"
#include <iostream>

/*
 *  Tutaj trzeba opisac klase. Jakie pojecie modeluje ta klasa
 *  i jakie ma glowne cechy.
 */
class Vector
{
    double data[SIZE];
public:
    const double &operator [] (int index) const;
    double &operator [] (int index);
    Vector operator +(Vector& v);
    Vector operator -(Vector& v);
    double operator *(Vector& v);
    Vector operator *(double& factor);
    Vector operator /(double& divider);
    friend std::istream &operator>>(std::istream &stream, Vector &vec);
    friend std::ostream &operator<<(std::ostream &stream, const Vector &vec);
    double length();
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
//std::istream &operator>>(std::istream &stream, Vector &vec);

/*
 * To przeciazenie trzeba opisac. Co ono robi. Jaki format
 * danych akceptuje. Jakie jest znaczenie parametrow itd.
 * Szczegoly dotyczace zalecen realizacji opisow mozna
 * znalezc w pliku:
 *    ~bk/edu/kpo/zalecenia.txt 
 */
//std::ostream &operator<<(std::ostream &stream, const Vector &vec);