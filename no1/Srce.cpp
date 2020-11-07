#include <conio.h>
#include <iostream.h>
#include <iomanip.h>
using namespace std;
typedef int MT[20][20];
void nhapmt(MT a, char* ten, int m, int n);
void inmt(MT a, char* ten, int m, int n);
void nhanmt(MT a, MT b, MT c, int m, int n, int p);
void nhapmt(MT a, char* ten, int n);
void inmt(MT a, char* ten, int n);
void nhanmt(MT a, MT b, MT c, int n);
void nhapmt(MT a, char* ten, int m, int n)
{
	for (int i = 1; i <= m; ++i)
		for (int j = 1; j <= n; ++j)
		{
				cin >> a[i][j];
		}
}
void nhapmt(MT a, char* ten, int n)
{
	nhapmt(a, ten, n, n);
}
void inmt(MT a, char* ten, int m, int n)
{
	cout << "Ma tran : " << ten;
		for (int i = 1; i <= m; ++i)
		{
			cout << " " ;
				for (int j = 1; j <= n; ++j)
					cout << setw(6) << a[i][j];
		}
}
void inmt(MT a, char* ten, int n)
{
	inmt(a, ten, n, n);
}
void nhanmt(MT a, MT b, MT c, int m, int n, int p)
{
	for (int i = 1; i <= m; ++i)
		for (int j = 1; j <= p; ++j)
		{
			c[i][j] = 0;
			for (int k = 1; k <= n; ++k)
				c[i][j] += a[i][k] * b[k][j];
		}
}
void nhanmt(MT a, MT b, MT c, int n)
{
	nhanmt(a, b, c, n, n, n);
}
void main()
{
	MT a, b, c, d; // d= abc
	MT u;
	clrscr();
	nhapmt(a, "A", 2); // A la ma tran vuong
	nhapmt(b, "B", 2); // B la ma tran vuong
	nhapmt(c, "C", 2, 3); // C la ma tran chu nhat
	nhanmt(a, b, u, 2);
	nhanmt(u, c, d, 2, 2, 3);
	inmt(a, "A", 2);
	inmt(b, "B", 2);
	inmt(u, "U = A*B", 2);
	inmt(c, "C", 2, 3);
	inmt(d, "D = U*C", 2, 3);
	getch();
}