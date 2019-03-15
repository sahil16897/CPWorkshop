#include<bits/stdc++.h>
using namespace std;
/*int main(){
	int n, sumArray=0;
	cin>>n;
	int arr[n];
	int m = n-1;
	int sum = ((m+1)*m)/2;
	for(int i=0; i<n; i++){
		cin>>arr[i];
		sumArray+=arr[i];
	}
	cout<<"Repeted Element: "<<(sumArray-sum);
	return 0;
}*/

int main(){
	int n;
	cin>>n;
	int arr[n];
	vector <int> v;
	for(int i=0; i<n; i++)
		cin>>arr[i];
	for(int i=0; i<n; i++){
		if(arr[i]!=arr[i+1])
			v.push_back(1);
		else
			v.push_back(-1);
	}
	for(int i=0; i<v.size(); i++){
		if(v[i]==1)
			cout<<arr[i];
	}
	return 0;
}
