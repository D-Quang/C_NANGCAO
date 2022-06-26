#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
    string name;
    cout<<"Nhap full ten: "<< endl;
    getline(cin, name, '.');
    cout<<name<<endl; //Nhap vao ki tu ke ca khoang trang
    

   //lay do dai chuoi
   string my_favorite_quote = "By my will, this shall be finished";
   cout<< my_favorite_quote.size()<< endl;
   cout<< my_favorite_quote.length()<< endl;

   //Ham empty kiem tra phan tu co rong hay khong
   string name1 = "Hello";
   if(name.empty()){
       cout<<"Rong!"<< endl;
   }else{
       cout<<"Phan tu khong rong"<< endl;
   }

   //clear() xoa du lieu chuoi
   string str1 = "Cho danh";
   cout<<str1<< endl;
   str1.clear();
   cout<<str1<< endl;

   //truy cap phan tu trong string
   string str2 = "Learn from others people";

    for(int i = 0; i <= str2.length() - 1; i++)	{
	cout << str2[i] << " ";
    }

    /*
    //truy xuat phan tu dau tien va phan tu cuoi cung
    string sample = "Access to the first and the last element";
    cout << "First: " << sample.font() << endl;
    cout << "Last: " << sample.back() << endl;
    */

   //Thay doi kieu du lieu trong string
   //Nối thêm 1 kí tự vào sau string:
    string str3 = "A sentence must end with a dot";
    str3.push_back('.');
    cout<< str3<< endl;

    //Xóa phần tử cuối cùng của string:
    /*
    string str4 = "The dot will be removed.";
    if(!str4.empty())
	str4.pop_back();
    */

   //Nối chuỗi kí tự vào sau string:
   //Cach 1:
    string str5 = "";
    str5.append("Le");
    str5.append(" ");
    str5.append("Tran");
    str5.append(" Dat");
    cout<<str5<<" ";

    //Cach 2:
    string str6 = "";
    str6 += "Use \"+=\" operator ";
    str6 += "to append string";
    cout<<str6<<" ";

    //Chèn một string vào vị trí bất kì trong string:
    string str7 = "how to use.";
    string str8 = "i will introduce you ";
    cout << str7 << endl;
    str7.insert(0, str8);
    cout << str7 << endl;
    str7.insert(str7.length() - 1, " string in C++");
    cout << str7 << endl;

    //Thay thế một phần của string:
    string my_string = "This string will be replaced";
    cout << my_string << endl;

    my_string.replace(20, 8, "changed"); //20 vi tri dau va sưar 8 vị trí cuối bằng changed
    cout << my_string << endl;

    //So sanh 2 string
    string str9 = "This is a string";
    string str10 = "This is a string";

    if(str9.compare(str10) == 0)	{
	    cout << "str1 and str2 are equal" << endl;		
    }
    else{
	    cout << "str1 ans str2 are not equal" << endl;
    }

    //Giá trị trả về lớn hơn 0:
    string str11 = "abcDEF";
    string str12 = "abcdef";
    str12.compare(str11);
    cout<< str12<< endl;
}