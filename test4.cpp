#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> a;
    a.push_back(1);
    a.push_back(2);
    a.push_back(3);

    for(int i=0; i<a.size(); i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

    //thay doi kich thuoc
    a.resize(5);
    for(int i=0; i<a.size(); i++){
        cout<<a[i]<<" ";
    }
    cout<< endl;
    //xoa phan tu cuoi cung
    a.pop_back();
    for (int i = 0; i < a.size(); i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    
    //xoa phan tu thu l den r
    //a.erase(a.begin() + l, a.begin() + r);
    a.erase(a.begin(), a.begin() + 2);
    for (int i = 0; i < a.size(); i++)
    {
        cout<<a[i]<<" ";
    }

    
    /*
    vector<int>::iterator it;
    int sum=0;
    for(int it =a.begin(); it != a.end(); it++){
        if(*it % 2 ==0){
            sum+= *it;
        }
    }
    */
}