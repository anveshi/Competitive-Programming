#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,j,x,l;
	scanf("%d",&n);
		for(i=1;i<=n;i++)
		{
			l=i;
			if(l>n/2)l=n+1-i;
			x=(n+1-2*l)/2;
			for(j=0;j<x;j++)
				cout << "*";
			for(j=0;j<2*l-1;j++)
				cout << "D";
			for(j=0;j<x;j++)
				cout << "*";
			cout << endl;
		}

}