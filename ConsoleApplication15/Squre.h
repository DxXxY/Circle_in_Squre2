#include "Figures.h"
#pragma once
class Squre: 
	virtual public Figures
{
protected:
	double a;
	double S;
	double P;
public:
	Squre() :Squre(0, "<=>") {}
	Squre(double a, string name) :a{ a }
	{
		this->name = name;
		Reculculate();
	}
	void Reculculate() {
		P = a * 4;
		S = a * a;
	}
	void set_a(double a) {
		this->a = a;
		Reculculate();
	}
	string Dysplay() {
		return "Squre\na: " + to_string(a) + "\nS: " + to_string(S) + "\nP: " + to_string(P);
	}
};

