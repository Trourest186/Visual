#include<iostream>
#include<stdio.h>
using namespace std;
class PS {
private :
    int a, b;
public :
    friend istream& operator >> (istream& is, PS& p) {
        is >> p.a >> p.b;
        return is;
    }
    friend  ostream& operator << (ostream& os, PS p) {
        os << p.a << "/" << p.b;
        return os;
    }
    static int uscln(int x, int y) {
        if (x == 0 || y == 0)
        {
            return x + y;
        }
        while (x != y) {
            if (x > y) x = x - y;
            else y = y - x;
        }
        return x;
    }
    static PS rutgon(PS p) {
        PS q;
        int x;
        x = uscln(p.a, p.b);
        q.a = p.a / x;
        q.b = p.b / x;
        return q;
    }
    friend PS operator -(PS p1, PS p2) {
        PS p;
        p.a = p1.a * p2.b - p2.a * p1.b;
        p.b = p1.b * p2.b;
        return rutgon(p);
    }
    friend PS operator +(PS p1, PS p2) {
        PS p;
        p.a = p1.a * p2.b + p2.a * p1.b;
        p.b = p1.b * p2.b;
        return rutgon(p);
    }
    friend PS operator /(PS p1, PS p2) {
        PS p;
        p.a = p1.a * p2.b;
        p.b = p1.b * p2.a;
        return rutgon(p);
    }
    friend PS operator *(PS p1, PS p2) {
        PS p;
        p.a = p1.a * p1.b;
        p.b = p2.b * p2.b;
        return rutgon(p);
    }
};
int main()
{
    PS p, q, z, u, v;
    PS tu, mau, s;
    printf("\nNhap phan so p: "); cin >> p;
    printf("\nNhap phan so q: "); cin >> q;
    printf("\nNhap phan so z: "); cin >> z;
    printf("\nNhap phan so u: "); cin >> u;//s = (p - q * z) / (u + v)
    printf("\nNhap phan so v: "); cin >> v;
    tu = q * z;
    tu = p - tu;
    mau = u + v;
    s = tu / mau;
    printf("\nPhan so s= "); cout << s;
}