/*anveshi*/
#include<bits/stdc++.h>
#define pb push_back
#define pf push_front
#define mp make_pair
#define llong long long int
#define ulong unsigned long long int
using namespace std;
//int p[105],q[105];
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	int n,i,a,b,count;;
	cin >> n;
	count=0;
	for(i=0;i<n;i++)
	{
		cin >> a >> b;
		if(b-a >=2)count++;
	}
	cout << count << endl;

	return 0;
}