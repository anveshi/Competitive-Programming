#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T,n;
	long long int ans;
	cin >> T;
	while(T--)
	{
		ans=0;
		cin >> n;
		char a[n];
		for(int i=0;i<n;i++)
		{
			cin >> a[i];
			if(a[i]=='1')
				ans++;
		}
		cout<< (ans*(ans+1))/2 << endl;
	}
	return 0;
}