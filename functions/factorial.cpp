#include <bits/stdc++.h>

using namespace std;
#define int long long

int factorial(int n) {
    if (n == 0) return 1;
    return n * factorial(n - 1);
}

signed main() {
    int x;
    cin >> x;
    cout << factorial(x);
}