#include <bits/stdc++.h>

using namespace std;
#define int long long

void checkPrime(int x) {
    int cnt = 0;
    if (x <= 1) {
        cout<<"Not Prime";
        return;
    }
    for (int i =1; i <= x; i++) {
        if (x % i == 0) {
            cnt++;
        }
    }
    if (cnt == 2) {
        cout << "Prime";
    }
    else {
        cout << "Not Prime";
    }
}

signed main() {
    int n;
    cin >> n;
    checkPrime(n);
}