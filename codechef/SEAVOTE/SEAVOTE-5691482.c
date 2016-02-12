#include<stdio.h>
int main()
{
	int T,n,i,x,a,c;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d",&n);
	        a=0,c=0;
		for(i=0;i<n;i++){
			scanf("%d",&x);
			a+=x;
			if(x)c=c+x-1;
		}
		if(c<100 && a>=100)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}