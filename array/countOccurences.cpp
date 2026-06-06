#include <bits/stdc++.h>

using namespace std;
#define int long long
signed main() {
    int n, x;
    cin >> n >> x;
    int arr[n];
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] == x) {
            cnt++;
        }
    }
    cout << cnt;
}