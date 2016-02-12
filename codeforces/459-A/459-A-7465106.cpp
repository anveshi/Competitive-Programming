#include<bits/stdc++.h>
using namespace std;
#define sz(a) ((a).size()) 
#define pb push_back 
int mod(int a)
{
	if(a<0)return -1*a;
	else return a;
}
int main()
{
	int x1,y1,x2,y2,x3,y3,x4,y4,f;
	f=0;
	cin >> x1 >> y1 >> x2 >> y2;
	if(y1==y2)
	{
		if(x2>x1)
		{
			x3=x1;
			y3=y1+x2-x1;
			x4=x2;
			y4=y2+x2-x1;f=1;
		}
		else
		{
			x3=x2;
			y3=y2+x1-x2;
			x4=x1;
			y4=y1+x1-x2;f=1;
		}
	}
	else if(x1==x2)
	{
		y3=y1;y4=y2;x3=x1+mod(y2-y1);x4=x2+mod(y2-y1);
		f=1;
	}
	else
	{
		if(mod(y2-y1) == mod(x2-x1))
		{
			x3=x2;y3=y1;x4=x1;y4=y2;f=1;
		}
	}
	if(f==0)cout << "-1" << endl;
	else cout << x3 << " " << y3  << " "<< x4 << " "<< y4 << endl; 
	return 0;
}