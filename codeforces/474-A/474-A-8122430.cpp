#include<bits/stdc++.h>
using namespace std;
#define lol long long int
#define ulol unsigned long long int
#define pb push_back
#define mp make_pair
#define ss second
#define ff first
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	string s[3];
	int ko,i,j,k;
	s[0]="qwertyuiop";
	s[1]="asdfghjkl;";
	s[2]="zxcvbnm,./";
	string str,a;
	cin >> a >> str;
	a[0]=='R'?ko=-1:ko=1;
	for(i=0;i<str.length();i++)
	{
		for(j=0;j<3;j++)
		{
			for(k=0;k<s[j].length();k++)
			{
				if(str[i]==s[j][k])
				{
					cout << s[j][ko+k] ;
				}
			}
		}
	}
	cout << "\n" << endl;
	return 0;
}