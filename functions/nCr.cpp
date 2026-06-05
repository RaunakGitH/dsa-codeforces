#include <bits/stdc++.h>

using namespace std;
#define int long long

int factorial(int n) {
    if (n == 0) return 1;
    return n * factorial(n - 1);
}
int nCr(int n, int r) {
    int res = factorial(n) / (factorial(r) * factorial(n - r));
    return res;
}

signed main() {
    int x, y;
    cin >> x >> y;
    cout << nCr(x, y);
}