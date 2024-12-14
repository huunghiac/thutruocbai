#include <iostream>
void input {
    std::cin >> n;
    return n;
}

int TongChuSo (int n) {
    if (n<10) return n;
    int m=n%10;
    int k=n/10;
    return m+TongChuSo(k);
}
    int main() {
    int a;
    input(a);
    std::cout << TongChuSo(a);
    return 0;
}
