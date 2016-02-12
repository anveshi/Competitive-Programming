//anveshi
#include<bits/stdc++.h>
#define mp make_pair
#define pb push_back
#define ff first
#define ss second
using namespace std;
int main()
{
	int i,j,n,k,it=0;
	cin >> n;
	int a[n+1],b[n+1];
	for(i=0;i<n;i++)
	{
		cin >> a[i]  >> b[i] ;
	}
	int v1[n+1],v2[n+1];
	for(i=0;i<n;i++){v1[i]=-1;v2[i]=-1;}
	j=0;k=0;
	for(i=0;i<n;i++)
	{
		if(a[j] > b[k])
		{
			v2[k]=it;
			k++;
		}
		else
		{
			v1[j]=it;
			j++;
		}
		it++;
	}
	for(i=0;i<n;i++)
	{
		if(i<n/2){cout << "1";continue;}
		if(v1[i]<=n-1 && v1[i]>=0)cout << "1";
		else cout << "0";
		//cout << v1[i] ;
	}
	cout << endl;
	for(i=0;i<n;i++)
	{
		if(i<n/2){cout << "1";continue;}
		if(v2[i]<=n-1 && v2[i]>=0)cout << "1";
		else cout << "0";
		//cout << v2[i] ;
	}
	cout << endl;

	return 0;
}