DienTich[i] = sqrt(p * (p - h[i].d1.dodai(d1)) * (p - h[i].d3.dodai(d3)) * (p - h[i].d2.dodai(d2)));
            cout << "Nua chu vi =" << p;
            
            
                void maxDtich()
    {
        cout << "\nK:" << DienTich[0];
        int tmp=0;
        int j;
        for (int i = 0; i < 2; i++) {
            if (dt(i) > tmp) {
                tmp = dt(i);
                j = i;
            }
        }
        cout << "Tam giac [" << j + 1 << "] co dien tich lon nhat :" << tmp << endl;
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
    
    
    
    
    //DienTich = new double [2] ;
         double  p = (h[i].d1.dodai(h[i].d2) + h[i].d2.dodai(h[i].d3) + h[i].d1.dodai(h[i].d3))/2;
         DienTich[i] = sqrt(p * (p - h[i].d1.dodai(h[i].d2)) * (p - h[i].d3.dodai(h[i].d2)) * (p - h[i].d1.dodai(d3)));
