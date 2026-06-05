#include <bits/stdc++.h>

using namespace std;
#define int long long

void factors(int x){
    for(int i = x;i>=1;i--){
        if(x % i == 0){
            cout<<i<<" ";
        }
    }
}

signed main() {
    int n;
    cin >> n;
    factors(n);
}