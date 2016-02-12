#include <bits/stdc++.h>
#define LL long long int
#define mp make_pair
#define pb push_back
#define ff first
#define ss second
const LL MOD = 1000000007;
using namespace std;
int a[100005];
int main(){
	int t,n,x;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		for(int i=0;i<n;i++)
			scanf("%d",&a[i]);
		sort(a,a+n);
		if(a[0]<2)
			printf("-1\n");
		else{		
			x = accumulate(a,a+n,0);
			printf("%d\n",x+2-a[0]);
		}
	}
	return 0;
}