#include<iostream>
using namespace std;
class PS
{
private :
	int a, b;
public:
	 ostream& operator<< (ostream& os) {
		os << a << "/" << b;
		return os;
	}
     istream& operator>> (istream& is) {
         is >> a >> b;
         return is;
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
    static PS rutgon()
    {
        a = a / uscln(a, b);
        b = b / uscln(a, b);
        
    }
    PS operator +(PS p1, PS p2) {
        PS p;
        p.a = p1.a * p2.b + p2.a * p1.b;
        p.b = p1.b * p2.b;
        return rutgon(p);
    }
    PS operator -(PS p1, PS p2)
    {
        PS p;
        p.a = p1.a * p2.b - p2.a * p1.b;
        p.b = p1.b * p2.b;
        return rutgon(p);
    }
    PS operator *(PS p1, PS p2)
    {
        PS p;
        p.a = p1.a * p1.b;
        p.b = p2.b * p2.b;
        return rutgon(p);
    }
    PS operator /(PS p1, PS p2)
    {
        PS p;
        p.a = p1.a * p2.b;
        p.b = p1.b * p2.a;
        return rutgon(p);
    }
};

