#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long  int 
#define ul unsigned long long  int 
#define mod 1000000007
#define all(c) (c).begin(),(c).end() 
#define tr(c,i) for(typeof((c).begin() i = (c).begin(); i != (c).end(); i++) 
#define present(c,x) ((c).find(x) != (c).end()) 
#define cpresent(c,x) (find(all(c),x) != (c).end()) 
using namespace std;
int a[100005];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,n,temp,i,flag;
	cin >> t;
	while(t--)
	{
		cin >> n ;
		for(i=0;i<n;i++)
		{
			cin >> a[i];
		}
		temp=a[0];
		flag=0;
		for(i=1;i<n;i++)
		{
			temp=__gcd(temp,a[i]);
			if(temp==1)
			{
				flag=1;break;
			}
		}
		if(flag)cout <<  n  << endl;
		else cout << "-1" << endl;

	}
	return 0;
}