//binary Search
#include<bits/stdc++.h>
using namespace std;
int binarySearch(int arr[], int beg, int end, int x){
	while(end>=1){
		int mid = 1 + (end-1)/2;
		if(arr[mid]==x)
			return mid;
		if(arr[mid]>x)
			return binarySearch(arr, beg, mid-1, x);
		else
			return binarySearch(arr, mid+1, end, x);
	}
	return -1;
}

int main(){
	int n, x;
	cin>>n;
	int arr[n];
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	cin>>x;			//Number which is to be searched
	int index = binarySearch(arr, 0, n-1, x);
	cout<<index<<endl;
	return 0;
}
