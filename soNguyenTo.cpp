#include <iostream>
using namespace std;
//kiem tra co phai la so nguyen to hay k :3333333
bool laSoNguyenTo(int n) {
	//be hon 2 thi tam piet
    if (n < 2) 
		return false;
    for (int i = 2; i * i <= n; ++i)
        if (n % i == 0)
            return false;
    return true;
}

int main() {
    int N;
    cout << "Nhap so nguyen duong N: ";
    //nhap so nguyen duong
    cin >> N;

    if (N <= 2) {
        cout << "Khong co so nguyen to" << endl;
    } else {
        cout << "Cac so nguyen to nho hon " << N << " la: ";
        for (int i = 2; i < N; ++i) {                   
            if (laSoNguyenTo(i)) {
                cout << i << " ";
            }
        }
        cout << endl;

    }

    return 0;
}

