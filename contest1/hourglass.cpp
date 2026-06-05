#include <bits/stdc++.h>

using namespace std;
#define int long long
signed main() {
    int n;
    cin >> n;
     for(int i=n;i>=1;i--){
        for(int j =1;j<=(n - i);j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"*";
            if(j<i) cout<<" ";
        }
        cout<<endl;
    }
    for(int i=2;i<=n;i++){
        for(int j =1;j<=(n - i);j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"*";
            if(j<i) cout<<" ";
        }
        cout<<endl;
    }
}

/*
. . . . .
 . . . .
  . . .
   . .
    .
   . .
  . . .
 . . . .
. . . . .

*/