#include<iostream>
#include<vector>
#pragma once 

using namespace std;

class People{
    string name, job, id;
    int age;

    public:

    People(){}
    People(string name, string job, string id, int age):name(name),job(job),id(id),age(age){}


    string Name()
    {
        return name;
    }
    string Job()
    {
        return job;
    }
    string Id()
    {
        return id;
    }
    int Age()
    {
        return age;
    }

    
    void display()
    {
        cout << "Name:" << name << endl;
        cout << "Job: " << job << endl;
        cout << "Id: " << id << endl;
        cout << "Age: " << age << endl;
    }
};

class Family{
    string nameF, status, add;
    vector<People>p;

    public:

    Family(){}
    Family(string nameF, string status, string add, vector<People>p):nameF(nameF),status(status),add(add),p(p){}


    string NameF()
    {
        return nameF;
    }
    string Status()
    {
        return status;
    }
    string Add()
    {
        return add;
    }
    vector<People>getP()
    {
        return p;
    }


    void display()
    {
        cout << "NameF: " << nameF << endl;
        cout << "Status: " << status << endl;
        cout << "Add: " << add << endl;
        for(int i=0;i<p.size();i++)
        {
            p[i].display();
        }
        cout << "______________________________" << endl;
    }


    static vector<Family>getPoorHousehold(vector<Family>fa)
    {
        vector<Family>poor;

        for(int i=0;i<fa.size();i++)
        {
            if(fa[i].status == "poor")
            {
                poor.push_back(fa[i]);
            }
        }
        return poor;
    }


    static vector<Family>findFamilySurname(vector<Family>fa, string surname)
    {
        vector<Family>familysurname;

        for(int i=0;i<fa.size();i++)
        {
            if(fa[i].nameF == surname )
            {
                familysurname.push_back(fa[i]);
            }
        }
        return familysurname;
    }
};

class Group{
    string nameGr;
    vector<Family>f;

    public:

    Group(){}
    Group(string nameGr, vector<Family>f):nameGr(nameGr),f(f){}


    string NameGr()
    {
        return nameGr;
    }
    vector<Family>getF()
    {
        return f;
    }
    int NumberFamily()
    {
        return f.size();
    }


    static double avgAgeGroup(Group v)
    {
        double All_Age = 0;
        double All_People = 0;

        vector<Family>f = v.getF();

        for(int i=0;i<f.size();i++)
        {
            vector<People>p = f[i].getP();

            All_People += p.size();

            for(int i=0;i<p.size();i++)
            {
                All_Age += p[i].Age();
            }
        }
        return All_Age / All_People; //  (11+12+13) chia 3 
    }


    static vector<People>getPeopleHaveNoJob(Group g)
    {
        vector<People>run;

        vector<Family>noJob = g.getF();
        
        for(int i=0;i<noJob.size();i++)
        {
            vector<People>test = noJob[i].getP();
            for(int i=0;i<test.size();i++)
            {
                if(test[i].Job() == " ")
                {
                    run.push_back(test[i]);
                }
            }
            
        }
        return run;
    }
};

int main()
{
    vector<People>p1;
    p1.push_back(People("Ngoc", "engineer", "1", 11));

    vector<People>p2;
    p2.push_back(People("Thao", " ", "2", 12));  // Thảo giàu từ bé nên không cần việc làm 

    vector<People>p3;
    p3.push_back(People("Mai", "engineer", "3", 13));


    vector<Family>fa;                                                    //surname = last name = họ, VD: họ Nguyễn
    fa.push_back(Family("Nguyen", "poor", "Dien Bien Phu Street", p1));
    fa.push_back(Family("Le"    , "rich", "Tran Hung Dao Street", p2));
    fa.push_back(Family("Nguyen", "poor", "Dien Bien Phu Street", p3));

    vector<Family>poor = Family::getPoorHousehold(fa); // 3 hộ gia đình trong đó có 2 hộ nghèo

    for(int i=0;i<poor.size();i++)  // nên vòng lặp for in ra 2 hộ nghèo này
    {
        poor[i].display();
    }


    vector<Family>familysurname = Family::findFamilySurname(fa, "Le");

    for(int i=0;i<familysurname.size();i++)
    {
        familysurname[i].display(); 
    }


// giờ giải quyết 2 hàm của lớp Group nào
    vector<Family>f;
                             // dùng lại giá trị của vector cũ cho dễ
    f.push_back(Family("Nguyen", "poor", "Dien Bien Phu Street", p1)); 
    f.push_back(Family("Le"    , "rich", "Tran Hung Dao Street", p2));
    f.push_back(Family("Nguyen", "poor", "Dien Bien Phu Street", p3));

    Group v("phuong 1", f);

    cout << "Avg AgE Group: " << Group::avgAgeGroup(v) << endl << endl;


    
    Group g("phuong 1", f);
    vector<People>run = Group::getPeopleHaveNoJob(g);
    for(int i=0;i<run.size();i++)
    {
        cout << "Name: " << run[i].Name() << endl; // in ra Thảo
    }
    
    cout << endl;
    system("pause");
}