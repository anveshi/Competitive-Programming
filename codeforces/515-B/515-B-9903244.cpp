#include <bits/stdc++.h>
#define LL long long int
#define mp make_pair
#define pb push_back
#define ff first
#define ss second
using namespace std;
const LL LL_max=numeric_limits<LL>::max();
int b[105],g[105];
int main(){
	LL n,m,i,j,t,x,y;
	cin >> n >> m;
	cin >> x;
	for(i=0;i<x;i++){
		cin >> t;
		b[t]=1;
	}
	cin >> y;
	for(i=0;i<y;i++){
		cin >> t;
		g[t]=1;
	}
	LL a1,a2;
	for(i=0;i<1000000;i++){
		a1 = i%n;
		a2 = i%m;
		if(b[a1]==1 || g[a2]==1){
			b[a1]=1,g[a2]=1;
		}
	}
	for(i=0;i<n;i++){
		if(b[i]==0){
			cout << "No" << endl;
			return 0;
		}
	}
	for(i=0;i<m;i++){
		if(g[i]==0){
			cout << "No" << endl;
			return 0;
		}
	}
	cout << "Yes" << endl;
	return 0;
}