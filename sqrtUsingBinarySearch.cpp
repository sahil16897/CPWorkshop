#include<bits/stdc++.h>
using namespace std;
int fun(int beg, int end, int x){
	while(beg<=end){
		int mid = (beg+end)/2;
		if(mid*mid == x)
			return mid;
		else if((mid+1)*(mid+1) == x)
			return mid+1;
		else if(pow(mid-1,2)==x)
			return mid-1;
		else if(pow(mid+1,2)>x && pow(mid, 2)<x)
			return mid;
	}
}
int main(){
	int num;
	cin>>num;
	int n = num/2;
	int sqrtNum = fun(0, n, num);
	cout<<sqrtNum;
	return 0;
}
