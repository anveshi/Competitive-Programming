#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,x;
	cin >> a >> b;
	x=__gcd(a,b);
	a/=x;b/=x;
	if(a-b==1 || b-a==1)
		cout << "Equal" << endl;
	else if(a<b)
		cout << "Dasha" << endl;
	else cout << "Masha" << endl;
	return 0;
}