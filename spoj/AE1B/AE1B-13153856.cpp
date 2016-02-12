#include<bits/stdc++.h>
#define lol long long int
#define ulol unsigned long long int
#define mp make_pair
#define pb push_back
#define ff first
#define ss second
using namespace std;
int main()
{
	//ios_base::sync_with_stdio(false); 
	cin.tie(NULL);
	int n,k,s,a[1005],val,ans,i;
	cin >> n >> k >> s;
	for(i=0;i<n;i++)
		cin >> a[i];
	sort(a,a+n);
	ans=0;val=0;
	for(i=n-1;i>=0;i--){
		val+=a[i];
		ans++;
		if(val>=k*s)break;
	}
	cout<<ans<<endl;
	return 0;
}
