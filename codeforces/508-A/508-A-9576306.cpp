#include<bits/stdc++.h>
#define lol long long int
#define ulol unsigned long long int 
#define mp make_pair
#define pb push_back
#define ff first
#define ss second
using namespace std;
const lol lol_max=numeric_limits<lol>::max();
int n,m,k;
int a[1001][1001];
int v(int xx,int yy){
	if(xx>=0 && xx<n && yy>=0 && yy<m)
		return 1;
	return 0;
}
int f(int i,int j){
	if(v(i,j) && v(i,j-1) && v(i-1,j-1) && v(i-1,j)){
		if(a[i][j] && a[i][j-1] && a[i-1][j-1] && a[i-1][j])
			return 1;
	}
	if(v(i,j) && v(i,j+1) && v(i-1,j) && v(i-1,j+1)){
		if(a[i][j] && a[i][j+1] && a[i-1][j] && a[i-1][j+1])
			return 1;
	}
	if(v(i,j) && v(i,j-1) && v(i+1,j-1) && v(i+1,j)){
		if(a[i][j] && a[i][j-1] && a[i+1][j-1] && a[i+1][j])
			return 1;
	}
	if(v(i,j) && v(i,j+1) && v(i+1,j) && v(i+1,j+1)){
		if(a[i][j] && a[i][j+1] && a[i+1][j] && a[i+1][j+1])
			return 1;
	}
	return 0;
}
int main(){
	//ios_base::sync_with_stdio(false);
	//cin.tie(NULL);
	int x,y,fl=0,ans;
	cin >> n >> m >> k;
	for(int j=1;j<=k;j++){
		cin >> x >> y ;
		a[x-1][y-1]=1;
		if(fl==1)continue;
		if(f(x-1,y-1)){
			ans=j;fl=1;
		}
	}
	if(ans!=0)cout << ans << endl;
	else cout << "0" << endl;
	
	return 0;
}