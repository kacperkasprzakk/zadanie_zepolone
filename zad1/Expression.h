#pragma once

#include "Complex.h"

/*!
 * Modeluje zbior operatorow arytmetycznych.
 */
enum Operator
{
    kAddition,
    kSubtraction,
    kMultiplication,
    kDivision,
    kSquarePow
};

/*
 * Modeluje pojecie dwuargumentowego wyrazenia zespolonego
 */
struct Expression
{
    Complex arg1; // Pierwszy argument wyrazenia arytmetycznego
    Operator op;  // Opertor wyrazenia arytmetycznego
    Complex arg2; // Drugi argument wyrazenia arytmetycznego
};

/*
 * Funkcje ponizej nalezy zdefiniowac w module.
 *
 */

void Display(Expression expr);
Complex Solve(Expression expr);
