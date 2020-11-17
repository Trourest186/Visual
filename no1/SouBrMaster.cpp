#include<iostream>
using namespace std;
int main()
{
	int a[] = { 1, 2, 3, 4 };
	int* p1 = &a[0];
	int* p2 = &a[0]+1;
	cout << "Gia tri :" << *p2;

}





