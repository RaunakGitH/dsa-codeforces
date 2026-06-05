#include <bits/stdc++.h>

using namespace std;
#define int long long

int HCF(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

signed main() {
    int n, m;
    cin >> n >> m;
    cout << HCF(n, m);
}