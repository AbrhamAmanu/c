#include <iostream>
/*
    CH-230-A
    a11_p4.cpp
    Abrham Amanu Eshetu
    aeshetu@jacobs-university.de
*/
#include "Creature.h"

using namespace std;

Creature::Creature(): distance(10)
{}

void Creature::run() const
{
    cout << "running " << distance << " meters!\n";
}

Wizard::Wizard() : distFactor(3)
{}

void Wizard::hover() const
{
    cout << "hovering " << (distFactor * distance) << " meters!\n";
}
//Additional class inherited from creature

Footballfield::Footballfield() : length(50)
{}
//constructor

void Footballfield::field() const
{
    cout << "A football field has a length " << length;
    cout << " and a distance of " << distance << " meters! \n";
}
//Additional class inherited from creature

Shotpower::Shotpower() : joules(35)
{}
//constructor

void Shotpower::Shot() const
{
    cout << "Shot power: " << joules;
    cout << " shot at a distance of: " << distance << " meters! \n";
}



