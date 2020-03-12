

/*
 * Tu nalezy zdefiniowac funkcje, ktorych zapowiedzi znajduja sie
 * w pliku naglowkowym.
 */
//
// Created by User on 05.03.2020.
//

#include "Expression.h"
#include "Complex.h"
void Display(Expression expr)
{
    switch(expr.op)
    {
        case kAddition: {
            display(expr.arg1);
            cout << "+";
            display(expr.arg2);
            cout<<"=";
            break;
        }
        case kSubtraction:{
            display(expr.arg1);
            cout << "-";
            display(expr.arg2);
            cout<<"=";
            break;
        }
        case kMultiplication:{
            display(expr.arg1);
            cout << "*";
            display(expr.arg2);
            cout<<"=";
            break;
        }
        case kDivision:{
            display(expr.arg1);
            cout << "/";
            display(expr.arg2);
            cout<<"=";
            break;
        }
        case kSquarePow:{
	    display(expr.arg1);
	    cout << "^";
	    display(expr.arg2);
	    cout<<"=";
	    break;
        }
    }
}
Complex Solve(Expression expr) /* program rozwiązujacy działania na liczbach zespolonych */
{
    Complex result;
    switch(expr.op)
    {
        case kAddition: {
             result=expr.arg1+expr.arg2;
             break;
        }
        case kSubtraction:{
            result=expr.arg1-expr.arg2;
            break;
        }
        case kMultiplication:{
            result=expr.arg1*expr.arg2;
            break;
        }
        case kDivision:{
            result=expr.arg1/expr.arg2;
            break;
        }
        case kSquarePow:{
            result=expr.arg1^expr.arg2;
            break;
        }
    }
    return result;
}
