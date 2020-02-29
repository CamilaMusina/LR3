#pragma once
#include "Employee.h"
#include <iostream>
#include <string>

/*�������������� ������� ��� ���������� �������� � ������� ��� ������ ���������� ����������.
������ ���������������� ������� �������� ��������������� ������� �� �������� ������.*/

class Boss :
	public Employee
{
	double salaryBoss;
	std::string office;

public:
	Boss(std::string fio, double salary, double allowance, int years, double salaryBoss, std::string office);
	double Salary();
	void print();
};

