#include<iostream>
using namespace std;
class Date {
	int day;
	int month;
	int year;
public:
	void set_date(int d, int m, int y) {
		day = d;
		month = m;
		year = y;
	}
	int get_day() { return day; }
	int get_month() { return month; }
	int get_year() { return year; }
	void add_year(int n) {
	this->year += n;
}
	
};
void main() {
	Date d;
	d.set_date(1, 1, 2010);
	d.add_year(10);
	//d.day = 10; //??
	//d.month = 10; //??
	//d.year = 2009;//??
	//int i = d.day;//??
	int day = d.get_day();
	int month = d.get_month();
	int year = d.get_year();
}

