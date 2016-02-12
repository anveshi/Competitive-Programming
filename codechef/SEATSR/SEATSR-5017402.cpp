#include<bits/stdc++.h>
#define MAXX 99999999
using namespace std;
int T,i,j,a,b,k,cost,flag,val,cnt,mo,n,m;
char s[100005];
char t[100005];
inline int abso(int cc)
{
	return(cc >=0 ? cc:-1*cc);
}
inline int Minimum(int aa,int bb,int cc)
{
	if(aa<=bb && aa<=cc)return aa;
	if(bb<=aa && bb<=cc)return bb;
	if(cc<=aa && cc<=bb)return cc;
}
inline int ed()
{
	if(strcmp(s,t)==0)return 0;
	//vector <int> p(m+1);
	//vector <int> d(m+1);
	int *p;
	int *d;
	int *pp;
	p=(int *)malloc(sizeof(int)*(m+1));
	d=(int *)malloc(sizeof(int)*(m+1));
	pp=(int *)malloc(sizeof(int)*(m+1));

	for(i=0; i < min(m+1, k + 1); ++i)
		p[i] = i*a;

	for(j=i;j<=m;j++)p[j]=MAXX;
	for(j=0;j<=m;j++)d[j]=MAXX;

	for(int row = 1; row <= n; ++row)
	{
		d[0] = row*a;

		int mini = max(1, row - k);
		int maxi = min(m+1, row + k + 1);

		if(mini > 1 && mini<=m+1)
			d[mini-1] = MAXX;

		for(int col = mini; col < maxi; ++col) 
		{
			if(s[row-1]== t[col-1])
				cost=0;
			else cost=b;
			d[col] = min(p[col-1]+cost, min(d[col-1]+a, p[col]+a));
		}
	//	for(i=0;i<=m;i++)
	//	{
	//		p[i]=d[i];
	//	}
		pp=p;
		p=d;
		d=pp;
	//	for(i=0;i<=m;i++)
	//	{
	//		assert(p[i]==d[i]);
	//	}
	}
	if(p[m] == MAXX)
		return -1;
	return p[m];
}

int main()
{
	scanf("%d",&T);
	while(T--)
	{
		scanf("%s %s",s,t);
		scanf("%d %d  %d",&a,&b,&k);
		n  = strlen(s);
		m  = strlen(t);
		if(m>n) 
		{
			swap(s,t);
			swap(n,m);
		}	
		if((abso(n-m))*a >k){printf("-1\n");continue;}
		if(a==0)
			printf("0\n");
		else if(b==0)
		{
			val = abso(n-m);
			val*=a;

			if(val <= k)
				printf("%d\n",val);
			else
				printf("-1\n");
		}
		else
		{
			val = ed();
			if(val <=k)
				printf("%d\n",val);
			else printf("-1\n");
		}
	}	
	return 0;
}