#include<stdio.h>
#include<iostream>
#include<string>
#include<string.h>
using namespace std ; 
int main()
{
	char a[100] , b[100];
	gets(a);
	gets(b);
	if(strcmp(a,b)==0)
	{
		cout << " Hai chuoi giong nhau";
		
	}else
	{
		cout << "Hai chuoi khong giong nhau" ;
	}
	return 0;
}
