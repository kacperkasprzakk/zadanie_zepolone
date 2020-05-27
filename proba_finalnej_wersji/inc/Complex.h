#pragma once

#include <iostream>
#include <cstdlib>
using namespace std;

/*!
 *  Plik zawiera definicje struktury Complex oraz zapowiedzi
 *  przeciazen operatorow arytmetycznych dzialajacych na tej
 *  strukturze.
 */

/*!
 * Modeluje pojecie liczby zespolonej
 */
struct Complex
{
    double re; /*! Pole repezentuje czesc rzeczywista. */
    double im; /*! Pole repezentuje czesc urojona. */
};
void display(Complex);
/*
 * Dalej powinny pojawic sie zapowiedzi definicji przeciazen operatorow
 */
Complex operator +(Complex arg1, Complex arg2);
Complex operator -(Complex arg1, Complex arg2);
Complex operator *(Complex arg1, Complex arg2);
Complex operator /(Complex arg1, Complex arg2);
Complex operator ^(Complex arg1, Complex arg2);
std::istream & operator>> (std::istream & streamIn, Complex &arg1);
std::ostream & operator<< (std::ostream & streamOut, Complex arg1);
Complex operator+=(Complex &arg1, Complex arg2);
Complex operator-=(Complex &arg1, Complex arg2);
double sqrt(Complex arg1);
bool operator==(Complex arg1, Complex arg2);
Complex operator *(Complex arg1, double factor);
Complex operator *(Complex arg1, double divider);