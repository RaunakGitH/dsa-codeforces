#include<bits/stdc++.h>
using namespace std;
#define int long long 
signed main(){
    int n,m;
    cin>>n>>m;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(i == 0 or j == 0 or i == n-1 or j == m-1){
                cout<<"*";
            }
            else cout<<" ";
        }
        cout<<endl;
    }
    
}
/*
InputCopy
5 5
OutputCopy
*****
*   *
*   *
*   *
*****
*/