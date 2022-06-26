#include<iostream>
using namespace std;

template <class p1, class p2>
p1 Tim_Max(p1 x, p2 y){
    if(x>y){
        return x;
    }else if(x<y){
        return y;
    }
    return y;
}

int main(){
    int a=10;
    int b=5;
    cout<<"Tim_Max="<<Tim_Max(a,b);

    system("pause");
    return 0;
}