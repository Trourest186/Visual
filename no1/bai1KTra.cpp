#include<iostream>
#include<string.h>
using namespace std;

enum Sex { man, woman, bi_sexualism };

struct Person
{
	char* name;
	int yob;
	Sex sex;
};

void my_malloc(struct Person a, int n) {
	a.name = new char[n];
}

void my_free(struct Person a)
{
	delete[] a.name;
}
void setPerson(struct Person a, Sex sex, int yob, char* s) {
	a.sex = sex;
	a.yob = yob;
	strcpy(a.name, s);
}

char* getName(struct Person a) {
	return a.name;
}

int main() {
	Person tan;
	char a[30] = "Nguyen Ba Tan";
	my_malloc(tan, 30);
	setPerson(tan, man, 2001, a);
	cout << tan.name << endl << tan.yob << endl << tan.sex;
}
