#include <bits/stdc++.h>
#define LL long long int
LL a[100005];
using namespace std;
int main(){
	LL i,j,m,n,t;
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> t;
	while(t--){
		cin >> n;
		LL count = 0;
		for(i=0;i<n;i++)
			cin>>a[i];
		for(i=1;i<n-1;i++){
			if(a[i]!=a[i-1] || a[i]!=a[i+1])
				count++;
		}
			if(a[0]!=a[1])
				count++;
			if(a[n-1]!=a[n-2])
				count++;
		cout << count << endl;
	}

	return 0;
}