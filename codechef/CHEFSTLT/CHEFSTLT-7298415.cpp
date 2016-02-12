#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
int main(){
	ll n,t,a,b;
	string s1,s2;
	cin >> t;
	while(t--){
		cin >> s1 >> s2;a=0,b=0;
		for(int i=0;i<s1.length();i++){
			if(s1[i]==s2[i] && s1[i]!='?')continue;
			else if(s1[i]==s2[i]){
				b++;
			}
			else if(s1[i]=='?' || s2[i]=='?'){
				b++;
			}
			else if(s1[i]!=s2[i]){
				a++;
				b++;
			}
		}
		cout << a << " " << b  << endl;
	}
	return 0;
}