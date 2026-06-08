#include <bits/stdc++.h>

using namespace std;
#define int long long
signed main() {
    int t;
    cin >> t;
    for (int k = 0; k < t; k++) {
        int n;
        cin >> n;
        int arr[n];
        int ans = 0;
       for(int i = 0; i < n; i++){
           cin>>arr[i];
       }
       for(int i =0;i<n;i++){
           int target = arr[i];
           int count = 0;
           for(int j=0;j<n;j++){
               if(arr[j] == target){
                   count++;
               }
           }
           if(count == 2){
               ans = arr[i];
           }
       }
       cout<<ans<<endl;
    }
}