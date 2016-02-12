//mishraiiit
#include<bits/stdc++.h>
#define ll long long int
#define scan_pair(somePair) cin >> somePair.first >> somePair.second
using namespace std;
#define sz(a) a.size()
#define sorti(a) sort(a.begin(), a.end())
#define rev(a) reverse(a.begin(), a.end())
#define fil(i,a,b) for(ll i=a;i<b;i++)
#define fie(i,a,b) for(ll i=a;i<=b;i++)
#define fdl(i,a,b) for(ll i=a;i>b;i--)
#define fde(i,a,b) for(ll i=a;i>=b;i--)
#define inRangeCC(a,b,c) (a<=b&&b<=c)
#define inRangeOC(a,b,c) (a<b&&b<=c)
#define inRangeOO(a,b,c) (a<b&&b<c)
#define inRangeCO(a,b,c) (a<=b&&b<c)
#define pb push_back
#define mk make_pair
#define ff first
#define ss second

typedef pair <ll, ll> pii;

bool notEmpty(map<ll,ll> dict) {
	ll count = 0;
	for(map<ll,ll>::iterator i=dict.begin();i!=dict.end();i++) {
		count = count+i->second;
	}
	if(count==0) return false;
	return true;
}

int main() {
	
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	ll n;
	cin >> n;
	map<ll,ll> dict;
	ll temp;
	fil(i,0,n) {
		cin >> temp;
		dict[temp]++;
	}

	ll count=0;

	while(notEmpty(dict)) {
		ll start=0;
		for(map<ll,ll>::iterator i=dict.begin();i!=dict.end();i++) {
			while(i->first >= start && i->second!=0) {
				i->second--;
				start++;
			}
		}
		count++;
	}

	cout << count << endl;

	return 0;
}