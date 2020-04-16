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
<<<<<<< HEAD
    double length();
=======
<<<<<<< HEAD
    double length();
=======


>>>>>>> 9393e5459b0851e2057887e1c8f50ffd301267de
>>>>>>> 0727b52ad5c697a5c975fe30f2c0a0869c823620
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
<<<<<<< HEAD
//std::ostream &operator<<(std::ostream &stream, const Vector &vec);
=======
<<<<<<< HEAD
//std::ostream &operator<<(std::ostream &stream, const Vector &vec);
=======
//std::ostream &operator<<(std::ostream &stream, const Vector &vec);
>>>>>>> 9393e5459b0851e2057887e1c8f50ffd301267de
>>>>>>> 0727b52ad5c697a5c975fe30f2c0a0869c823620
