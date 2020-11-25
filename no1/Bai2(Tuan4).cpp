#include<stdio.h>
#include<string.h>
  int main()
  {
  	int N=0 ; 
  	do{
  		float x[N];
  		scanf("%f" , &x[N]);
  		N++ ;
	  }while(sizeof(x[N])==4);
	  return 0 ;
  }
