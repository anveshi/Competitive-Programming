#include<iostream>
using namespace std;
int main()
{
	unsigned long long int T,m,n,p;
	cin >> T;
	while(T--)
	{
		cin >> m >> n;
		if(m%2==0 || n%2==0)
			cout << "1/2" << endl;
		else 
		{
			p= m*n;
			cout << p/2 << "/" <<  p  << endl;
		}	
	}
	return 0;
}