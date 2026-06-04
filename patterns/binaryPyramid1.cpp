#include<bits/stdc++.h>

using namespace std;
#define int long long
signed main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int start;
        if (i % 2 == 0) {
            start = 0;
        }
        else {
            start = 1;
        }
        for (int j = 1; j <= i; j++) {
            cout << start;

        }
        cout << endl;
    }

}
/*
1
00
111
0000
11111
*/