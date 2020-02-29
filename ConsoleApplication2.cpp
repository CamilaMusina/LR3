#include <iostream>
#include "Employee.h"
#include "Boss.h"

using namespace std;

int main()
{
	Employee e1( "Katya", 500, 0.05, 4); 
	Boss b1("Bob", 1500, 0.1, 9, 0.15, "Yandex");
	Employee* ee;
	ee = &e1;
	ee->print();
	ee = &b1;
	ee->print();
	return 0;
}

