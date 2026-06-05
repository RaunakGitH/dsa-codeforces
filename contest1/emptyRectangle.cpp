#include <bits/stdc++.h>

using namespace std;
#define int long long
signed main() {
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (i == 1 or j == 1 or j == m or i == n) {
                cout << "^";
            }
            else cout << " ";
        }
        cout << endl;
    }
}
/*
^^^^^
^   ^
^   ^
^^^^^

*/