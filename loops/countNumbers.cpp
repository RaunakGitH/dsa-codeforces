#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
	int n;
	cin>>n;
	int x;
	int pos = 0, neg=0 , even=0 , odd=0; 
	for(int i=0;i<n;i++){
		cin>>x;
		if(x >0) pos++;
		if(x<0) neg++;
		if(x%2 == 0) even++;
		if(x%2 !=0) odd++;
		}
	
	cout<<pos<<endl<<neg<<endl<<even<<endl<<odd;
}