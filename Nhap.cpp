#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n, m; // n: s? lu?ng vé, m: s? lu?ng khách hàng
    cin >> n >> m;
    int* prices = new int[n];
    bool* sold = new bool[n](); // M?ng d? dánh d?u vé dã bán

    for (int i = 0; i < n; ++i) {
        cin >> prices[i]; // Ð?c giá c?a t?ng vé
    }

    sort(prices, prices + n); // S?p x?p giá vé m?t l?n

    while (m--) { // X? lý t?ng yêu c?u
        int current_price;
        cin >> current_price; // Ð?c giá vé khách hàng mu?n mua

        // Tìm vé chua bán có giá th?p nh?t không vu?t quá giá khách hàng mu?n mua
        int index = -1;
        for (int i = 0; i < n; ++i) {
            if (!sold[i] && prices[i] <= current_price) {
                index = i;
            } else if (prices[i] > current_price) {
                break; // Vì dã s?p x?p nên không c?n ki?m tra thêm
            }
        }

        if (index != -1) { // N?u tìm th?y
            cout << prices[index] << endl;
            sold[index] = true; // Ðánh d?u là dã bán
        } else { // N?u không tìm th?y
            cout << "-1" << endl;
        }
    }

    delete[] prices;
    delete[] sold;
    return 0;
}

