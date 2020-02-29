#include "Employee.h"


Employee::Employee(std::string fio, double salary, double allowance, int years)
{
	this->fio = fio;
	this->salary = salary;
	this->allowance = allowance;
	this->years = years;
}

double Employee::Salary()
{
	return (salary + years * allowance * salary);
}

void Employee::print()
{
	std::cout << "FIO: " << fio << " salary: " << salary <<
		" allowance: " << allowance << " years: " << years <<
		" full Salary: " << Salary() << std::endl;
}
