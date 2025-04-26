#include <iostream>
using namespace std;

int nhapSoNguyenDuong() {
    int n;
    while (true) {
        cout << "Nhap so nguyen duong N: ";
        cin >> n;
		//neu nhap sai hoac nhap be hon 0 thi nhap lai nhe
        if (cin.fail() || n <= 0) {
            cout << "Nhap lai.\n";
            //nhap lai nen se clear lai cho sach
            cin.clear();
            cin.ignore(1000, '\n'); 
        } else {
            return n;
        }
    }
}
//nhap mang vao
void nhapMang(int arr[], int n) {
    cout << "Nhap " << n << " so nguyen:\n";
    //kiem tra mang co bao nhieu r in phan tu ra
    for (int i = 0; i < n; i++) {
        cout << "Phan tu [" << i << "]: ";
        cin >> arr[i];
    }
}
//tim phan tu co so lon nhat chia het cho 3
int timMaxChiaHetCho3(int arr[], int n) {
    int max = -1;
    bool coSoChiaHet = false;

    for (int i = 0; i < n; i++) {
        if (arr[i] % 3 == 0) {
            if (!coSoChiaHet || arr[i] > max) {
                max = arr[i];
                coSoChiaHet = true;
            }
        }
    }

    if (coSoChiaHet) return max;
    else return -1;
}

int main() {
    const int MAX = 1000;   
    int N = nhapSoNguyenDuong();
    int a[MAX];
    int ketQua;

    do {
        nhapMang(a, N);
        ketQua = timMaxChiaHetCho3(a, N);

        if (ketQua == -1) {
            cout << "Khong co\n";
        }

    } while (ketQua == -1);

    cout << "So lon nhat chia het cho 3: " << ketQua << endl;
    return 0;
}

