#include<bits/stdc++.h>
#define mod 1000000007
#define llong long long int
#define ulong unsigned long long int
using namespace std;
int main()
{
	char str[105];
	int n;
	cin >> n;
	scanf("%s",str);
	int i,count;
	count=0;
	for(i=0;i<n;i++)
	{
		if(str[i]=='1')
			count++;
		else break;
	}
	if(count==n)
		printf("%d\n",count);
	else printf("%d\n",count+1);
	return 0;
}