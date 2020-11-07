
#include <iostream>
#include <sstream>
#include <string>
#include<string.h>
	using namespace std;
	int max(int a, int b)
	{
		if (a >= b) return a;
		else return b;
	}
	double max(double a, double b)
	{
		if (a >= b) return a;
		else return b;
	}
	double max(double a, double b, double c)
	{
		int max = a;
		if (b >= max) max = b;
		if (c >= max) max = c;
		return max;
	}
	double max(double* seq, int n)
	{
		int max = 0;
		for (int i = 0; i < n; i++)
		{
			if (seq[i] >= max)
			{
				max = seq[i];
			}
		}
		return max;
	}
	int max(int* seq, int n)
	{
		int max = 0;
		for (int i = 0; i < n; i++)
		{
			if (seq[i] >= max)
			{
				max = seq[i];
			}
		}
		return max;
	}
	int max(int a, int b, int c)
	{
		int max = a;
		if (b >= max) max = b;
		if (c >= max) max = c;
		return max;
	}
	int main()
	{
		int (*f1)(int, int, int);    f1 = max;    // lấy địa chỉ hàm thứ nhất 
		double (*f2)(double, double, double);  f2 = max; // lấy địa chỉ hàm thứ 2
		int (*f3)(int*, int);    f3 = max;	// lấy địa chỉ hàm thứ 3
		double (*f4)(double*, int); f4 = max; // lấy địa chỉ hàm thứ 4 
		cout << f1 << endl << f2 << endl << f3 << endl << f4 << endl;
	}


