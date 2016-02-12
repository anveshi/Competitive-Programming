#include<iostream>
#define f(i,a,b) for(int i=a;i<b;i++)
using namespace std;
int a[2345];
int ret[2002][2002];
int fun(int start,int end,int age)
{
	if(ret[start][end]!=-1)return ret[start][end];
	if(start==end)return age*a[start];
	else
	{
		int leftpicked,rightpicked;
		leftpicked = a[start]*age + fun(start+1,end,age+1);
		rightpicked =a[end]*age + fun(start,end-1,age+1);
		return ret[start][end] = max(leftpicked,rightpicked);
	}
}
int main()
{
	ios_base::sync_with_stdio(false); 
	cin.tie(NULL);
	int n;
	cin>>n;
	f(i,0,n)	
		cin >> a[i];

	f(i,0,n+1)
		f(j,0,n+1)
			ret[i][j]=-1;

	cout<<fun(0,n-1,1)<<endl;
	return 0;
}
