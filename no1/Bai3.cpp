#include<iostream> 
using namespace std;
void nhap(int N, int* mangA) {
	for (int i = 0; i < N; i++) {
		cin >> mangA[i];
	}
}
int* sapxep(int N, int* mangA) {
	int tmp;
	for (int i = 0; i < N; i++) {
		for (int j = i + 1; j < N; j++) {
			if (mangA[i] > mangA[j]) {
				tmp = mangA[i];
				mangA[i] = mangA[j];
				mangA[j] = tmp;
			}
		}
	}
    return mangA;
}
int** tansuat(int N, int* mangA) {
    int i = 0, countA = 1, j, nA = 0;
    int tmpA[10];
    tmpA[0] = mangA[0];
    int tang[10];
    for (i = 1; i < N; i++)
    {
        int rev = 0;
        for (j = 0; j < countA; j++)
        {
            if (mangA[i] == tmpA[j])
            {
                rev = 1;
            }
        }
        if (rev != 1)
        {
            nA++;
            tmpA[nA] = mangA[i];
            countA++;
        }
    }
    for (i = 0; i < countA; i++) {
        tang[i] = 0;
        for (j = 0; j < N; j++) {
            if (tmpA[i] == mangA[j]) {
                tang[i]++;
            }
        }
    }
    for (int i = 0; i < countA; i++) {
        cout << "_Phan tu " << tmpA[i] << " xuat hien :" << tang[i] << endl;
  }


    return 0 ;
}
int main() {
    int mangA[100];
    int N; 
    cout << "Nhap so luong phan tu muon thao tac :"; cin >> N;
    nhap(N, mangA);
    cout << "\nSap xep cac phan tu theo thu tu tang dan : ";
    sapxep(N, mangA);
    for (int i = 0; i < N; i++) {
        cout << mangA[i] << " "; 
    }
    cout << "\nTan suat xuat hien " << endl;
    tansuat(N, mangA);
    cout << endl;
	return 0;
  }