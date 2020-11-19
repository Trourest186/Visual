#include<iostream>
#include<string>
using namespace std;
class Diem {
private:
    double x, y; // toa do 1 trong ba dinh cua tam giac
public:
    void nhapsl()
    {
        cout << "\nToa do x, y: ";
        cin >> x >> y;
    }
    void in()
    {
        cout << "x = " << x << "  " << "y = " << y;
    }
    double dodai(Diem d2) // do dai 1 canh cua 1 tam giac
    {
        return sqrt(pow(x - d2.x, 2) + pow(y - d2.y, 2));
    }
};
class Tamgiac {
private:
    int n;
    Diem d1, d2, d3; // Cac canh cua 1 tam giac 
    Tamgiac* h;
public:
    
    void nhapsl() {
        int n;
        cout << "Nhap so luong tam giac can xet :"; cin >> n;
        h = new Tamgiac[n];
        for (int i = 0; i < n; i++)
        {
            cout << "Tam giac [ " << i + 1 << "] :" << endl;
            h[i].d1.nhapsl();
            h[i].d2.nhapsl();
            h[i].d3.nhapsl();
        }
    }
    void in() {
        cout << "Hien thi cac toa do cua tam giac" << endl;
        cout << "Gia tri cua n=" << n << endl;
        for (int i = 0; i < 2; i++)
        {
            cout << "Tam giac [" << i+1 << "] co toa do ba dinh la :" << endl;
            h[i].d1.in(); cout << " / "; h[i].d2.in(); cout << " / "; h[i].d3.in();
            cout << "\n";

        }
    }
    
    static Tamgiac taotg(Diem e1, Diem e2, Diem e3) // DK de duoc mot tam giac
    {
        Tamgiac t;
        t.d1 = e1; t.d2 = e2; t.d3 = e3; // Phuong thuc chat luong :Can ghi nho!!!!
        if ((e1.dodai(e2) + e2.dodai(e3) > e3.dodai(e1)) || (e1.dodai(e3) + e2.dodai(e3) > e2.dodai(e1)) || (e1.dodai(e3) + e2.dodai(e1) > e2.dodai(e3))) {
            return t;
        }
        else cout << "\n Ba diem thang hang";
    }
    double dt();
    Tamgiac maxdt(Tamgiac t2);
};
int main()
{
    Tamgiac a;
    a.nhapsl();
    a.in();
    return 0;
}
