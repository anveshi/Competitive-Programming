//anveshi
#include<bits/stdc++.h>
#define lol long long int
#define ulol unsigned long long int
#define mp make_pair
#define pb push_back
#define ff first
#define ss second
using namespace std;
int main()
{
	//ios_base::sync_with_stdio(false); 
	cin.tie(NULL);
	lol x,k,i,z,a,t,aa,o=1;
	long double ans,xx,yy,off;
	cin >> t;
	while(t--)
	{
		cin >> x >> k;
		z=1;
		for(i=0;i<64;i++)
		{
			a=o<<i;
			if(a <= k)z=i;
			else break;
		}
		aa=o<<z;
		off=(long double)((long double)x/(long double)(2*aa));
		xx=(long double)((2*off)*(k-aa));
		printf("%0.10Lf\n",xx+off);
	}

	return 0;
}