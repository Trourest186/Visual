#include<iostream>
using namespace std;
void nhapDs(double* a, int N) {
	for (size_t i = 0; i < N; i++) {
		cin >> a[i];
	}
}
void hoanVi(double& x, double& y) {
	double tmp  ;
	tmp =x ;
	x = y;
	y = tmp;

}
void sapXep(double* a, int N) {
	for (size_t i = 0; i < N; i++) {
		for (size_t j = i + 1; j < N; j++) {
			if (a[i] > a[j]) {
				hoanVi(a[i], a[j]);
			}
		}
	}
}

int main() {
	
	double A[100];
	nhapDs(A, 10);
	sapXep(A, 10);
	for (size_t i = 0; i < 10; i++) {
		cout << A[i] << " ";
	}
	return 0;
}