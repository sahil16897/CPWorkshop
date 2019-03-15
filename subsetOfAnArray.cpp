//subset of array elements (using backtracking)
#include<bits/stdc++.h>
using namespace std;
vector<vector<int> > ans;
void subset(vector<int>arr, int i, vector<int> curr){
	if(i==arr.size()){
		ans.push_back(curr);
		return;
	}
	subset(arr, i+1, curr);
	curr.push_back(arr[i]);
	subset(arr, i+1, curr);
	return;
}
int main(){
	//int n;
	//cin>>n;
	vector<int> v;
	vector<int> curr;
	for(int i=1; i<=3; i++)
		v.push_back(i);
	subset(v, 0, curr);
	for(int i=0; i<ans.size(); i++){
		for(int j=0; j<ans[i].size(); j++){
			cout<<ans[i][j];
		}
		cout<<endl;
	}
	return 0;
}
