#include <iostream>
using namespace std;

bool KTSNT(int x)
{
	if(x<2)
		return false;
	for(int i=2; i<=x/2; i++)
		if(x%i==0)
			return false;
	return true;
}
int tong(int n){
    int sum=0;
    int sotachra;
    for(;n!=0;){
        sotachra = n % 10;
        sum += sotachra;
        n /= 10;
    } 
    return sum;
}
int main()
{
	unsigned int n;
	cout<<"Nhap n: ";
	cin>>n;
	if(KTSNT(n)==true){
		cout<< n << " la so nguyen to!"<<endl;
	    cout<<"tong n:"<<tong(n);
	}
	else{
		cout<< n <<" khong la so nguyen to!"<<endl;
	    
	}
	cout<<endl;
	return 0;
}