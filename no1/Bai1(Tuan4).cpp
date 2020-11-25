#include<stdio.h>
#include<iostream>
using namespace std ;
int main()
{
	int N ;
	cout <<" Nhap so luong phan tu " ; cin>> N;
	int*x = new int [N];
	for(int i =0 ; i < N ; i++)
	{
		cin >> x[i];
	}
	cout <<"Hien thi :" << endl ;
	for (int i= N-1 ; i>=0 ; i--)
	{
		cout << x[i] << " " ;
	}
	
	return 0 ;
	
}
