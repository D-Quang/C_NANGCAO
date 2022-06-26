#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Nhap n: ";
    cin>>n;
    int dem=0;
    for(int i=n+1; i<=n*n; i++){
        dem++;
    }
    cout<<("(n,n*n] = ")<<dem;
}