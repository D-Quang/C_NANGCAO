#pragma once
#include<iostream>
#include<vector>
using namespace std;

class Food{
    private:
    string name;
    double price;

    public:
    Food(){

    }

    Food(string name, double price){
        this->name=name;
        this->price=price;
    }

    void setName(string name){
        this->name=name;
    }
    string getName(){
        return name;
    }

    void setPrice(double price){
        this->price=price;
    }
    double getPrice(){
        return price;
    }
};

class CannedFood: public Food{
    private:
    int numberBox;

    public:
    CannedFood(){

    }

    CannedFood(string name, double price, int numberBox): Food(name, price){
        this->numberBox=numberBox;
    }

    void display(){
        cout<< "Name CannedFood: "<< Food::getName()<< endl;
        cout<< "Price CannedFood: "<< Food::getPrice()<< endl;
        cout<<"NumberBox: "<< numberBox<< endl;
    }

    void setNumberBox(int numberBox){
        this->numberBox=numberBox;
    }
    int getNumberBox(){
        return numberBox;
    }

    static void sortNumberBox(vector<CannedFood>& vt){
        for(int i=0; i<vt.size()-1; i++){
            for(int j=i+1; j<vt.size(); j++){
                if(vt[i].numberBox > vt[j].numberBox){
                    swap(vt[i], vt[j]);
                }
            }
        }
    }
};

class NonCFood : public Food {
private:
	double weight;
public:
	NonCFood() {}
	NonCFood(string name, double price, double weight) :Food(name, price)
	{
		this->weight = weight;
	}
	void display()
	{
		cout << "Name: " << Food::getName() << endl;
		cout << "Price: " << Food::getPrice() << endl;
		cout << "Weight: " << this->weight << endl;
	}
	double getWeight()
	{
		return weight;
	}
	static void sortWeight(vector<NonCFood>& vt)
	{
		for (int i = 0; i < vt.size() - 1; i++)
		{
			for (int j = i + 1; j < vt.size(); j++)
			{
				if (vt[j].weight < vt[i].weight)
				{
					swap(vt[j], vt[i]);
				}
			}
		}
	}
};

int main()
{
    vector<CannedFood>cf;
    cf.push_back(CannedFood("Fish", 500, 3));
    cf.push_back(CannedFood("Meat", 500, 2));
    cf.push_back(CannedFood("Egg", 500, 1));
    CannedFood::sortNumberBox(cf);
    for(int i=0; i< cf.size(); i++)
	{
		cf[i].display();
		cout << endl;
	}
	cout << endl;


    vector<NonCFood>ncf;
    ncf.push_back(NonCFood("Fish", 500, 60));
    ncf.push_back(NonCFood("Meat", 500, 40));
    ncf.push_back(NonCFood("Egg", 500, 20));
    NonCFood::sortWeight(ncf);
    for(int i=0; i< ncf.size(); i++)
	{
		ncf[i].display();
		cout << endl;
	}
	cout << endl;
    cout << endl;
    system("pause");
    
}