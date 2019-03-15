//Area of possible rectangle less than key using two pointer method
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, key, count=0;
	cin>>n;
	int arr[n];
	for(int i=0; i<n; i++)
		cin>>arr[i];
	sort(arr, arr+n);
	cin>>key;
	for(int i=0; i<n; i++){
		for(int j=n-1; j>=0; j--){
			if((arr[i]*arr[j])<key)
				count++;
		}
	}
	cout<<"Pairs having area less than "<<key<<":"<<count;
	return 0;
}
