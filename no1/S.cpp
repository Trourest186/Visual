#include<iostream>
#include<string>
using namespace std;
class Person {
private:
	string gioiTinh;
	string name;
	int day;
	int month;
	int year;
	string adress;
public :
	void setName(string name) {
		this->name = name;
	}
	void setngaySinh(int day, int month, int year) {
		this->day = day;
		this->month = month;
		this->year = year;
	}
	void setgioiTinh(string gioiTinh) {
		this->gioiTinh = gioiTinh;
	}
	void showif() {
		cout << "Name :" << this->name << endl;
		cout << "gioiTinh :" << this->gioiTinh << endl;
		cout << "NgaySinh :" << this->day << "/" << this->month << "/" << this->year << endl;

	}
	string getName() {
		return this->name;
	}
	string getgioiTinh() {
		return this->gioiTinh;
	}
	void getNgaysinh() {
		string ngaySinh = "";
		ngaySinh += (char)(day + '0') + "/" + (char)(month + '0') + "/" + (char)(year + '0');
	}
};
