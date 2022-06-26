#include<iostream>
using namespace std;

class Animal{
    private:
    string name;
    double weight;

    public:
    Animal(string name, double weight){
        this->name=name;
        this->weight=weight;
    }

    void setName(string name){
        this->name=name;
    }
    string getName(){
        return name;
    }

    void setWeight(int weight){
        this->weight=weight;
    }
    double getWeight(){
        return weight;
    }
    void who(){
        cout<<"Name: "<<name<< endl;
        cout<<"Weight: "<< weight<< endl;
    }
};

class Lion : public Animal{
    Lion():Animal(){
        
    }
		Lion(string name,double weight):Animal(name,weight){}
		void who(){
			Animal::who();
		}
};

class Aardvarrk : public Animal{
    
};

int main(){
   
}