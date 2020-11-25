#include<stdio.h>
#include<string.h>
#include<ctype.h>
 int main()
 {
 	char str[] ="heloo word" ;
 	char s[100][100];
 	int i , n=0  , count = 0 ;
 	for(int i= 0 ;i<strlen(str) ; i++)
 	{
 		if(str[i] == ' ' && str[i+1] != ' ')
 		{
 			strncpy(s[count] ,str , i);
 			strcpy(&str[0] , &str[i+1]);
 			count ++ ;
 			i =0 ;
		 }
	 }
	 strcpy(s[count] , str);
	 for(int i = 0 ;i<=count ; i++)
	 {
	 	puts(s[i]);
	 }
	 return 0 ;
 }
 
