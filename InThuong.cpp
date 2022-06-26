#include<iostream>
using namespace std;
int main(){
    char c;
    cout<<"Nhap chu cai in hoa: ";
    cin>> c;
    if(c >= 'A' && c <= 'Z'){
        c+=32;
    }
    cout<<"Chu cai da duoc in thuong la: " <<c;
}