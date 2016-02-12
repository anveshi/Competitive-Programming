#include<bits/stdc++.h>
#define lol long long int
using namespace std;
map <int,lol>mp;
lol fun(lol n)
{
	if(n<=4)return n;
	else if(mp[n])return mp[n];
	else return mp[n]=max(n,fun(n/2)+fun(n/3)+fun(n/4));
}
int main()
{
	int n;
	mp.clear();
	while(cin >> n)
		cout << fun(n) << endl;
	return 0;
}
