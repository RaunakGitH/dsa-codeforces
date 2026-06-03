#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int n;
    cin>>n;
    for(int i =0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i == 0  or j== 0 or j== n-1 or i== n-1){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}
/*
InputCopy
6
OutputCopy
******
*    *
*    *
*    *
*    *
******
*/