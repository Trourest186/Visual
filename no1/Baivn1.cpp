#include<iostream>
using namespace std; 

void nhapds(int* x, int n)
{
	cout << "Nhap day so kieu int :" ;
	for (int i = 0 ; i < n; i++)
	{
		cin >> x[i];
	}
}
void nhapds(double* x, int n)
{
	cout << "Nhap day so kieu double :" ;
	for (int i = 0; i < n; i++)
	{
		cin >> x[i];
	}
}
int max(int x, int y)
{
	if (x >= y) return x;
	else return y;
}
double max(double x, double y)
{
	if (x >= y) return x;
	else return y;
}
int max(int* x, int n)
{
	int max = 0;
	for (int i = 0; i < n; i++)
	{
		if (x[i] > max) max = x[i];
	}
	return max;
}
double max(double* x, int n)
{
	double max = 0;
	for (int i = 0; i < n; i++)
	{
		if (x[i] > max) max = x[i];
	}
	return max;
}

int main()
{
	int a[5];
	double b[5];
	nhapds(a, 5);
	nhapds(b, 5);
	cout << "\nMax giua hai so kieu int 4 vs 3:" << max(4, 3) << endl;
	cout << "Max giua hai so kieu double 4.3 vs 5.9 :" << max(4.3, 5.9) << endl;
	cout << "Max cua day so int :" << max(a, 5) << endl;
	cout << "Max cua day so double" << max(b, 5) << endl;
  return 0;
}