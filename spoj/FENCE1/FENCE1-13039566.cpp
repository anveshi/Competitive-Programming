#include<bits/stdc++.h>
#define lol long long int
#define ulol unsigned long long int
#define mp make_pair
#define pb push_back
#define ff first
#define ss second
const double PI = 2*acos(0);
using namespace std;
int main()
{
	cout.precision(2);
	double a,r;
	cin.tie(NULL);
	int l;
	while(cin >> l)
	{
		if(!l)break;
		r=l/(PI);
		a=PI*r*r/2;
		printf("%0.2lf\n",a);
	}

	return 0;
}
