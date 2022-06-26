#include <iostream>
#include <math.h>
#include <vector>
using namespace std;
int CheckMax(vector<int> arr){
	int max=arr[0];
	int index=0;
	for(int i=1;i<arr.size();i++){
		if(arr[i]>max){
			max=arr[i];
			index=i;
		}

	}
	return index;
}
void checkVector(vector<int> arr,int x){
	int check=0;
	for(int i=0;i<arr.size();i++){
		if(arr[i]==x){
			check=1;
			break;
		}
	}
	if(check==1){
		cout<<"vi tri xuat hien phan tu "<<x<<" la: ";
		for(int i=0;i<arr.size();i++){
			if(arr[i]==x){
				cout<<i<<" ";
			}
		}
	}else{
		cout<<"khong co "<<x<<" trong vector";
	}
}
int main() {
	int n;
    cout<<"Nhap so phan tu cua vector: ";
	cin >> n;
	vector<int> arr(n);
	for(int i = 0; i < n; i++){
        cout<<"arr["<<i<<"]=";
		cin >> arr[i];
	}
	cout<<"vi tri cua max la: "<<CheckMax(arr)<<endl;
	checkVector(arr,3);
	return 0;
	
}