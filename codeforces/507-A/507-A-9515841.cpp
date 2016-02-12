#include<bits/stdc++.h>
#define lol long long int
#define ulol unsigned long long int 
#define mp make_pair
#define pb push_back
#define ff first
#define ss second
using namespace std;
int main(){
	int n,k,i,x;
	cin >> n >> k;
	vector < pair<int,int> > p;
	p.clear();
	for(i=1;i<=n;i++){
		cin >> x;
		p.pb(mp(x,i));
	}
	sort(p.begin(),p.end());
	vector <int> v;
	v.clear();
	int tot=0;
	for(i=0;i<n;i++){
		tot+=p[i].ff;
		if(tot<=k)
			v.pb(p[i].ss);
		else break;		
	}
	int sz=v.size();
	cout << sz << endl;
	for(i=0;i<sz;i++)
		cout << v[i] << " ";
	if(sz)
	cout << endl;
	return 0;
}