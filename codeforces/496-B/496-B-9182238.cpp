#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main()
{_
	int n,i,j;
	cin >> n;
	string ans,temp1,temp2;
	cin >> ans;
	temp2=ans;
	for(i=0;i<10;i++)
	{
		temp1=temp2;
		for(j=0;j<n;j++)temp1[j]='0'+(temp2[j]-'0'+i)%10;
		for(j=0;j<n;j++)
		{
			rotate(temp1.begin(),temp1.begin()+1,temp1.end());
			if(ans>temp1)
				ans=temp1;
		}
	}
	cout << ans << endl;
	return 0;
}