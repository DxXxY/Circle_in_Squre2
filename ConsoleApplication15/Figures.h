#pragma once
using namespace std;
#include <string>
#include <Windows.h>
#include<iostream>
 class Figures
{
protected:
	string name;
public:
	Figures(string name) {
		this->name = name;
	}
	Figures() :Figures( "<=>" ) {}
	string getName() {
		return name;
	}
	void set_name(string name) {
		this->name = name;
	}
};

