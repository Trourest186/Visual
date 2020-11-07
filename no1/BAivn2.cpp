//Chương trình sau thực hiện phép nhân ma trận : D = A * B * C
//Trong đó : A, B là các ma trận vuông, C là ma trận chữ nhật.Trong chương trình có 3 cặp hàm trùng tên để thực hiện 3 nhiệm vụ(nhưng trên hai đối tượng khác nhau là ma trận vuông và chữ nhật)
//Nhập ma trận
//Nhân hai ma trận
//In ma trận
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
	cout << "===Ma tran " << ten <<" ===" << endl;
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
void inmt(MT a, char* ten, int m, int n) // m: hang ma tran 
{                                        // n: cot ma tran
	cout << "-> Hien thi "<<ten <<" :" << endl;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "  "<< a[i][j] << "  " ;
		}
		cout << endl;
	}
}
void inmt(MT a, char* ten, int n)
{
	cout << "-> Hien thi "<<ten <<" :" << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout <<"  "<< a[i][j] <<"  ";
		}
		cout << endl;
	}
}
void nhanmt(MT a, MT b, MT u, int n)   // n : hang va cot ma tran hinh vuong 
{
	int tmp1=0  ;
	for(int i=0 ; i<n ; i++ )
	{
		for(int j =0 ; j<n ; j++){
		for(int x= 0 ; x<n ; x++)
		{
			tmp1+=a[i][x] * b[x][j];
		}
		u[i][j] = tmp1;
		tmp1=0;
	}
	}
}
void nhanmt(MT u, MT c, MT v, int m, int n, int p) // p : cot ma tran hinh chu nhat
{                                                  // n : hang va cot ma tran hinh vuong 
	int tmp1=0  ;                                  // m : cot ma tran hinh chu nhat
	for(int i=0 ; i<m ; i++ )
	{
		for(int j =0 ; j<p ; j++){
		for(int x= 0 ; x<n ; x++)
		{
			tmp1+=u[i][x] * c[x][j];
		}
		v[i][j] = tmp1;
		tmp1=0;
	}
	}
}

int main()
{
	MT a , b ,c;
	MT u ,v ;  // u :Tich hai ma tran vuong , v : Ket qua cuoi cung
	nhapmt(a, "A", 2); // Ma tran vuong
	nhapmt(b, "B", 2); // Ma tran vuong
	nhapmt(c, "C" , 2 ,3); // Ma tran hinh chu nhat
	inmt(a, "A", 2);
	inmt(b, "B", 2);
	inmt(c, "C" ,2 , 3);
	nhanmt(a,b,u,2); // Nhan hai ma tran vuong u = axb 
	nhanmt(u,c,v , 2 , 2, 3); // Nhan hai ma tran v=uxc
	inmt(u,"U=AxB" , 2);
	inmt(v ,"D=AxBxC" , 2, 3);
	
	
	return 0;
}
