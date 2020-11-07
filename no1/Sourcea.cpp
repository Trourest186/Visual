//Chuong trình sau th?c hi?n phép nhân ma tr?n : D = A * B * C
//Trong dó : A, B là các ma tr?n vuông, C là ma tr?n ch? nh?t.Trong chuong trình có 3 c?p hàm trùng tên d? th?c hi?n 3 nhi?m v?(nhung trên hai d?i tu?ng khác nhau là ma tr?n vuông và ch? nh?t)
//Nh?p ma tr?n
//Nhân hai ma tr?n
//In ma tr?n
//typedef int MT[20][20];
//void nhapmt(MT a, char* ten, int m, int n); //nhap ma tran chu nhat 
//void inmt(MT a, char* ten, int m, int n); //in ma tran chu nhat
//void nhapmt(MT a, char* ten, int n); //nhap ma tran vuong
//void intmt(MT a, char* ten, int n); //in ma tran vuong
//void nhanmt(MT a, MT b, MT c, int m, int n, int p); //nhan 2 ma tran chu nhat
//void nhanmt(MT a, MT b, MT c, int n); //nhan hai ma tran vuong
#include<iostream>
using namespace std;
typedef int MT[20][20];
void nhapmt(MT a, char* ten, int m, int n)
{// Nhap hang va cot ma tran hinh chu nhat
	cout << "===Ma tran " << ten << " ===" << endl;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> a[i][j];
		}
	}
}
void nhapmt(MT a, char* ten, int n)
{ // Nhap hang va cot cua ma tran vuong
	cout << "===Ma tran " << ten << " ===" << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> a[i][j];
		}
	}
}
void inmt(MT a, char* ten, int m, int n)
{
	cout << "-> Hien thi " << ten << ":" << endl;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << a[i][j] << "  ";
		}
		cout << endl;
	}
}
void inmt(MT a, char* ten, int n) // dcm cai char y nghia vcl
{
	cout << "-> Hien thi " << ten << ":" << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << a[i][j];
		}
		cout << endl;
	}
}
void nhanmt(MT a, MT b, MT u, int n) // Nhan hai ma tran vuong
{
	int tmp1 = 0, m = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; i++) {
			for (int x = 0; x < n; x++)
			{
				tmp1 += a[i][x] * b[j + m][j];
				m++;
			}
			u[i][j] = tmp1;
			m = 0;
		}
		tmp1 = 0;
	}
	cout << "hien thi =" << u[0][0];
}
int main()
{
	MT a, b, c;
	MT u;
	int m, n;
	int x, y;
	nhapmt(a, "A", 2); // Ma tran vuong : 1 2 3 4
	nhapmt(b, "B", 2); // 5 6 7 8
	inmt(a, "A", 2);
	inmt(b, "B", 3);
	nhanmt(a, b, u, 2);
	cout << endl;
	inmt(u, "U = A*B", 2);
	return 0;
}