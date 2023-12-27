#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n, m; // n: s? lu?ng v�, m: s? lu?ng kh�ch h�ng
    cin >> n >> m;
    int* prices = new int[n];
    bool* sold = new bool[n](); // M?ng d? d�nh d?u v� d� b�n

    for (int i = 0; i < n; ++i) {
        cin >> prices[i]; // �?c gi� c?a t?ng v�
    }

    sort(prices, prices + n); // S?p x?p gi� v� m?t l?n

    while (m--) { // X? l� t?ng y�u c?u
        int current_price;
        cin >> current_price; // �?c gi� v� kh�ch h�ng mu?n mua

        // T�m v� chua b�n c� gi� th?p nh?t kh�ng vu?t qu� gi� kh�ch h�ng mu?n mua
        int index = -1;
        for (int i = 0; i < n; ++i) {
            if (!sold[i] && prices[i] <= current_price) {
                index = i;
            } else if (prices[i] > current_price) {
                break; // V� d� s?p x?p n�n kh�ng c?n ki?m tra th�m
            }
        }

        if (index != -1) { // N?u t�m th?y
            cout << prices[index] << endl;
            sold[index] = true; // ��nh d?u l� d� b�n
        } else { // N?u kh�ng t�m th?y
            cout << "-1" << endl;
        }
    }

    delete[] prices;
    delete[] sold;
    return 0;
}

