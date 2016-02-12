#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define llong long long int
#define ulong unsigned long long int
using namespace std;
int main()
{
	llong n,i,j,t,count,z;
	cin >> n;
	if(n<4)
		cout << "NO" << endl;
	else if(n%2==0)
	{
		cout << "YES" << endl;
		count=0;
		t=n;
		cout << "1 * 2 = 2" << endl;
		cout << "2 * 3 = 6" << endl;
		cout << "6 * 4 = 24" << endl;
		count=3;
		while(t>4)
		{
			cout << t <<  " - " << t-1 << " = " << "1" << endl;
			count++;
			t-=2;
		}
		z=n-count-2;
		while(z>0)
		{	
			cout << "1 * 1 = 1" << endl;
			z--;

		}
		if(n!=4)
		cout << "24 * 1 = 24" << endl;
	}
	else if(n%2==1)
	{
		t=n;
		cout << "YES" << endl;
		cout << "5 * 3 = 15" << endl;
		cout << "4 * 2 = 8" << endl;
		cout << "15 + 8 = 23" << endl;
		cout << "23 + 1 = 24" << endl;
		count=4;
		while(t > 5)
		{

			cout << t <<  " - " << t-1 << " = " << "1" << endl;
			count++;
			t-=2;
		}
		z=n-count-2;
		while(z>0)
		{
			cout << "1 * 1 = 1" << endl;
			z--;
		}
		if(n!=5)
			cout << "24 * 1 = 24" << endl;

	}
	return 0;
}