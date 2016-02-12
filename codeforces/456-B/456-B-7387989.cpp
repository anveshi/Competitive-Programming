#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,l;
	char s[100005];
	scanf("%s",s);
	l=strlen(s);
	int flag=0;
	if(l==1)
	{
		if((s[0]-'0')%4==0)flag=1;
	}
	else{
		if(((s[l-2]-'0')*10+s[l-1]-'0')%4==0)flag=1;
	}
	if(flag)cout << "4" << endl;
	else cout << "0" << endl;


	return 0;
}