#include<bits/stdc++.h>

using namespace std;
#define int long long

signed main() {
    int t;
    cin >> t;
    for (int k = 0; k < t; k++) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        int target;
        cin >> target;
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                for (int l = j + 1; l < n; l++) {
                    if (arr[i] + arr[j] + arr[l] == target) {
                        cnt++;
                    }
                }

            }
        }
        cout << cnt << endl;
    }


}