//anveshi
#include<bits/stdc++.h>
#define lol long long int
#define mp make_pair
#define pb push_back
#define ff first
#define ss second
using namespace std;
int main()
{
	int n,m,i,a=0,b=0,c=0;
	cin >> n >> m;
	for(i=1;i<=6;i++)
	{
		if(abs(n-i) < abs(m-i))
			a++;
		else if(abs(n-i)==abs(m-i))
			b++;
		else
			c++;
	}
	cout << a << " " <<  b  << " " << c<< endl;
	return 0;
}