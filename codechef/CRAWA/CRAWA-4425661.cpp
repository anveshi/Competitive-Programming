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
		if(x==0 && y==0){printf("YES\n");continue;}
		else if(x>0 && x%2==1 && y<=x+1 && y >=1-x){printf("YES\n");continue;}
		else if(x<0 && x%2==0 && y<=-1*x && y>=x){printf("YES\n");continue;}
		else if(y>0 && y%2==0 && x<=y-1 && x >=-1*y){printf("YES\n");continue;}
		else if(y <0 && y%2==0 && x>=y && x<=1-y){printf("YES\n");continue;}
		printf("NO\n");
		 
	}
	return 0;
}