#include <bits/stdc++.h>

using namespace std;
#define int long long
signed main() {
    int t;
    cin >> t;
    for (int k = 0; k < t; k++) {
        int n;
        cin >> n;
        for (int i = 1; i <= n; i++) {
            if (i % 2 != 0) {
                cout << i <<" ";
            }
        }
        for (int i = n; i > 1; i--) {
            if (i % 2 == 0) {
                cout << i<<" ";
            }
        }
        cout<<endl;
    }
}
/*
InputCopy
1
5
OutputCopy
1 3 5 4 2 
*/