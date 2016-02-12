#include <bits/stdc++.h>
#define LL long long int
#define mp make_pair
#define pb push_back
#define ff first
#define ss second
const LL MOD = 1000000007;
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	int i,j,n,w,h,x,val1,val2;
	LL ans;
	string st;
	map <int,int> H,V;
//	set <int> s1,s2;s1.clear(),s2.clear();
	map <int,int> S1,S2;
	S1.clear();S2.clear();
	H.clear();V.clear();
	cin>>w>>h>>n;
	H[0]=1;V[0]=1;H[h]=1;V[w]=1;
//	s1.insert(w);s2.insert(h);
	S1[w]=1;S2[h]=1;
	while(n--){
//		for(set <int> ::iterator it1=s1.begin();it1!=s1.end();++it1)cout << *it1 << " ";
//			cout<< endl;
//				for(set <int> ::iterator it1=s2.begin();it1!=s2.end();++it1)cout << *it1 << " ";
//			cout<< endl;
		cin >> st >> x;
		map <int,int> :: iterator it;
		if(st[0]=='V'){
			it=V.upper_bound(x);
			val1 = it->first;
			it--;
			val2= it->first;
	//		cout << val1 << " "<< val2 << endl;
			S1[val1-val2]--;
			if(S1[val1-val2]==0)S1.erase(val1-val2);
			S1[x-val2]++;
			S1[val1-x]++;

			//s1.erase(val1-val2);
			//s1.insert(x-val2);
			//s1.insert(val1-x);
			V[x]=1;
		}
		else{
			it=H.upper_bound(x);
			val1=it->first;
			it--;
			val2=it->first;
			S2[val1-val2]--;
			if(S2[val1-val2]==0)S2.erase(val1-val2);
			S2[x-val2]++;
			S2[val1-x]++;
			
			//s2.erase(val1-val2);
			//s2.insert(x-val2);
			//s2.insert(val1-x);
			H[x]=1;
		}
		val1 = (S1.rbegin())->first;
		val2 = (S2.rbegin())->first;
	//	cout << val1 << " "<< val2 << endl;
		ans = val1*1LL*val2;
		cout << ans << endl;
	}
	return 0;
}