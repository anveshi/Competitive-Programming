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
	int i,n;
	cin >> n;
	int z=0;
	for(i=0;i<=n;i++)
	{
		z=z+(i*(i+1))/2;
		if(n>=z)continue;
		else break;
	}
	cout << i-1  << endl;
	return 0;
}