#include<bits/stdc++.h>
using namespace std;
int main()
{
	//char cc[100];cin >> cc;float f;stringstream(cc) >> f;cout << f << endl;
	int T,n,l,i,start,end,pp;
	cin >> T;
	while(T--)
	{
		pp=0;
		char ss[1000001];
		memset(ss,'\0',1000001);
		int value[130]={0};
		cin >> n;
		char c[n+2],p[n+2];
		for(i=1;i<=n;i++)
		{
			cin >> c[i] >> p[i];
			value[c[i]-'\0'] = i;
		}
		cin >> ss;
		l=strlen(ss);
		for(i=0;i<l;i++)
		{
			if(value[ss[i]-'\0']!=0)
				ss[i]=p[value[ss[i]-'\0']];
			if(ss[i]=='.')
				pp=1;
		}
		start=0;i=0;
		while(ss[i]=='0')
			i++;
		start=i;
		end=strlen(ss)-1;
	if(pp)
	{
		i=strlen(ss)-1;
		while(ss[i]=='0')
			i--;
		if(ss[i]=='.')
			i-=1;
		end=i;
	}
		for(i=start;i<=end;i++)
			cout << ss[i] ;
	//	cout << endl << "start " << start << " end " << end << endl;
		if(start > end)
			cout << "0";
		cout << endl;
	}
	return 0;
}