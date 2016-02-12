#include <bits/stdc++.h>
#define LL long long int
#define mp make_pair
#define pb push_back
#define ff first
#define ss second
const LL MOD = 1000000007;
LL a[200010],b[200010];
using namespace std;
int main(){
	ios_base::sync_with_stdio(false); 	
	cin.tie(NULL);
	LL i,j,t,m,n,x,y,A,z,sz,ans=0LL,sum=0LL;
	cin >> n >> A;
	for(i=0;i<n;i++){
		cin >> a[i];
		sum+=a[i];
	}
	for(i=0;i<n;i++){
		b[i]=sum-a[i];
	}
	y = A-n+1;
//	cout << y << endl;
	for(i=0;i<n;i++){
		ans =0LL;
		//if(a[i]>y)ans+=a[i]-y;
		//if(b[i]<A)ans+=A-b[i]-1;
		LL tt,ttt;
		if(y<a[i]){
			tt = a[i]-y;
			ttt = y;
			ans+=a[i]-y;
			if(b[i]<A){
				x=A-b[i]-1;
				ans+=min(x,ttt);
			}
		}
		else{
			if(b[i]<A){
				tt=A-b[i]-1;
				ans+=min(tt,a[i]);
			}
		}
		cout << ans << " ";
	}
	cout << endl;
	return 0;
}