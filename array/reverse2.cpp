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
        for (int i = 0; i < n; i++) {
            cin>>arr[i];
        }
        int i = 0, j = n-1;
        while(i<=j){
            swap(arr[i],arr[j]);
            i++;j--;
        }
        for (int i = 0; i < n; i++) {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
}