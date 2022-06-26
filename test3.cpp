#include<bits/stdc++.h>
using namespace std;
class Animal{
	private:
		string name;
		double weight;
	public:
		Animal():name("No Name"),weight(0){}
		Animal(string name,double weight):name(name),weight(weight){}
		~Animal(){}
		void who(){
			cout<<name<<endl<<weight<<endl;
		}
};
class Lion:public Animal{
	public:
		Lion():Animal(){}
		Lion(string name,double weight):Animal(name,weight){}
		void who(){
			Animal::who();
		}
};
class Aardvarrk:public Animal{
	public:
		Aardvarrk():Animal(){}
		Aardvarrk(string name,double weight):Animal(name,weight){}
		void who(){
			Animal::who();
		}
};
int main(){
	Animal k("Lion",245);
	Lion h("Lion A",250);
	Aardvarrk m("Lion b",260);
	k.who();
	h.who();
	m.who();
}