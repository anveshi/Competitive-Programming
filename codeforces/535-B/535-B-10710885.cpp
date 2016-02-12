#include <bits/stdc++.h>
#define LL long long int
#define mp make_pair
#define pb push_back
#define ff first
#define ss second
const LL MOD = 1000000007;
int p[20];;
using namespace std;
int main(){
	//ios_base::sync_with_stdio(false); 	
	//cin.tie(NULL);
	p[0]=1;
	map <int,int> MM;MM.clear();
	vector <int> v;v.clear();
	int i,j,t,m,n,x,y,sz,k,ans=0;
	for(i=1;i<10;i++)p[i]=p[i-1]*10;
	for(i=1;i<=9;i++){
		for(j=0;j<(1<<i);j++){
			int val = 0;
			for(k=0;k<i;k++){
				if(j&(1<<k))
					val+=7*p[k];
				else val+=4*p[k];
			}
			v.pb(val);
		}
	}
	sort(v.begin(),v.end());
	sz= v.size();
	for(i=0;i<sz;i++)
		MM[v[i]]=i+1;
	cin >> n;
	cout << MM[n] << endl;
	return 0;
}