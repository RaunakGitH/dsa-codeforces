#include <bits/stdc++.h>

using namespace std;
#define int long long
signed main() {
    int n;
    cin >> n ;
    int arr[n];
    bool isSorted = true;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];

    }
    for (int i = 1; i < n; i++) {
        if (arr[i - 1] > arr[i]) {
            isSorted = false;
        }
    }
    if (isSorted) cout << "YES";
    else cout << "NO";

}