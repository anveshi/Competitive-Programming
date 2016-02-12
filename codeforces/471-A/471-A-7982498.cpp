#include <bits/stdc++.h>
#define lol long long int 
#define ulol unsigned long long int
#define mp make_pair
#define pb push_back
int a[10]={0};
using namespace std;
int main() { 
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int i,x;
	for(i=0;i<6;i++)
	{
		cin >> x;
		a[x]++;
	}
	int flag=0;
	for(i=1;i<10;i++)
	{
		if(a[i] >= 4){flag=1;a[i]-=4;}
	}
	if(flag==0)cout << "Alien" << endl;
	else
	{
		flag=0;
		for(i=1;i<10;i++)
		{
			if(a[i]==2)flag=1;
		}
		if(flag==1)cout << "Elephant"  << endl;
		else cout << "Bear" << endl;
	}
	


	return 0;
}