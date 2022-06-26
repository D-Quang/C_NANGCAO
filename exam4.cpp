#include<iostream>
using namespace std;
#include<cmath>

bool Kiem_Tra_So_Chinh_Phuong(int n)
{
	int ketqua = (int)sqrt(n * 1.0);
	if(ketqua * ketqua == n)
	{
		return true; // n là số chính phương
	}
	return false; // n không phải là số chính phương
}

// hàm nhập mảng
void Nhap_Mang(int a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		cout << "\nNhap phan tu a[" << i << "] = ";
		cin >> a[i];
	}
}

// hàm xuất mảng
void Xuat_Mang(int a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		cout << a[i] << "  ";
	}
}

// xóa phần tử tại vị trí bất kì
void Xoa(int a[], int &n, int vitrixoa)
{
	for(int i = vitrixoa + 1; i < n; i++)
	{
		a[i - 1] = a[i];
	}
	n--; // số lượng phần tử mảng giảm
}

void Xoa_Phan_Tu_Trung(int a[], int &n)
{
	// vòng lặp duyệt từng phần tử của mảng
	for(int i = 0; i < n - 1; i++)
	{
		// vòng lặp duyệt các phần tử nằm sau a[i] - nếu phía sau a[i] mà có phần tử a[j] trùng với a[i] thì xóa phần tử a[j] đi - tương đương xóa phần tử tại vị trí j
		for(int j = i + 1; j < n; j++)
		{
			if(a[i] == a[j])
			{
				Xoa(a, n, j);
				i--; // nếu không có i-- sẽ xảy ra lỗi gì ?
			}
		}
	}
}


int main()
{

	int a[100]; 
	int n; 
	cout << "\nNhap so phan tu vao mang: ";
	cin >> n;
	cout << "\n\n\t\tNHAP MANG\n";
	Nhap_Mang(a, n);
	cout << "\n\n\t\tXUAT MANG\n";
	Xuat_Mang(a, n);
	// gọi hàm xử lí
	Xoa_Phan_Tu_Trung(a, n);
	cout << "\n\n\t\tMang sau khi xoa phan tu trung\n";
	Xuat_Mang(a, n);
	system("pause");
	return 0;
}