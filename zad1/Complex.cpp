//
// Created by kacper on 07.03.2020.
//

#include "Complex.h"
#include <iostream>
using namespace std;

void display(Complex c) {
    //cout<<showpos<<"("<<c.re<<c.im<<"i)";
    if (c.im >= 0)
    {
        cout <<  "(" << c.re <<"+"<< c.im << "i)";
    }
    else
    {
        cout<<"(" << c.re << c.im << "i)";
    }
}
/*!
 * Realizuje dodanie dwoch liczb zespolonych.
 * Argumenty:
 *    arg1 - pierwszy element dodawania,
 *    arg2 - drugi element dodawania.
 * Zwraca:
 *    Sume dwoch elementów przekazanych jako parametry.
 */
Complex operator+(Complex arg1, Complex arg2)
{
    Complex result;

    result.re = arg1.re + arg2.re;
    result.im = arg1.im + arg2.im;
    return result;
}
/*!
 * Realizuje odejmowanie dwoch liczb zespolonych.
 * Argumenty:
 *    arg1 - pierwszy element odejmowania,
 *    arg2 - drugi element odejmowania.
 * Zwraca:
 *    Różnicę dwoch elementów przekazanych jako parametry.
 */
Complex operator-(Complex arg1, Complex arg2)
{
    Complex result;
    result.re = arg1.re - arg2.re;
    result.im = arg1.im - arg2.im;
    return result;
}
/*!
 * Realizuje mnożenie dwoch liczb zespolonych.
 * Argumenty:
 *    arg1 - pierwszy element mnożenia,
 *    arg2 - drugi element mnożenia.
 * Zwraca:
 *    Iloczyn dwoch elementów przekazanych jako parametry.
 */
Complex operator*(Complex arg1, Complex arg2)
{
    Complex result;

    result.re = arg1.re* arg2.re - arg1.im * arg2.im;
    result.im = arg1.re * arg2.im+arg1.im * arg2.re;
    return result;

}
/*!
 * Realizuje dzielenie dwoch liczb zespolonych.
 * Argumenty:
 *    arg1 - pierwszy element dzielenia,
 *    arg2 - drugi element dzielenia.
 * Zwraca:
 *    Iloraz dwoch elementów przekazanych jako parametry.
 */
Complex operator/(Complex arg1, Complex arg2)
{
    Complex result;
    double conjugate=arg2.re*arg2.re+arg2.im+arg2.im;
    if(conjugate==0)
      {
	cerr<<"Nie moge dzielic przez zero!";
	result.re=0;
	result.im=0;
	return result;
      }
    else
      {
	result.re = (arg1.re * arg2.re+arg1.im*arg2.im)/conjugate;
	result.im = (arg1.im*arg2.re-arg1.re*arg2.im)/conjugate;
      }

    return result;
}
Complex operator^(Complex arg1, Complex arg2)
{
    Complex result;
    result.re=1;
    result.im=0;
    if (arg2.im!=0)
    {
        cerr<<"Tego nie policzę!"<<endl;
    }
    for(int i=0; i<arg2.re; i++)
    {
        result=result*arg1;
    }
    return result;
}
istream & operator >>(istream & streamIn,Complex &arg1)
{

        if (streamIn.peek() != '(')
        {
            streamIn.setstate(ios::failbit);
            return streamIn;
        }
            streamIn.get();
            streamIn >> arg1.re;
            streamIn >> arg1.im;
            if (streamIn.peek() != 'i') {
                streamIn.setstate(ios::failbit);
                return streamIn;
            }
                streamIn.get();
                if (streamIn.peek() != ')')
                {
                    streamIn.setstate(ios::failbit);
                    return streamIn;
                }
                    streamIn.get();
                    streamIn.get();

}
int compare(Complex arg1, Complex arg2)//funkcja porównuje dwie liczby zespolone
{
    if(arg1.re==arg2.re && arg1.im==arg2.im || ((arg1.re+0.1>=arg2.re && arg1.re-0.1<=arg2.re) && (arg1.im+0.1>=arg2.im && arg1.im+-0.1<=arg2.im)))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
//
// Created by User on 05.03.2020.
//
