#include <iostream>
/*
CH-230-A
a11 p4.cpp
Abrham Amanu Eshetu
aeshetu@jacobs-university.de
*/
using namespace std;

class Creature {
	public:
		Creature();
		void run() const;

	protected:
		int distance;
};

class Wizard : public Creature {
	public:
		Wizard();
		void hover() const;

	private:
		int distFactor;
};

class Footballfield : public Creature {
	public:
		Footballfield();
		void field() const;

	private:
		int length;
};

class Shotpower : public Creature {
	public:
		Shotpower();
		void Shot() const;

	private:
		int joules;
};
