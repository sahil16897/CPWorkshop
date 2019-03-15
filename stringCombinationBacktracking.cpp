//all combinations of string(Using Backtracking)
#include<bits/stdc++.h>
using namespace std;
void permutationString(string s, int index){
	if(index==s.length()-1)			//follows '0' indexing
		cout<<s<<" ";
	for(int i=index; i<s.length(); i++){
		swap(s[index], s[i]);
		permutationString(s, index+1);
		swap(s[index], s[i]);
	}
}
int main(){
	string s;
	cin>>s;
	permutationString(s, 0);
	return 0;
}
