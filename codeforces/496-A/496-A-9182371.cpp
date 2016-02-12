#include<bits/stdc++.h>
#define F(i,a,b) for(int i=a;i<b;i++)
using namespace std;
const int imax=numeric_limits<int>::max();
int main(){
	int n,i,a[111],ans,mx;
	while(cin >> n){
		ans=INT_MAX,mx=0;
		F(i,0,n)
			cin >> a[i];
		F(i,1,n)
			mx=max(mx,a[i]-a[i-1]);
		F(i,2,n)
			ans=min(ans,a[i]-a[i-2]);
		cout<< max(mx,ans) << endl;
	}
	return 0;
}