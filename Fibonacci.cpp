#include <iostream>
using namespace std;
int fibonacci(int n) {
	// neu n bang 1 hoac 2 thi tra ve 1 :>
    if (n == 1 || n == 2)
        return 1;
        // lon hon 2,theo công thuc de quy: F(n) = F(n-1) + F(n-2) :)))
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    do {
        cout << "Nhap n (n <= 30): ";
        cin >> n;
        // kiem tra dieu kien n <= 30
        if (n <= 0 || n > 30) {    
            cout << "Gia tri khong hop le. Vui long nhap lai.\n";
        }
    } while (n <= 0 || n > 30);

    // in day Fibonacci tu F1 -> Fn
    cout << "Day Fibonacci tu F(1) den F(" << n << "):\n";
    for (int i = 1; i <= n; i++) {
        cout << "F(" << i << ") = " << fibonacci(i) << endl;
    }

    return 0;
}

