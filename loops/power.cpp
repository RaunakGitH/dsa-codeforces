#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
	int x , n;
	cin>>x>>n;
	int res = 1;
	for(int i =1;i<=n;i++){
		res *= x;
	}
	cout<<res;
}
