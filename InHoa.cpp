#include<iostream>
using namespace std;
int main(){
    char c;
    cout<<"Nhap chu cai thuong: ";
    cin>> c;
    if(c >= 'a' && c <= 'z'){
        c-=32;
    }
    cout<<"Chu cai da duoc in hoa:" <<c;
}