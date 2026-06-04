#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int n,m;
    cin>>n>>m;
       char ch = 'A';
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j ++){
            cout<<ch;
        }
        cout<<endl;
        ch++;
    }
    
}
/* 
5 3
AAA
BBB
CCC
DDD
EEE
*/