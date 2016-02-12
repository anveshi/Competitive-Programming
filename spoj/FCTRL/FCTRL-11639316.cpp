#include<bits/stdc++.h>
using namespace std;
int main()
{
	long T,N,ans,count,k;
	cin >> T;
	while(T--)
	{
		cin >> N;
		ans=0;
		count=1;
		while(1)
		{
			k=N/pow(5,count);
			if(k!=0)
				ans+=k;
			else
				break;
			count++;
		}
		cout << ans << endl;

	}
	return 0;
}
