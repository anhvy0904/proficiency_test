#include <iostream>
#include <set> 
using namespace std;

int main() {
    int n;
    cout << "Nhap so luong phan tu: ";
    cin >> n;
//khai bao mang, toi da 1000
    int a[1000];
    cout << "Nhap " << n << " phan tu:\n";
    for (int i = 0; i < n; ++i) {
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }

    set<int> tapPhanBiet; // set luu tru cac gia tri duy nhat 

    for (int i = 0; i < n; ++i) {
        tapPhanBiet.insert(a[i]);  // chen vao va tu dong b0 gia tri trung
    }

    cout << "So luong gia tri khac nhau trong mang la: " << tapPhanBiet.size() << endl;

    return 0;
}

