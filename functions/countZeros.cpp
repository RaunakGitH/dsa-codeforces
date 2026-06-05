#include <bits/stdc++.h>

using namespace std;
#define int long long

int countZeros(int n) {
    if (n == 0) return 1;
    int cnt = 0;
    while (n != 0) {
        int ld = n % 10;
        if (ld == 0) cnt++;
        n /= 10;
    }
    return cnt;
}

signed main() {
    int n;
    cin >> n;
    cout << countZeros(n);
}