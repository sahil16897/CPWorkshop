//Single Peak Element => greater from its neighbours
#include<bits/stdc++.h>
using namespace std;
int peakFunction(int arr[], int beg, int end){
	while(beg<=end){
		int mid = (beg+end)/2;
		if(arr[mid]>arr[mid+1] && arr[mid]>arr[mid-1])
			return arr[mid];
		else if(arr[mid]<arr[mid+1])
			return peakFunction(arr, mid+1, end);
		else if(arr[mid]<arr[mid-1])
			return peakFunction(arr, beg, mid-1);
	}
}
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0; i<n; i++)
		cin>>arr[i];
	int peak = peakFunction(arr, 0, n-1);
	cout<<"Peak element:"<<peak;
	return 0;
}
