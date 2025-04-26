#include <iostream>
#include <iomanip> 
using namespace std;

struct SinhVien {
    string ten;
    float toan, ly, hoa;
    float diemTB;
};

// Hàm nhap thông tin 1 sinh viên
void nhapThongTin(SinhVien &sv) {
    cout << "Nhap ten sinh vien: ";
    cin.ignore(); 
    getline(cin, sv.ten);

    cout << "Nhap diem Toan: ";
    cin >> sv.toan;

    cout << "Nhap diem Ly: ";
    cin >> sv.ly;

    cout << "Nhap diem Hoa: ";
    cin >> sv.hoa;

    // Tính diem trung bình
    sv.diemTB = (sv.toan + sv.ly + sv.hoa) / 3;
}

// Hàm in sinh viên có diem TB >= 8
void inSinhVienGioi(SinhVien ds[], int n) {
    cout << "\nDanh sach sinh vien co diem trung binh >= 8:\n";
    bool coSinhVien = false;

    for (int i = 0; i < n; i++) {
        if (ds[i].diemTB >= 8) {
            cout << "------------------------------- " << ds[i].ten << "------------------------------- "
                 << "  Diem TB: " << fixed << setprecision(2) << ds[i].diemTB << endl;
            coSinhVien = true;
        }
    }

    if (!coSinhVien) {
        cout << "Khong co sinh vien nao dat diem trung binh >= 8.\n";
    }
}

int main() {
    const int MAX = 1000;
    SinhVien danhSach[MAX];
    int n;
    // Nhap so luong sinh vien
    do {
        cout << "Nhap so luong sinh vien: ";
        cin >> n;
        if (n <= 0 || n > MAX) {
            cout << "Nhap lai.\n";
        }
    } while (n <= 0 || n > MAX);
    // Nhap danh sach sinh vien
    for (int i = 0; i < n; i++) {
        cout << "\nNhap thong tin sinh vien cute " << i + 1 << ":::::::::::::::\n";
        nhapThongTin(danhSach[i]);
    }
    // In sinh vien gioi
    inSinhVienGioi(danhSach, n);

    return 0;
}

