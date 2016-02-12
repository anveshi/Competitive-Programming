#include <bits/stdc++.h>
#define LL long long int
#define pb push_back
#define ff first
#define ss second
using namespace std;
int arr[345][345];
vector < pair<int,int> > v[45001];
int main(){
	int n,m,k,i,j;
	cin >> n >> m  >> k;
	for(i=0;i<45001;i++)v[i].clear();
	int cnt = 1;
	for(i=1;i<=n;i++){
		if(i&1){
			for(j=1;j<=m;j++){
				arr[i][j] = cnt;
				v[cnt].pb(make_pair(i,j));
				if(cnt<k && v[cnt].size()==2)cnt++;
			}
		}
		else{
			for(j=m;j>=1;j--){
				arr[i][j] = cnt;
				v[cnt].pb(make_pair(i,j));
				if(cnt<k && v[cnt].size()==2)cnt++;

			}
		}
	}
	for(i=1;i<=k;i++){
		cout << v[i].size() << " ";
		for(j=0;j<v[i].size();j++){
			cout << v[i][j].ff <<  " " << v[i][j].ss  << " ";
		}
		cout << endl;
	}
	return 0;
}