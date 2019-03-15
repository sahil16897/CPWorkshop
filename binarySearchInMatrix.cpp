#include<bits/stdc++.h>
using namespace std;
int findCol(int arr[m][n], int beg, int end, int x){
	while(beg<=end){
		int mid = (beg+end)/2;
		if(arr[mid][0]<=x && arr[mid+1]>x)
			return mid;
	}
}
int main(){
	int m, n, num;
	cim>>m>>n;
	int arr[m][n];
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			cin>>a[i][j];
		}
	}
	cout<<"Number to be searched:";
	cin>>num;
	int col = findCol(arr, 0, m-1, num);
	return 0;
}
