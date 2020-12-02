/* Mang max 100 phan tu , tim phan tu nho nhat va bieu dien 1.1
Sap xep mang tu lon den be 
2. viet chuong trinh nhap 4 tu A , B ,C  ,M .. Xet 3 truong hop
3.3. Viet chuong trinh nhap so nguyen duong N , va phan tich
*/
#include<stdio.h>
//int main()
//{
//	int n ;
//	printf("Nhap so nguyen duong n=");
//	scanf("%d" , &n);
//	int dem ;
//	for(int i =2 ; i<=n ; i++)
//	{
//		dem=0;
//		while(n%i==0)
//		{
//			dem++ ;
//			n/=i ;
//		}
//		if(dem)
//		{
//			printf("%d" , i);
//			if(dem>1) printf("^%d" , dem);
//			if(n>1)
//			{
//				printf(" * ");
//			}
//		}
//	}
//}
#include<stdio.h>
int main()
{
	char arr[4];
	int j;
	for(int i =0 ; i< 4 ; i++)
	{
		scanf("%s" , &arr[i]);
	}
	for(int i =0 ; i<4 ; i++)
	{
		if(arr[i] == 'M' || arr[i] == 'm')
		{
		  j=i;	
		}
	}
	if(j==0) printf("M o vi tri ben trai");
	else{
	if (j==3) printf("M o vi tri ben phai");
	else printf("M o vi tri giua");
}
	return 0 ;
}




























