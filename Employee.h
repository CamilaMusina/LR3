#pragma once
#include<iostream>
#include<string>

class Employee
{
	std::string fio;
	double salary;
	double allowance; //�������� (� ���������)
	int years;

public:
	Employee(std::string fio, double salary, double allowance, int years);
	double Salary();
	virtual void print();
};

