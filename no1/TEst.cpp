#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ifstream ifs("giang.txt");
	size_t n;
	int* arr;
	ifs >> n;
	arr = new int[n];
	for (int i = 0; i < n; i++)
	{
		ifs >> arr[i];
	}
}





