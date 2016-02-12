#include <bits/stdc++.h>
using namespace std;
int a[10005];
int main(){
	int n;
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	int m=a[0],M=a[0],ans=0;;
	for(int i=1;i<n;i++){
		if(a[i]<m)
			m=a[i],ans++;
		if(a[i]>M)
			M=a[i],ans++;
	}
	cout << ans;
	return 0;
}