
#include <iostream>
#include <cmath>
using namespace std;


bool kt(int x) {
    if (x < 2) {
        return false;
    }
    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0) {
            return false;
        }
    }
    return true;
}

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

int sum_common_prime(int N, int M) {
    int ucln = gcd(N, M);
    int sum = 0;
    bool hasPrime = false;
    for (int i = 2; i <= ucln; i++) {
        if (ucln % i == 0 && kt(i)) {
            sum += i;
            hasPrime = true;
        }
    }
    return hasPrime ? sum : -1;
}

int main() {
	int m, n;
	cin >> m >> n;
	cout << sum_common_prime(m, n);
}
