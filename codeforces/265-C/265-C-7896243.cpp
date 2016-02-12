#include<bits/stdc++.h>
#define llong long long int 
#define ulong unsigned long long int
#define pb push_back
#define mp  make_pair
using namespace std;
int main()
{
	llong n,m,i,j,k,a,b,x,y,l,s1,s2;
	char s[1000004];
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	scanf("%s",s);
	l=strlen(s);
	vector <int> v1,v2;
	v1.clear();v2.clear();
	for(i=0;i<l;i++)
	{
		if(s[i]=='l')
			v1.pb(i+1);
		else if (s[i]=='r')
			v2.pb(i+1);
	}
	s1=v1.size();
	s2=v2.size();
	for(i=0;i<s2;i++)
		cout << v2[i] << endl;
	for(i=s1-1;i>=0;i--)
		cout << v1[i] << endl;

	return 0;
}