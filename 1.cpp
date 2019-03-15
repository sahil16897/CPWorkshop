#include<bits/stdc++.h>
using namespace std;
int bS(int arr[], int beg, int end, int x){
	while(end>=1){
		int mid = (beg + end)/2;
		if(mid==x)
			return mid;
		else if(x<mid)
			return bS(arr[mid], 0, mid-1, x);
		else
			return bS(arr[mid], mid+1, end, x);
	}
	return -1;
}
int main(){
	int n, num;
	cin>>n;
	int arr[n];
	for(int i=0; i<n; i++)
		cin>>arr[i];
	sort(arr, arr+n);
	cin>>num;
	int index = bS(arr, 0, n-1, num);
	cout<<num<<" is at index "<<index<<endl;
	return 0;
}
