#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		int x,y;
		int flag=0;
		scanf("%d %d",&x,&y);
		if(x==0 && y==0)flag=1;
		else if(x>0 && x%2==1 && y<=x+1 && y >=1-x)flag=1;
		else if(x<0 && x%2==0 && y<=-1*x && y>=x)flag=1;
		else if(y>0 && y%2==0 && x<=y-1 && x >=-1*y)flag=1;
		else if(y <0 && y%2==0 && x>=y && x<=1-y)flag=1;
		if(flag==1)printf("YES\n");
		else printf("NO\n");

	}
	return 0;
}