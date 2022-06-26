#pragma once
#include<iostream>
#include<vector>
using namespace std;

class Book{
    private:
    string nameBook;
    string nameAuthor;
    int numberBook;

    public:
    Book(){

    }

    Book(string nameBook, string nameAuthor, int numberBook){
        this->nameBook=nameBook;
        this->nameAuthor=nameAuthor;
        this->numberBook=numberBook;
    }

    void display(){
        cout << "Name Book: " << this->nameBook << endl;
		cout << "Name Author: " << this->nameAuthor << endl;
		cout << "Number Book: " << this->numberBook << endl;
    }

    string getNameBook(){
        return nameBook;
    }

    string getNameAuthor(){
        return nameAuthor;
    }

    int getNumberBook(){
        return numberBook;
    }
};

class Person{
    private:
    string name;
    int age;
    string add;
    vector<Book> vb;

    public:
    Person(){

    }

    Person(string name, int age, string add, vector<Book> vb){
        this->name=name;
        this->age=age;
        this->add=add;
        this->vb=vb;
    }

    string getName(){
        return name;
    }

    int getAge(){
        return age;
    }

    string getAdd(){
        return add;
    }

    vector<Book> getVB(){
        return vb;
    }

    virtual long moneyPay() = 0;
    virtual void display(){
        cout << "Name: " << name << endl;
		cout << "Age: " << age << endl;
		cout << "Add: " << add << endl;
		cout << "List Book Borrowed:" << endl;
		for (int i = 0; i < vb.size(); i++)
		{
			vb[i].display();
		}
		cout << "Money Pay: " << moneyPay() << endl;
    }

    static void sortPersonAge(vector<Person*> &vt){
        for(int i=0; i<vt.size()-1; i++){
            for(int j=i+1; i<vt.size(); j++){
                if(vt[i]->getAge() > vt[j]->getAge()){
                    swap(vt[i], vt[j]);
                }
            }
        }
    }
};

class Children : public Person{
    public:
    Children(){

    }

    Children(string name, int age, string add, vector<Book> vb) : Person(name, age, add, vb){

    }

    long moneyPay(){
        return getVB().size()  * 5000;
    } 

    void display(){
        Person ::display();
    }
};

class Adult : public Person{
    public:
    Adult(){

    }

    Adult(string name, int age, string add, vector<Book> vb) : Person(name, age ,add, vb){

    }

    long moneyPay(){
        return getVB().size() *10000;
    }

    void display(){
        Person ::display();
    }
};