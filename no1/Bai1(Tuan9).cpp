#include<iostream>
#include<string>
using namespace std;
class HinhCN {
private :
	int d, r;
public:
    void nhapsl()
    {
        cout << "\nNhap chieu dai rong: ";
        cin >> d >> r;
    }
    void in()
    {
        cout << "\n Chieu dai = " << d;
        cout << "\n Chieu rong = " << r;
    }
    int dientich() { return d * r; }
    int chuvi() { return 2 * (d + r); }
};

class DayHCN {
private:
    int n;
    HinhCN* h;
public:
    int nhapsl() {
        cout << "Nhap so luong hinh chu nhat :"; cin >> n;
        h = new HinhCN[n];
        for (size_t i = 0; i < n; i++) {
            cout << "Nhap thong so dai /rong cua hinh chu nhat [" << i + 1 << "]:" << endl;
            h[i].nhapsl();
        }
        return n;
    }
    void showif() {
        for (size_t i = 0; i < n; i++)
        {
            cout << "\nThong tin cua hinh chu nhat [" << i + 1 << "]:" << endl;
            h[i].in();
        }
    }
    void dtmax() {
        int tmp = 0;
        int x;
        for (size_t i = 0; i < n; i++)
        {
            if (h[i].dientich() > tmp) {
                tmp = h[i].dientich();
                x = i;
            }
        }
        cout << "Hinh chu nhat [" << x + 1 << "] co dien tich lon nhat :" << tmp << endl;
    }
    void cvmax() {
        int tmp = 0;
        int x;
        for (size_t i = 0; i < n; i++)
        {
            if (h[i].chuvi() > tmp) {
                tmp = h[i].chuvi();
                x = i;
            }
        }
        cout << "Hinh chu nhat [" << x + 1 << "] co chu vi lon nhat :" << tmp << endl;
    }
    
};
int main()
{
    DayHCN a;
    a.nhapsl();
    cout << "\n";
    a.showif();
    cout << "\nTim dien tich lon nhat " <<  endl;
    a.dtmax();
    cout << "Tim chu vi lon nhat" << endl; 
    a.cvmax();
    return 0;
}