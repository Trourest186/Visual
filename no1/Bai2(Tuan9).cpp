#include<iostream>
#include<string>
#include<math.h>
#include<stdio.h>
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
    Diem d1, d2, d3; // Cac toa do dinh cua 1 tam giac 
    Tamgiac* h;
    double* DienTich;
    int lose[5];
public:
    void nhapsl() {
        cout << "Nhap so luong tam giac can xet :"; cin >> n;
        h = new Tamgiac[n];
        int m = 0;
        for (int i = 0; i < n; i++)
        {
            cout << "Tam giac [" << i + 1 << "] :" << endl;
            h[i].d1.nhapsl();
            h[i].d2.nhapsl();
            h[i].d3.nhapsl();
            if ((h[i].d1.dodai(h[i].d2) + h[i].d2.dodai(h[i].d3) > h[i].d3.dodai(h[i].d1)) || (h[i].d2.dodai(h[i].d3) + h[i].d1.dodai(h[i].d3) > h[i].d1.dodai(h[i].d2)) || (h[i].d1.dodai(h[i].d3) + h[i].d2.dodai(h[i].d1) > h[i].d2.dodai(h[i].d3))) {
                cout << "Tao thanh tam giac" << endl;
            }
            else {
                cout << "3 diem thang hang !" << endl;
                lose[i] = i;
                
            }
        }

    }
    void in() {
        cout << "==Hien thi cac toa do cua tam giac==" << endl;
        for (int i = 0; i < n; i++)
        {
            if (i != lose[i]) {
                cout << "-Tam giac [" << i + 1 << "] co toa do ba dinh la :" << endl;
                h[i].d1.in(); cout << " / "; h[i].d2.in(); cout << " / "; h[i].d3.in();
                cout << "\n";
            }
            else {
                continue;
            }
        }
    }
    Tamgiac taotg(Diem e1, Diem e2, Diem e3 ) // DK de duoc mot tam giac
    {
        Tamgiac t;
        t.d1 = e1; t.d2 = e2; t.d3 = e3; // Phuong thuc chat luong :Can ghi nho!!!!
        if ((e1.dodai(e2) + e2.dodai(e3) > e3.dodai(e1)) || (e1.dodai(e3) + e2.dodai(e3) > e2.dodai(e1)) || (e1.dodai(e3) + e2.dodai(e1) > e2.dodai(e3))) {
            cout << "3 toa do tao thanh mot tam giac" << endl;
            return t;
        }
        else cout << "\n Ba diem thang hang\n";
        
    }
    double dt(int i) {
        DienTich = new double[2];
        double a, b, c ,p;
        a = h[i].d1.dodai(h[i].d2);
        b = h[i].d2.dodai(h[i].d3);
        c = h[i].d1.dodai(h[i].d3);
        p = (a + b + c) / 2;
         DienTich[i] = sqrt(p * (p - a) * (p - b) * (p - c));
         return DienTich[i];
    }
    void maxDtich()
    {
        int tmp = 0;
        int j;
        for (int i = 0; i < 2; i++) {
            if (i != lose[i]) {
                if (dt(i) > tmp) {
                    tmp = dt(i);
                    j = i;
                }
            }
            else {
                continue;
            }
        }
        cout << " =>Tam giac [" << j + 1 << "] co dien tich lon nhat :" << tmp << endl;
    }
};
int main()
{
    Tamgiac a;
    a.nhapsl();
    a.in();
    cout << "So sanh dien tich cua cac tam giac :" << endl;
    a.maxDtich();
    return 0;
}
