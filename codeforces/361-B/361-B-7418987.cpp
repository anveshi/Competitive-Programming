#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k,i;
	cin >> n >> k;
	int a[n+1];
	if((n==1 && k==1)||(n==k))cout << "-1" << endl;
	else{
		if(k<n-1)
		a[1]=k+2;else a[1]=1;
		for(i=2;i<=k+1;i++)
			a[i]=i;
		for(i=k+2;i<=n;i++)
			a[i]=i+1;
		if(k<n-1)a[n]=1;
	
	for(i=1;i<=n;i++)
		cout << a[i] << " ";
	cout << endl;}
	return 0;
}