#include<stdio.h>
int main()
{
	int T,n,i;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d",&n);
		int b[n],a=0,c=0;
		for(i=0;i<n;i++){
			scanf("%d",b+i);
			a+=b[i];
			if(b[i])c=c+b[i]-1;
		}
		if(c<100 && a>=100)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}