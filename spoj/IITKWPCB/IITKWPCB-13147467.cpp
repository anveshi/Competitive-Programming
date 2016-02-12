#include<bits/stdc++.h>
#define lol long long int
#define ulol unsigned long long int
#define mp make_pair
#define pb push_back
#define ff first
#define ss second
using namespace std;
lol gcd(int a,int b)
{
	return b?gcd(b,a%b):a;
}
int main()
{
	//ios_base::sync_with_stdio(false); 
	cin.tie(NULL);
	lol t,n,i;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int f=0;
		i=n/2;
		while(__gcd(i,n)!=1)i--;
		cout << i << endl;
	}
	return 0;
}
