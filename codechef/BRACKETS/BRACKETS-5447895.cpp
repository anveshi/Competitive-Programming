//anveshi
#include<bits/stdc++.h>
#define lol long long int
#define ulol unsigned long long int
#define mp make_pair
#define pb push_back
#define ff first
#define ss second
char s[100001];
using namespace std;
int main()
{
	//ios_base::sync_with_stdio(false); 
	cin.tie(NULL);
	int t,i,mb,b,n;
	cin >> t;
	while(t--)
	{
		scanf("%s",s);
		n=strlen(s);
		b=0;mb=0;
		for(i=0;i<n;i++)
		{
			if(s[i]=='(')b=b+1;
			else b=b-1;
			mb=max(mb,b);
		}
		for(i=0;i<mb;i++)
		{
			cout << "(";
		}
		for(i=0;i<mb;i++)
			cout << ")";
		cout << endl;
	}

	return 0;
}