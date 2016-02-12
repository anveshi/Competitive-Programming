#include<bits/stdc++.h>
using namespace std;
#define sz(a) ((a).size()) 
#define pb push_back 
#define longoor long long int
char str[100005];
int main()
{
	longoor n,k,i,j,ans;
	cin >> n >> k;
	vector <longoor> v(26,0);
	scanf("%s",str);
	for(i=0;i<n;i++)
	{
		v[str[i]-'A']+=1;
	}
	sort(v.begin(),v.end());
	ans=0;
	for(i=25;i>=0;i--)
	{
		if(k-v[i]>=0)
		{ans+=v[i]*v[i];k=k-v[i];}
		else 
		{
			ans+=(k*k);
			break;
		}

	}
	cout << ans << endl;
	
	return 0;
}