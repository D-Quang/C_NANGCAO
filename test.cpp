#include<iostream>
#include<vector>
using namespace std;

//Hàm 
int sumOfVector(vector<int> v){
    int res=0;
    for(int i=0; i<v.size(); i++){
        res+=v[i];
    }
    cout<<"\nTong cac phan tu trong vector: "<< res << endl;
    return res;
}

int sumOfOddElements(vector<int> v)
{
    int result = 0;
    vector<int>::iterator it;
    for (it = v.begin(); it != v.end(); it++) {
        if(*it%2!=0){
            result+= *it;
        }
    }
    cout<< "Tong so khong chia het cho 2: " <<result;
    return result;
}

//Để thay đổi kích thước của vector v về n
/*vector<int> Change(vector<int> v, int n){
    v.resize(n);
    return v;
}
*/

//Đổi chỗ vị vị trí trong vector
vector<int> SapXepVector(vector<int> v){
    for(int i=0; i<v.size(); i++){
        for(int j=i+1; j<v.size(); j++){
            if(v[i]>v[j]){
                swap(v[i], v[j]);
            }
        }
    }
    cout<< endl;
    cout<<"Vector sau khi sap xep la: "<< endl;
    for(int i=0; i<v.size(); i++){
        cout<<v[i] <<" ";
    }
    return v;
}

//Tích hai số lớn nhất trong vector
int maxProductOfAdjacentElements(vector<int> v){
    int max=v[0]*v[1];
    for(int i=1; i<v.size()-1; i++){
        if(v[i]*v[i+1]>max){
            max=v[i]*v[i+1];
        }
    }
    cout<< endl;
    cout<<"Tich hai so lon nhat trong vector: "<< max;
    return max;
}

vector<string> findLongestStrings(vector<string> arr){
    int max = 0;
    vector<string> result;

    for (int i = 0; i < arr.size(); i++) {
        if (max < arr[i].size()) {
            max = arr[i].size();
        }
    }
    for (int i = 0; i < arr.size(); i++) {
        if (max == arr[i].size()) {
            result.push_back(arr[i]);
        }
        cout<<result[i];
    }
    return result;
}

vector<int> removeElements(vector<int> v)
{
    vector<int>::iterator it;
    for (it = v.begin(); it != v.end(); it++) {
        v.erase(v.begin(), v.end());
    }
    return v;
}

int main(){
    //Khởi tạo vector các số nguyên a
    vector<int> a;
    a.push_back(1);
    a.push_back(3);
    a.push_back(2);
    a.push_back(4);
    // Sử dụng hàm size() để lấy ra số phần tử trong vector
    cout << "Size of vector a: " << a.size() << endl;

    // Bạn có thể dụng vòng lặp để duyệt vector giống với duyệt mảng
    for (int i = 0; i < a.size(); i++) {
        cout << a[i] << " ";
    }

    //sumOfVector(a);
    //sumOfOddElements(a);
    /*int n=5;
    Change(a,n);*/
    //SapXepVector(a);
    //maxProductOfAdjacentElements(a);
   
    /*vector<string> s;
    s.push_back("abd");
    s.push_back("aa");
    s.push_back("ad");
    s.push_back("vcd");
    s.push_back("aba");
    findLongestStrings(s);*/

    removeElements(a);
    a.erase(a.begin(),a.end());
    vector<int>:: iterator it;
	for(it = a.begin(); it != a.end(); it++) {
		cout << *it << " ";
	}
}
