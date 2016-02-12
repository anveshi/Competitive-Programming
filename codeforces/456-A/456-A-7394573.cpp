#include<bits/stdc++.h>
using namespace std;
typedef struct node{
	int a;
	int b;
}node;
int compare (const void * aa, const void * bb)
{
	  node *orderA = (node *)aa;
	    node *orderB = (node *)bb;
	      return ( orderA->a - orderB->a );
}
int main()
{
	int n,i;
	scanf("%d",&n);
	node x[n];
	for(i=0;i<n;i++)
	{
		scanf("%d %d",&x[i].a,&x[i].b);
	}
	qsort (x,n, sizeof(node), compare);
	int flag=0;
	for(i=0;i<n-1;i++)
	{
		if(x[i].b>x[i+1].b)
		{	flag=1;break;}
	}
	if(flag==1)
		cout << "Happy Alex" << endl;
	else cout << "Poor Alex" << endl;

	return 0;
}