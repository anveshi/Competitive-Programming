//anveshi
#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
using namespace std;
int main()
{
	cin.tie(NULL);

	int n,k;
	cin >>  n >> k;
	for(int i=1;i<=n-k;i++)
		cout << i << " ";
	for(int i=1;i<=k;i++)
	{
		if(i%2==1)
			cout << n-i/2 << " ";
		else cout << n - k+ i/2 << " ";
	}
	cout << endl;
	return 0;
}