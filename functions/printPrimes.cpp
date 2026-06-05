#include <bits/stdc++.h>

using namespace std;
#define int long long

bool checkPrime(int x) {
    int cnt = 0;
    if (x <= 1) {
        return false;
    }
    for (int i = 1; i <= x; i++) {
        if (x % i == 0) {
            cnt++;
        }
    }
    if (cnt == 2) {
        return true;
    }
    else {
        return false;
    }
}

void printPrime(int n) {
    for (int i = 1; i <= n; i++) {
        if (checkPrime(i)) {
            cout << i<<endl;
        }
    }
}

signed main() {
    int n;
    cin >> n;
    printPrime(n);
}