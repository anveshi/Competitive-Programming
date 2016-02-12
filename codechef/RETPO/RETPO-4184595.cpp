#include<bits/stdc++.h>
using namespace std;
int f3(int x)
{
	if(x%2==1)
		return (2*x+1);else return (2*x);
}
int f1(int x)
{
	if(x%2==1)
		return (2*x-1);else return (2*x);
}
int fun(int a,int b)
{
	int ans=0;
	if(a ==0)
	{
//		cout << "a==0" << endl;
		if(b<0)
		b=-1*b;
		if(b%2==0) return 2*b;
		else return (2*b-1);
	}
	else if(b==0)
	{
		if(a<0)
		a=(-1*a);
//		cout << "b==0" << endl;
		if(a%2==0) return 2*a;
		else return (2*a+1);
	}
	else if(a >0 && b>0)
	{
//		cout << "a>0 && b>0" << endl;
		if(a>=b)ans+=2*b+f3(a-b);
		else ans+=(2*a)+f1(b-a);
		return ans;
	}
	else if(a>0 && b<0)
	{
//		cout << "a>0 && b<0" << endl;
		b=(-1)*b;
		if(a>=b)ans+=2*b+f3(a-b);
		else ans+=2*a+f1(b-a);
		return ans;
	}
	else if(a<0 && b>0)
	{
//		cout << "a<0 && b>0" << endl;
		a=(-1)*a;
		if(a>=b)ans+=2*b+f3(a-b);
		else ans+=2*a+f1(b-a);
		return ans;
	}
	else if(a <0 && b< 0)
	{
//		cout << "a<0 && b<0" << endl;
		a=(-1)*a;b=(-1)*b;
		if(a>=b)ans+=2*b+f3(a-b);
		else ans+=2*a+f1(b-a);
		return ans;
	}
}
int main()
{
	int n,a,b;
	cin >> n;
	while(n--)
	{
		cin >> a >> b;
		cout << fun(a,b) << endl;
	}
	return 0;
}