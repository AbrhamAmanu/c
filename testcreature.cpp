#include <iostream>
/*
CH-230-A
a11 p4.cpp
Abrham Amanu Eshetu
aeshetu@jacobs-university.de
*/
#include "Creature.h"
using namespace std;

int main()
{
    string i;
    Wizard *w;
    Footballfield *f;
    Shotpower *s;

    do{
        cout << "Enter an input" << endl;
        cin >> i;
        if(i == "wizard"){
            cout << "\nCreating a Wizard.\n";
            w = new Wizard;
            w ->run();
            w ->hover();
            delete w;
        }
         else if(i == "object1"){
            cout << "\nCreating a footballfield.\n";
            f = new Footballfield;
            f ->run();
            f ->field();
            delete f;
        }
         else if(i == "object2"){
            cout << "\nCreating a shotpower.\n";
            s = new Shotpower;
            s ->run();
            s ->Shot();
            delete s;
        }
    }while(i!= "quit");

    return 0;
}
