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
	lol i,n,l,r,flag,o=1;
	cin >> n;
	while(n--)
	{
		cin >> l >> r;
		flag=0;
		for(i=0;i<65;i++)
		{
			if((l&(o<<i))==0)
			{
				if((l|(o<<i))<=r)l=(l|(o<<i));
				else flag=1;
			}
			if(flag)break;
		}	
		cout << l << endl;
	}
	return 0;
}