#include<iostream>
using namespace std;
struct Date {
	int year;
	int month;
	int day;
};
void setDate(Date& date, int day, int month, int year)
{
	date.day = day;
	date.month = month;
	date.year = year;
}
void addDay(Date& date, int n)
{
	date.day += n;
}
void addMonth(Date& date, int n)
{
	date.month += n;
}
void addYear(Date& date, int n)
{
	date.year += n;
}
void display(Date& date)
{
	cout << "Day :" << date.day << endl;
	cout << "Month :" << date.month << endl;
	cout << "Year :" << date.year << endl;
}
int main()
{
	Date d;
	setDate(d, 12, 9, 2010);
	display(d);
	cout << "Thay doi ngay thang nam: \n";
	addDay(d, 5);
	addYear(d, 1);
	addMonth(d, 2);
	d.month = 13;
	display(d);
	return 0;
}