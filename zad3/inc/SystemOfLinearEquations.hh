#pragma once

#include <iostream>
<<<<<<< HEAD
#include "Matrix.hh"
#include  "Vector.hh"
=======
<<<<<<< HEAD
#include "Matrix.hh"
#include  "Vector.hh"
=======
>>>>>>> 9393e5459b0851e2057887e1c8f50ffd301267de
>>>>>>> 0727b52ad5c697a5c975fe30f2c0a0869c823620

/*
 *  Tutaj trzeba opisac klase. Jakie pojecie modeluje ta klasa
 *  i jakie ma glowne cechy.
 */
class SystemOfLinearEquations
{
<<<<<<< HEAD
    /*Matrix A;
    Vector x,b; */
=======
<<<<<<< HEAD
    /*Matrix A;
    Vector x,b; */
=======
    /*
     *  Tutaj trzeba wstawic definicje odpowiednich pol i metod prywatnych
     */
>>>>>>> 9393e5459b0851e2057887e1c8f50ffd301267de
>>>>>>> 0727b52ad5c697a5c975fe30f2c0a0869c823620
public:
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
std::istream &operator>>(std::istream &stream, SystemOfLinearEquations &system);

/*
 * To przeciazenie trzeba opisac. Co ono robi. Jaki format
 * danych akceptuje. Jakie jest znaczenie parametrow itd.
 * Szczegoly dotyczace zalecen realizacji opisow mozna
 * znalezc w pliku:
 *    ~bk/edu/kpo/zalecenia.txt 
 */
std::ostream &operator<<(std::ostream &stream,
                         const SystemOfLinearEquations &system);