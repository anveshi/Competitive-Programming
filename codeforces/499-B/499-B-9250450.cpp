#include<bits/stdc++.h>
#include<string>
#define lol long long int
#define ulol unsigned long long int
#define pb push_back
#define mp make_pair
#define ss second
#define ff first

using namespace std;

const int MOD = 1000000007;
const int Max = 100002;
lol long_max=numeric_limits<lol>::max();
int main()
{
	//ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	lol  n,m,i,n1,n2;
	cin >> n >> m;
	string str1,str2,str;
	map < string,string> M;
	for(i=0;i<m;i++)
	{		
		cin >> str1 >> str2;
		M[str1]=str2;
	}
	for(i=0;i<n;i++)
	{
		cin >> str;
		n1=str.length();
		n2=(M[str]).length();
		if(n2<n1)cout << M[str] << " ";
		else cout << str << " ";
	}
	cout << endl;
	return 0;
}