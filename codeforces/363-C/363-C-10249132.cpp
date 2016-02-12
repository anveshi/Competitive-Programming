#include <bits/stdc++.h>
#define LL long long int
#define mp make_pair
#define pb push_back
#define ff first
#define ss second
using namespace std;
int main(){
	string s,ans;int i,j,l;
	cin >> s;
	ans = " ";
	ans+=s.substr(0,2);
	for(i=2;i<s.length();i++){
		l=ans.length();
		if(ans[l-1]!=s[i])ans+=s[i];
		else{
			if(ans[l-1]!=ans[l-2] && (ans[l-2]!=ans[l-3])){
					ans+=s[i];
			}
		}
		
	}
	cout << ans.substr(1,ans.length()-1) << endl;

	return 0;
}