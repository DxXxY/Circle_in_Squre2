#pragma once
#include "Figures.h"
class Circle:virtual public Figures
{
protected:
	double r, S, P;
public:
	Circle(double r, string name) :r{ r } {
		this->name = name;
		Reculculate();
	}
	Circle() :Circle(0, "<=>") {}
	void Reculculate() {
		P = 2*r *3.14;
		S = r * r*3.14;
	}
	void set_r(double r) {
		this->r = r;
		Reculculate();
	}
	string Dysplay() {
		return "Circle\nr: " + to_string(r) + "\nS: " + to_string(S) + "\nP: " + to_string(P);
	}
};

