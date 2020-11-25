#include<iostream>
#include<string.h>
using namespace std;

enum Sex { man, woman, bi_sexualism };
int currentyear() {
	return 2020;
}

class Person
{
private:
	char* name;
	int yob;
	Sex sex;
public:
	void my_malloc(int n) {
		name = new char[n];
	}
	void my_free()
	{
		delete[] name;
	}
	void set_person( Sex sex, int yob, char* s) {
		this->sex = sex;
		this->yob = yob;
		strcpy(this->name, s);
	}

	char* get_name() {
		return this->name;
	}
	int get_age() {
		return currentyear() - this->yob;
	}
	void display() {
		cout << "Name: " << name << "\t" << "Year of birth: " << yob << "\t";
		cout << "Sex: ";
		if (sex == 0)
			cout << "man";
		else if (sex == 1)
			cout << "women";
		else
			cout << "bi_sexualism";
	}
	friend ostream& operator<<(ostream& os, Person a) {
		os << "Name: " << a.name << "\t" << "Year of birth: " << a.yob << "\t";
		os << "Sex: ";
		if (a.sex == 0)
			os << "man";
		else if (a.sex == 1)
			os << "women";
		else
			os << "bi_sexualism";
		return os;
	}
};

int main() {
	Person tan;
	tan.my_malloc(30);
	Sex a = woman;
	char s[30] = "Nguyen Ba Tan";
	tan.set_person(a, 2001, s);
	cout << tan;

}
