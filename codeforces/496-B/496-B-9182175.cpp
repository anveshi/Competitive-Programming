#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main()
{_
	int n,i,j;
	cin >> n;
	vector <string> s(10);
	string ans;
	cin >> s[0];
	ans=s[0];
	s[0]+=s[0];
	for(i=1;i<10;i++)
	{
		s[i]=s[0];
		for(int j=0;j<2*n;j++)
		{
			s[i][j]='0'+(s[i][j]-'0'+i)%10;
		}
	}
	for(i=0;i<10;i++){
		for(j=0;j<n;j++)
		{
			if(ans>s[i].substr(j,n))
				ans=s[i].substr(j,n);
		}
	}
	cout << ans << endl;
	return 0;
}