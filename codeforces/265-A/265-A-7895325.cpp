#include<bits/stdc++.h>
#define llong long long int 
#define ulong unsigned long long int
#define pb push_back
#define mp  make_pair
using namespace std;
int main()
{
	llong n,m,i,j,k,a,b,x,y;
	char s1[100];char s2[100];
	scanf("%s",s1);
	scanf("%s",s2);
	int sz1,sz2;
	sz1=strlen(s1);sz2=strlen(s2);
	int temp;
	temp=0;
	for(i=0;i<sz2;i++)
	{
		if(s2[i]==s1[temp])
			temp++;
	}
	cout << temp+1 << endl;
	return 0;
}