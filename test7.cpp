#pragma once
#include<iostream>

using namespace std;

class Person {
private:
	string name;
	string address;

public:
	Person(string name, string address) {
		this->name = name;
		this->address = address;
	}

	virtual void display() = 0;

	string getName() {
		return name;
	}

	void setName(string name) {
		this->name = name;
	}

	string getAddress() {
		return address;
	}

	void setAddress(string address) {
		this->address = address;
	}
};

class Employee : public Person {
private:
	int salary;

public:
	Employee(string name, string address, int salary) :Person(name, address) {
		this->salary = salary;
	}

	void display() {
		cout << "Employee name: " << Person::getName() << endl;
		cout << "Employee address: " << Person::getAddress() << endl;
		cout << "Employee salary: " << salary << endl;
	}
};

class Customer : public Person {
private:
	int balance;

public:
	Customer(string name, string address, int balance) : Person(name, address) {
		this->balance = balance;
	}

	void display() {
		cout << "Customer name: " << Person::getName() << endl;
		cout << "Customer address: " << Person::getAddress() << endl;
		cout << "Customer balance: " << balance << endl;
	}
};

int main() {
	Person *person1 = new Employee("Trung", "HN", 3300);
	Person *person2 = new Customer("Linh", "BN", 10400);
	person1->display();
	person2->display();
	return 0;
}