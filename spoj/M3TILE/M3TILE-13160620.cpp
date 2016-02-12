#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[31],n;
	a[0]=1;a[1]=0;a[2]=3;a[3]=0;
	for(int i=4;i<31;i++)a[i]=4*a[i-2]-a[i-4];
	while(cin >> n)
	{
		if(n==-1)return 0;
		cout<<a[n]<<endl;
	}
	return 0;
}
