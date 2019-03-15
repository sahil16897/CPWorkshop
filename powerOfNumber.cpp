#define ll long long 
#include<bits/stdc++.h>
using namespace std;
ll powFunc(ll b, ll e){
	if(e==0)
		return 1;
	if(e==1)
		return b;
	if(e%2==0)
		return pow(b, e/2)*pow(b, e/2);
	else	
		return pow(b, (e-1)/2)*pow(b, (e-1)/2)*b;
}
int main(){
	ll int n, k;
	cin>>n>>k;
	ll res = powFunc(n, k);
	cout<<res;
	return 0;
}
