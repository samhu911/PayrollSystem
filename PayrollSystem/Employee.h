#pragma once
#include<iostream>

class Employee
{
public:
	//Company details
	std::string department;
	int id;

	int hoursWorked;
	//need function to set hours

	bool fullTime;

	int numSickDays;
	int numVacationDays;

	std::string dateOfHire;

	//Benefits


private:
	//Personal
	std::string dateOfBirth;
	std::string homeAddress;
	std::string marriageStatus;
	std::string citizenship;

};

