#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define llong long long int
#define ulong unsigned long long int
using namespace std;
int main()
{
	llong n,p,q,x,i;
	vector <llong > v(101,0);
	cin >> n ;
	cin >> p;
	for(i=0;i<p;i++)
	{
		cin >> x;
		v[x]=1;
	}
	cin >> q;
	for(i=0;i< q;i++)
	{
		cin >> x;
		v[x]=1;
	}
	int flag=1;
	for(i=1;i<=n;i++)
	{
		if(v[i]==1)continue;
		else {flag=0;break;}
	}
	if(flag==1)
		cout <<  "I become the guy." << endl;
	else 
		cout << "Oh, my keyboard!" << endl;
	return 0;
}