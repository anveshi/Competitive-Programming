#include<stdio.h>
int gcd(int x,int y)
{
	return (y==0?x:gcd(y,x%y));
}
int main()
{
	int T,n,i,j,ans,q,l,r,f;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d %d",&n,&q);
		int a[n],g[n],gr[n],gc;
		for(i=0;i<n;i++)
			scanf("%d",a+i);
		gc=g[0]=a[0];
		for(i=1;i<n;i++)
			gc=g[i]=gcd(gc,a[i]);
		gc=gr[n-1]=a[n-1];
		for(i=n-2;i>=0;i--)
			gc=gr[i]=gcd(gc,a[i]);
		while(q--){
			scanf("%d%d",&l,&r);
			l--;r--;f=0;
			if(l>0)ans=g[l-1],f++;
			if(r+1<n){
				if(f)
					ans=gcd(ans,gr[r+1]);
				else 
					ans=gr[r+1];
			}
			printf("%d\n",ans);
		}
	}
	return 0;
}