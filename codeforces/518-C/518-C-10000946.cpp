#include <bits/stdc++.h>
#define LL long long int
#define mp make_pair
#define pb push_back
#define ff first
#define ss second
using namespace std;
LL a[100005],b[100005];
int main(){
	LL n,m,k,i,j,x,ans=0;
	map <LL,LL> M;
	M.clear();
	cin >> n >> m  >> k;
	for(i=1;i<=n;i++){
		cin >> a[i];
		M[a[i]]=i;
	}
	for(i=0;i<m;i++){
		cin  >> b[i];
	}
	for(i=0;i<m;i++){
	//	for(j=1;j<=n;j++)cout << a[j] << " ";
		x=M[b[i]];
		ans+=(x-1)/k + 1;
		if(x>1){
			M[a[x]]--;
			M[a[x-1]]++;
			swap(a[x-1],a[x]);
		}
	}
	cout << ans << endl;
	return 0;

}