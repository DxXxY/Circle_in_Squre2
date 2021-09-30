#pragma once
#include "Squre.h"
#include "Circle.h"

class Circle_in_Squre :
     public Squre,  public Circle
{
public:
    Circle_in_Squre(double a, double r, string name){
        try {
            if (r * 2 == a) {
                set_r(r);
                set_a(a);
                this->name = name;
            }
            else {
                throw "U did mistake in input of Circle_in_Squre";
            }
        }
        catch (const char* Error) {
            cout << Error;
            exit(0);
        }
        
    }
    string Dysplay() {
        return "Name: "+name+"\nCircle\nr: " + to_string(Circle::r) + "\nS: " + to_string(Circle::S) + "\nP: " + to_string(Circle::P) + "\nSqure\na: " + to_string(Squre::a) + "\nS: " + to_string(Squre::S) + "\nP: " + to_string(Squre::P);
    }

};

