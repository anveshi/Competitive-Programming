#include <bits/stdc++.h>
#define LL long long int
#define mp make_pair
#define pb push_back
#define ff first
#define ss second
const LL MOD = 1000000007;
using namespace std;
int main(){
	ios_base::sync_with_stdio(false); 	
	cin.tie(NULL);
	LL i,j,m,n;
	string s;
	cin >> s;
	vector <char> v;
	for(i=0;i<s.length();i++){
		if(s[i]!='+')
			v.pb(s[i]);
	}
	sort(v.begin(),v.end());
	for(i=0;i<v.size();i++){
		cout << v[i];
		if(i!=v.size()-1)
			cout << '+';
		else cout << endl;
	}

	return 0;
}