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
	lol a[1000001],i;
	a[1]=1;a[2]=5;
	for(i=3;i<=1000000;i++)
	{
		a[i]=a[i-1]+i*(i+1)/2;
		if(i&1)a[i]+=(i*i-1)/4;
		else a[i]+=i*i/4;
	}
	lol t,x;
	cin >> t;
	while(t--)
	{
		cin >> x;
		cout << a[x] << endl;
	}
	return 0;
}
