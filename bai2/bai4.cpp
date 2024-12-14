#include<bits/stdc++.h>
using namespace std;
// kiểm tra xem mã vị trí (r1, c1) và (r2, c2) ăn nhau không
bool can(int r1, int c1, int r2, int c2) {
    int dr = abs(r1 - r2);
    int dc = abs(c1 - c2);
    return (dr == 2 && dc == 1) || (dr == 1 && dc == 2);
}

// số cách đặt 2 con mã không ăn nhau
int count(int k) {
    int d = 0;
    // Duyệt qua tất cả các cặp vị trí trên bàn cờ
    for (int r1 = 0; r1 < k; ++r1) {
        for (int c1 = 0; c1 < k; ++c1) {
            for (int r2 = 0; r2 < k; ++r2) {
                for (int c2 = 0; c2 < k; ++c2) {
                    if ((r1 != r2 || c1 != c2) && !can(r1, c1, r2, c2)) {
                        ++d;  // Đếm cặp mã không ăn nhau
                    }
                }
            }
        }
    }
    return d / 2;
}

int main() {
    int n;
    cin >> n;
    for (int k = 1; k <= n; ++k) {
        cout << count(k) << endl;
    }
    return 0;
}
