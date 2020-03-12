//
// Created by kacper on 11.03.2020.
//

#include "Statistics.h"
double counting(answer ans1)
{
    ans1.perCent=(double) ans1.correct/ans1.all *100;
    return ans1.perCent;
}
