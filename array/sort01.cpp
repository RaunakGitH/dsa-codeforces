#include <bits/stdc++.h>

using namespace std;
#define int long long
signed main() {
    int t;
    cin >> t;
    for (int k = 0; k < t; k++) {
        int n;
        cin >> n;
        int cnt0 = 0, cnt1 = 0;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            if (arr[i] == 0) cnt0++;
            else cnt1++;
        }
        for (int i = 0; i < cnt0; i++) {
            cout << "0" << " ";
        }
        for (int i = cnt0; i < cnt0 + cnt1; i++) {
            cout << "1" << " ";
        }
        cout<<endl;
    }

}