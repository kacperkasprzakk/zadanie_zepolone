#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <unistd.h>
#include "Database.h"
#include "Statistics.h"

using namespace std;

int main(int argc, char **argv)
{
    int wrong;
    Complex comp; //!wpisywana liczba
    answer ans;
    ans.correct=0;
    ans.all=0;
    Database base = {nullptr, 0, 0};/*! te linie należy porównać z tymi które są w kodzie na panamincie !*/

    if (Init(&base, argv[1]) == false)
    {
        cerr << " Inicjalizacja testu nie powiodla sie." << endl;
        return 1;
    }
    cout << endl;
    cout << " Start testu arytmetyki zespolonej: " << argv[1] << endl;
    cout << endl;

    Expression expression;
    while (GetNextQuestion(&base, &expression)) {
        wrong=0;
        Display(expression);
        while (wrong < 3) {
            cin >> comp;
            if (cin.fail())
            {
                wrong++;
                cin.clear();
                cin.ignore(1,'\n');
                cout << "Zly sposob wprowadzenia! Masz jeszcze " << 3 - wrong << " prob" << endl;
            } else
            {
                wrong=10;//!musi być inaczej każe nam wpisywać trzy razy
            }

        }
            cout << endl;
            if (compare(comp, Solve(expression))){
                cout << "poprawny wynik!"<<endl;
                ans.correct++;
            }else{
                cout << "zle!";
		display(Solve(expression));
            }
            cout << endl;
            cout << endl;
            ans.all++;
    }
    cout << endl;
    cout << " Koniec testu" << endl;
    cout << endl;
    cout << " Uzyskales/as:" <<counting(ans)<<"%"<< endl;
    return 0;
}
