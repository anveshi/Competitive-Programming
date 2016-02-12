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
	int t,n,i;
	char s[100005];
	cin >> t;
	while(t--)
	{
		scanf("%s",s);
		int a[26]={0};
		n=strlen(s);
		for(i=0;i<n;i++)
			a[s[i]-'a']++;
		int ans=0;
		for(i=0;i<26;i++)
			if(a[i])ans++;
		cout << ans << endl;
	}
	return 0;
}