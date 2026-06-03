#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int n;
    cin>>n;
    int temp = n;
    int res = 0;
    while(n != 0){
        res = res * 10 + (n%10);
        n/=10;
    }
    if(temp == res) cout<<"YES";
    else cout<<"NO";
}