#include <bits/stdc++.h>

using namespace std;
#define int long long
signed main() {
    int n, x;
    cin >> n >> x;
    int arr[n];
    bool isPresent = false;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] == x) {
            isPresent = true;
        }
    }
    if(isPresent) cout<<"YES";
    else cout<<"NO";
}