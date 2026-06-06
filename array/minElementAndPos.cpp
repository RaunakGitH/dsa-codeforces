#include <bits/stdc++.h>

using namespace std;
#define int long long
signed main() {
    int n;
    cin >> n;
    int arr[n];
    int min = INT_MAX;
    int pos = 0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] < min) {
            min = arr[i];
            pos = i+1;
        }
    }
    cout << min << " " << pos;
}