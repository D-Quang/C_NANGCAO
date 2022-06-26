#include <iostream>
#include <math.h>
using namespace std;
void cs(int n,int a,int b,int c){
	if(n==2){
		cout<<"Chu vi cua hinh chu nhat = "<< 2*(a+b);
		cout<<"\nDien tich = "<<(a*b);
	}else{
		int p=(a+b+c)/2;
		cout<<"Chu vi hinh tam giac= "<<2*p;
		cout<<"\nDien tich = "<<sqrt(p*(p-a)*(p-b)*(p-c));
	}
}

int main() {
	int n;
    cout<<"Nhap so canh cua da giac: ";
	cin >> n;
	if(n==2){
		int a,b;
        cout<<"Nhap chieu dai: ";
		cin >> a;
        cout<<"Nhap chieu rong: ";
		cin >> b;
		cs(n,a,b,0);
	}else{
		int a,b,c;
        cout<<"Nhap canh 1: ";
		cin >> a;
        cout<<"Nhap canh 2: ";
		cin >> b;
        cout<<"Nhap canh 3: ";
		cin >> c;
		cs(n,a,b,c);
	}
	return 0;
	
}