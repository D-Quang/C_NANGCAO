#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    double r;
    cout<<"Nhap ban kinh hinh tron : ";
    cin>> r;
    cout<<"Dien tich hinh tron = "<< fixed << setprecision(1) <<r * r *3.14<< endl;
    cout<<"Chu vi hinh tron = "<< fixed << setprecision(1) << 2 * r * 3.14;
}