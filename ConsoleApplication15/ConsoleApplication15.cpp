#include <iostream>
#include "Circle_in_Squre.h"

int main()
{
	unique_ptr<Circle_in_Squre> p1(new Circle_in_Squre(1,2,"la"));
	cout<<p1->Dysplay();
	p1.release();
	//p1=unique_ptr<Circle_in_Squre> (new Circle_in_Squre(2, 2, "la")); комеентарий нужно в код реобразовать
}