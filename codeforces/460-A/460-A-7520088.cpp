#include<bits/stdc++.h>
using namespace std;
#define sz(a) ((a).size()) 
#define pb push_back 
int main()
{
	int n,m,sock,day;
	cin >> n >> m;
	sock=n;
	day=1;
	while(1)
	{
		if(day>sock)break;
		//day++;
		if(day%m==0)sock+=1;
		day++;
	}
	cout << day-1 << endl;
	return 0;
}