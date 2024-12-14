#include <iostream>
using namespace std;
#define MAX 100

void NhapmangSNT (int a[], int n) {
    cin>>n;
}

bool is(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) return false;
    }
    return true;
}

void gen(int pri[], int& n) {
    int count = 0;
    int num = 2;
    while (count < n) {
        if (is(num)) {
            pri[count] = num;
            count++;
        }
        num++;
    }
}

bool con(int number, int y) {
    while (number > 0) {
        if (number % 10 == y) {
            return true;
        }
        number /= 10;
    }
    return false;
}

int main() {
    int a[MAX], n, y;
    cin >> y;
	NhapmangSNT(a,n);
    gen(a, n);
    int count = 0;
    for (int i = 0; i < n; ++i) {
        if (con(a[i], y)) {
            count++;
        }
    }
    cout << count;
    return 0;
}
