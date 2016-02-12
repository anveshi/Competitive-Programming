#include<iostream>
using namespace std;
inline unsigned long long int checkodd(unsigned long long int x)
{
	return(x%2==1?1:0);
}
inline unsigned long long int gcd(unsigned long long int a,unsigned long long int b)
{
	 if ( a==0 ) return b;
	return gcd ( b%a, a );
}
int main()
{
	unsigned long long int T,m,n,om,em,on,en,x,y,g;
	cin >> T;
	while(T--)
	{
		cin >> m >> n;
		om = m/2 + checkodd(m);
		em = m - om;
		on = n/2 +checkodd(n);
		en= n-on;
		x=em*on + om*en;
		y=m*n;
		g=gcd(x,y);
		cout << x/g <<"/" << y/g << endl;
	}
	return 0;
}