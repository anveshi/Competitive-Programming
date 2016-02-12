#include<bits/stdc++.h>
#define inf 100000000
using namespace std;
int shukla[100010];
int main()
{
	int l,i,j,k,x;
	char a[100010];       
	cin >> a;
	l=strlen(a);
	if(l==1){cout << 0 << endl;return 0;}
	else if(a[0]==a[l-1]&&l!=1){cout << 1 << endl;return 0;}
	for(i=0;i<=l;i++)
		shukla[i]=inf;
	shukla[0]=0;
	shukla[1]=1;
	int minwell[10];
	for(i=0;i<10;i++)minwell[i]=inf;
		minwell[a[0]-'0']=0;
	if(minwell[a[1]-'0'] >1)
		minwell[a[1]-'0']=1;
	for(i=2;i<l;i++)
	{
		shukla[i]=min(shukla[i-1]+1,minwell[a[i]-'0'] +1);
		minwell[a[i]-'0']=min(minwell[a[i]-'0'],shukla[i]);
		k=i;
		while(shukla[k-1]>shukla[k]+1)
		{
			shukla[k-1]=min(minwell[a[k-1]-'0']+1,shukla[k]+1);
			minwell[a[k-1]-'0']=min(shukla[k-1],minwell[a[k-1]-'0']);
			k--;
		}
	}
//for(i=1;i<=l;i++)
//		cout << shukla[i-1]<< " ";
//			cout << endl;
/*	for(i=l-1;i>=2;i--)
	{
		if(shukla[i]> shukla[i+1]+1)
				shukla[i]=shukla[i+1]+1;
		else if(shukla[i] > shukla[i-1]+1)
			shukla[i]=shukla[i-1]+1;
	}*/
for(i=2;i<l;i++)
	{
		shukla[i]=min(shukla[i-1]+1,minwell[a[i]-'0'] +1);
		minwell[a[i]-'0']=min(minwell[a[i]-'0'],shukla[i]);
		k=i;
		while(shukla[k-1]>shukla[k]+1)
		{
			shukla[k-1]=min(minwell[a[k-1]-'0']+1,shukla[k]+1);
			minwell[a[k-1]-'0']=min(shukla[k-1],minwell[a[k-1]-'0']);
			k--;
		}
	}
//	for(i=1;i<=l;i++)
//		cout << shukla[i-1]<< " ";
//			cout << endl;
		cout << shukla[l-1]<< endl;
	return 0;
}