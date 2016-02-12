#include<bits/stdc++.h>
using namespace std;
#define sz(a) ((a).size()) 
#define pb push_back
#define lli long long int
#define inf 1000000000
int main()
{
	long long int a,b,c,x,z,s,temp,i,r,pia;
	set <long long int> sets;
	cin >> a >> b >> c;
	for(i=1;i<=81;i++)
	{
		pia=1;
		r=a;while(r--)pia=pia*i;
		z=c+b*pia;
		if(z<0 || z>=inf)continue;
		temp=z;
		s=0;
		while(temp){
			s+=temp%10;
			temp/=10;
		}
		if(s==i)sets.insert(z);
	}
	cout << sets.size() << endl;
	for(set <long long int>:: iterator it=sets.begin();it!=sets.end();it++)
	{
		cout << *it << " ";
	}
	if(sets.size()!=0)
	cout << endl;
	return 0;
}