#pragma once
#include <iostream>

using namespace std;

class Employee {
private:
	string name;
	int paymentPerHour;

public:
	Employee(string name, int paymentPerHour) {
		this->name = name;
		this->paymentPerHour = paymentPerHour;
	}

	string getName() {
		return name;
	}

	void setName(string name) {
		this->name = name;
	}

	int getPaymentPerHour() {
		return paymentPerHour;
	}

	void setPaymentPerHour(int paymentPerHour) {
		this->paymentPerHour = paymentPerHour;
	}
	
	virtual int calculateSalary() = 0;
};


class PartTimeEmployee : public Employee {
private:
	int workingHours;

public:
	PartTimeEmployee(string name, int paymentPerHour, int workingHours) :Employee(name, paymentPerHour) {
		this->workingHours = workingHours;
	}

public:
	int calculateSalary() {
		return workingHours * getPaymentPerHour();
	}
};

class FullTimeEmployee : public Employee {
public:
	FullTimeEmployee(string name, int paymentPerHour) :Employee(name, paymentPerHour) {
	}

public:
	int calculateSalary() {
		return 8 * getPaymentPerHour();
	}
};

int main() {
	Employee* employee1 = new PartTimeEmployee("Trung", 45000, 7);
	cout << "Name: " << employee1->getName() << endl;
	cout << "Salary per day: " << employee1->calculateSalary() << endl;

	Employee* employee2 = new FullTimeEmployee("Linh", 65000);
	cout << "Name: " << employee2->getName() << endl;
	cout << "Salary per day: " << employee2->calculateSalary() << endl;
	return 0;
}