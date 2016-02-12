#include<bits/stdc++.h>
using namespace std;
int main()
{
	//ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n,i,j;
	string str1,str2,str;
	str1="LRP";str2="RLP";str="";
	cin >> n;
	int a[n];
	for(i=0;i<n;i++)
	{
		cin >> a[i];
	}
	for(i=0;i<n;i++)
	{
		if(i==0)
		{
			for(j=0;j<a[i];j++)
			{
				str=str+str2;
			}
			str+='R';
		}
		else
		{
			for(j=0;j<a[i];j++)
				str=str+str1;
			if(i!=n-1)str+='R';
		}
	}
	cout << str << endl;

	return 0;
}