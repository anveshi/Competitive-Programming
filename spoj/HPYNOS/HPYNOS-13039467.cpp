#include<bits/stdc++.h>
using namespace std;
int sumofsquaresofdigits(long long n)
{
	int ans=0;
	while(n)
	{
		ans+=(n%10)*(n%10);
		n/=10;
	}
//	cout << ans << endl;
	return ans;
}
int main()
{
	long long n,i,flag=0;
	map <long long,int> mp;
	mp.clear();
	i=0;
	cin >> n;
	while(n!=1)
	{
		if(mp[n]){flag=1;break;}
		else mp[n]=1;
		n=sumofsquaresofdigits(n);
		i++;
	}
	if(flag)cout << "-1" << endl;
	else cout << i << endl;
	return 0;
}
