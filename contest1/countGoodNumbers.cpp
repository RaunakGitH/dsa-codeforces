#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    int n;
    cin >> n;

    int good = 0;

    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;

        if ((x != 0 && 18 % x == 0) || x % 45 == 0)
            good++;
    }

    cout << good;
}