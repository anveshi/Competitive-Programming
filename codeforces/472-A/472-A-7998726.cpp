#include<bits/stdc++.h>
#define MAX 1000000
#define lol long long int
#define ulol unsigned long long int
#define pb push_back
#define mp make_pair
#define ff first
using namespace std;
vector <int> is_prime(MAX+1,1);
vector <int>prime;

inline void generate_prime()
{
	prime.clear();
	int i,j;
	for(i=2;i<MAX;i++)
	{
		if(is_prime[i])
		{
			prime.push_back(i);
			for(j=2*i;j<MAX;j+=i)
				is_prime[j]=0;
		}
	}
	int sz=prime.size();
	/*for(i=0;i<sz;i++)
	{
		cout << prime[i] << endl;
	}*/
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	lol x,y,n,m,i;
	generate_prime();
	lol sz=prime.size();
	cin >> n;
	for(i=4;i<n;i++)
	{
		if(is_prime[i]==0 && is_prime[n-i]==0)
		{
			cout << i << " " << n-i << endl;
			return 0;
		}
	}
	
	return 0;
}