#include "Boss.h"


Boss::Boss(std::string fio, double salary, double allowance, int years, double salaryBoss, std::string office) :
	Employee::Employee(fio, salary, allowance, years)
{
	this->salaryBoss = salaryBoss;
	this->office = office;
}

double Boss::Salary()
{
	return Employee::Salary() + salaryBoss;
}

void Boss::print()
{
	Employee::print();
	std::cout << " Boss's salary: " << salaryBoss << " office: " << office;
};
