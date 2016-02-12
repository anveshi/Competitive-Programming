#include <bits/stdc++.h>
#define LL long long int
#define mp make_pair
#define pb push_back
#define ff first
#define ss second
const LL MOD = 1000000007;
using namespace std;
vector <int> v[26];
bool m1[26][26];
map <int,bool> m2;
int main(){
	LL i,j,m,n,cnt,ans=0,a,b;
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	string s,t;
	cin >> n;
	cin >> s >> t;
	a=-1,b=-1;LL val=0LL;
	for(i=0;i<n;i++){
		if(s[i]!=t[i]){
			val++;
			if(m1[s[i]-'a'][t[i]-'a']==0){
				m2[i]=1;
				v[t[i]-'a'].pb(i);
				m1[s[i]-'a'][t[i]-'a']=1;
			}
		}
	}
	LL p[26];
	for(i=0;i<26;i++)p[i]=v[i].size();
	for(i=0;i<n;i++){
		if(s[i]==t[i]||m2[i]==0)continue;
		LL sz = p[s[i]-'a'];
		for(j=0;j<sz;j++){
			LL x;
			x = v[s[i]-'a'][j];
			if(i==x)continue;
			//swap(s[i],s[x]);
			cnt=0;
			if(s[i]==t[x])cnt++;
			if(s[x]==t[i])cnt++;
			if(cnt>ans){a=i;b=x;ans=cnt;}
			//swap(s[i],s[x]);
			if(ans==2)break;
		}
		if(ans==2)break;
	}
	cout << val-ans << "\n";
	if(a>b)swap(a,b);
	if(a==-1 && b==-1) cout << -1 << " "  << -1 << "\n";
	else
	cout << a+1 << " " << b+1 << "\n";
	return 0;
}