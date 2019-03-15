//	Recursion to find n^k
#define ll long long 
#include<bits/stdc++.h>
using namespace std;
ll powFunction(ll base, ll exp){
	if(exp==0)
		return 1;
	if(exp==1)
		return base;
	return base*powFunction(base, exp-1);
}
int main(){
	ll int n, k;
	cin>>n>>k;
	ll res = powFunction(n, k);
	cout<<res;
	return 0;
}
