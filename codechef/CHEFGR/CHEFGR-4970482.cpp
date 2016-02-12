#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,m,i,ans,k,n;
	cin.tie(NULL);
	cin >> t;
	while(t--)
	{
		cin >> n >> k;
		int a[n];
		m=0;
		for(i=0;i<n;i++)
		{
			cin >> a[i];
			if(a[i] >m )
				m=a[i];
		}
		ans=0;
		for(i=0;i<n;i++)
			ans+=m-a[i];
		if(k>=ans && (k-ans)%n==0)
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
	}
	return 0;
}