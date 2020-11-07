#include<stdio.h>
#include<iostream>
  using namespace std ;
struct thiSinh{
	string c ;
	float diem ;
};
void hoanVi(thiSinh &x , thiSinh &y){
	thiSinh tmp ;
	tmp = x ;
	x= y ;
	y=tmp ;
}
void sapXep(thiSinh* a ){
	for(int i =0 ; i< 3 ; i++){
		for(int j = i+1 ; j <3 ; j++){
			if(a[i].diem < a[j].diem ){
				hoanVi(a[i] , a[j]);
			}
		}
	}
}
int main(){
	struct thiSinh danhSach[3];
	for(int i =0 ; i< 3 ; i++){
		cout << "Ten thi sinh [" << i+1 << "]:" ; getline(cin,danhSach[i].c) ;
		cout << "Diem thi sinh :"  ; cin >> danhSach[i].diem ;
		getchar();
	}
	cout << "\n Sap xep day thi sinh theo thu tu giam dan " << endl ;
	sapXep(danhSach);
	for(int i =0  ; i< 3 ; i++){
		cout << danhSach[i].c  << "-" << danhSach[i].diem << endl ;
	}
}






























