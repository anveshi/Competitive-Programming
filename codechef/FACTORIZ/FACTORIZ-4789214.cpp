#include<bits/stdc++.h>
#define lli unsigned long long int
using namespace std;
lli isprime[100001]={0};
char s[1010];
vector <lli> prime;
lli i;
void seive()
{
	lli s;
	s=sqrt(100000);
	lli i,j;
	for(i=2;i<=s;i++)
	{
		if(isprime[i]==0)
		{
			for(j=i*i;j<=100000;j+=i)
			{
				isprime[j]=1;
			}
		}
	}
	prime.clear();
	for(i=2;i<100000;i++)
		if(isprime[i]==0)prime.push_back(i);
	return ;

}
void solve(lli value)
{
	vector <lli> answer;
	lli sz;
	answer.clear();
	sz=prime.size();
	for(i=0;i<sz;i++)
	{
		while(value%prime[i]==0){
			answer.push_back(prime[i]);
			value/=prime[i];}
	}
	if(value!=1)answer.push_back(value);
	lli siz=answer.size();
	cout <<  siz << endl;
	for(i=0;i<siz;i++)
		cout  << answer[i] << endl;
	return ;
	
}
int main()
{
	seive();
	lli j,n;
//	for(vector <lli>:: iterator it=prime.begin();it!=prime.end();it++)
//		cout << *it << " ";
	
	lli t;
	lli value;
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%s",s);
		n=strlen(s);
		if(n<19)
		{
			value=0;
			for(j=0;j<n;j++)
				value=value*10+s[j]-'0';
			solve(value);
		}
		else 
		{cout << 1 << endl;cout  <<  s << endl;}
	}
	return 0;
}