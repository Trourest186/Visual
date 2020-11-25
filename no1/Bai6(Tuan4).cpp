#include<string.h>
#include<stdio.h>
#include<ctype.h>
int main()
{
	float arr1[] = {1,2 ,4} ;
	float arr2[] = {2 ,3 ,4};
	float arr3[10];
	int n , i , j;
	for(i =0 ; i<3 ; i++)
	{
		arr3[i] = arr1[i];
	}
	for(i=3 ; i<6 ; i++)
	{
		arr3[i]=arr2[i-3];
	}
	for(i=0 ; i <5 ; i++)
	{
		for(j=i+1 ; j<6 ; j++)
		{
			if(arr3[i] > arr3[j])
			{
				n=arr3[i];
				arr3[i]=arr3[j];
				arr3[j]=n;
			}
		}
	}
	for(i=0 ; i<6 ; i++)
	{
		printf("%5.1f" , arr3[i]);
	}
	return 0 ;
}
