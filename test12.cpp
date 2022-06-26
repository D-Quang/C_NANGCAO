#include<iostream>
#include<vector>
#pragma once 

using namespace std;

class Person{
    int age;
    string name, add, tel, sex;
    public:
    Person(){}
    Person(int age, string name, string add, string tel, string sex)
    {
        this->age = age;
        this->name = name;
        this->add = add;
        this->tel = tel;
        this->sex = sex;
    }
    int Age()
    {
        return age;
    }
    string Name()
    {
        return name;
    }
    string Add()
    {
        return add;
    };
    string Tel()
    {
        return tel;
    }
    string Sex()
    {
        return sex;
    }
    virtual void display()
    {
        cout << "Age: " << age << endl;
        cout << "Name: " << name << endl;
        cout << "Add: " << add << endl;
        cout << "Tel: " << tel << endl;
        cout << "Sex: " << sex << endl;
    }
    virtual long salary() = 0;
    static vector<Person*>findPerson(vector<Person*>p)
    {
        vector<Person*>v;
        for(int i=0;i<p.size();i++)
        {
            if(p[i]->add == "HN")
            {
                v.push_back(p[i]);
            }
        }
        return v;
    }
};

class EmployeePT:public Person{
    int hour;
    long money;
    public:
    EmployeePT(){}
    EmployeePT(int age, string name, string add, string tel, string sex, int hour, long money):Person(age,name,add,tel,sex)
    {
        this->hour = hour;
        this->money = money;
    }
    int Hour()
    {
        return hour;
    }
    long Money()
    {
        return money;
    }
    long salary()
    {
        return hour * money;
    }
    void display()
    {
        cout << "Employee Part Time" << endl;
        Person::display();
        cout << "Hour: " << hour << endl;
        cout << "Money: " << money << endl;
        cout << "Salary: " << salary() << endl;
    }
    static vector<EmployeePT>getMaxSalary(vector<EmployeePT>pt)
    {
        long max = pt[0].salary();
        for(int i=1;i<pt.size();i++)
        {
            if(pt[i].salary() > max)
            {
                max = pt[i].salary();
            }
        }
        vector<EmployeePT>v;
        for(int i=0;i<pt.size();i++)
        {
            if(pt[i].salary() == max)
            {
                v.push_back(pt[i]);
            }
        }
        return v;
    }
};

class EmployeeFT:public Person{
    int day;
    long money;
    public:
    EmployeeFT(){}
    EmployeeFT(int age, string name, string add, string tel, string sex, int day, long money):Person(age,name,add,tel,sex)
    {
        this->day = day;
        this->money = money;
    }
    int Day()
    {
        return day;
    }
    long Money()
    {
        return money;
    }
    long salary()
    {
        return day * money;
    }
    void display()
    {
        cout << "Employee Full Time" << endl;
        Person::display();
        cout << "Day: " << day << endl;
        cout << "Money: " << money << endl;
        cout << "Salary: " << salary() << endl;
    }
    static vector<EmployeeFT>getMaxSalary(vector<EmployeeFT>ft)
    {
        long max = ft[0].salary();
        for(int i=1;i<ft.size();i++)
        {
            if(ft[i].salary() > max)
            {
                max = ft[i].salary();
            }
        }
        vector<EmployeeFT>v;
        for(int i=0;i<ft.size();i++)
        {
            if(ft[i].salary() == max)
            {
                v.push_back(ft[i]);
            }
        }
        return v;
    }
};

int main()
{
    Person *person[4];

    person[0] = new EmployeePT(18, "John", "HN", "09842", "Male", 30, 309200);
    person[1] = new EmployeeFT(18, "Mikasa", "HCM", "09842", "Female", 7, 30000);
    person[2] = new EmployeePT(18, "Eren", "HN", "09842", "Male", 30, 1200);
    person[3] = new EmployeeFT(18, "sasha", "HCM", "09842", "Female", 6, 1200);

    vector<Person*>p;

    for(int i=0;i<4;i++)
    {
        p.push_back(person[i]);
    }

    vector<Person*>per = Person::findPerson(p); // vector<Person*>per(Person::findPerson(p)); viết như thế này cũng được
    
    for(int i=0;i<per.size();i++)
    {
        per[i]->display();
        cout << "_______________________" << endl;
    }


// this part belong EmployeePT
    vector<EmployeePT>pt;
    
    pt.push_back(EmployeePT(18, "John", "HN", "09842", "Male", 7, 30000));
    pt.push_back(EmployeePT(18, "Eren", "HN", "09842", "Male", 7, 60000));

    vector<EmployeePT>runpt = EmployeePT::getMaxSalary(pt);

    for(int i=0;i<runpt.size();i++)
    {
        runpt[i].display();
        cout << "....................................." << endl;
    }


//this part belong EmployeeFT
    vector<EmployeeFT>ft;
    
    ft.push_back(EmployeeFT(18, "John", "HN", "09842", "Male", 10, 309200));
    ft.push_back(EmployeeFT(18, "Eren", "HN", "09842", "Male", 30, 309200));

    vector<EmployeeFT>runft = EmployeeFT::getMaxSalary(ft);

    for(int i=0;i<runft.size();i++)
    {
        runft[i].display();
        cout << "**************************************" << endl;
    }


    cout << endl;
    system("pause");
}
