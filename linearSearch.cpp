//Linear Search
//Best case = O(1);	Worst case = O(n);		Average case = O(n)
#include<bits/stdc++.h>
using namespace std;
int findNum(int arr[], int n, int x){
	for(int i=0; i<n; i++)
		if(x==arr[i])
			return i+1;
	return -1;
}
int main(){
	int n, index;
	cin>>n;
	int arr[n];
	int x;
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	cout<<"Enter element:";
	cin>>x;
	index = findNum(arr, n, x);				//
	cout<<index<<endl;
	return 0;
}
