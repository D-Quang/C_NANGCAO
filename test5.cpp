#include<iostream>
using namespace std;

class SinhVien{
    private:
    string name;
    int age;
    string gender;
    string address;

    public:
    SinhVien(){
    }
    SinhVien(string name, int age, string gender, string address){
        this->name=name;
        this->age=age;
        this->gender=gender;
        this->address=address;
    }

    void setName(string name){
        this->name=name;
    }
    string getName(){
        return name;
    }

    void setAge(int age){
        this->age=age;
    } 
    int getAge(){
        return age;
    }

    void setGender(string gender){
        this->gender= gender;
    }
    string getGender(){
        return gender;
    }

    void setAddress(string address){
        this->address;
    }
    string getAddress(){
        return address;
    }

    void display(){
        cout<<"Name: "<<name<< endl;
        cout<<"Age: "<< age<< endl;
        cout<<"Gender: "<< gender<< endl;
        cout<<"Address: "<< address<< endl;
    }
};

int main(){
    SinhVien s1("Quang",20,"Nam","Bac Ninh");
    s1.display();

    SinhVien s2;
    s2.setName("Danh");
    s2.setAge(20);
    s2.setGender("Nam");
    s2.setAddress("Thai Binh");
    cout<<"Name: "<< s2.getName()<< endl;
    cout<<"Age: "<< s2.getAge()<< endl;
    cout<<"Gender: "<< s2.getGender()<< endl;
    cout<<"Address: "<< s2.getGender()<< endl;
}