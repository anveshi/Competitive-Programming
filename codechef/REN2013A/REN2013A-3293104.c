#include<stdio.h>
#include<math.h>
int  main()
{
	int t,a,b,b1,b2,s1,s2,i,t1,t2;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d",&a,&b);
		b1=0;
		b2=0;
		s1=0;
		s2=0;
		t1=a;
		t2=b;
		while(t1)
		{
			if(t1%10 > b1)
				b1=t1%10;
			t1/=10;
		}
		while(t2)
		{
			if(t2%10 > b2)
				b2=t2%10;
			t2/=10;
		}
		i=0;
		while(a)
		{
			s1=s1+(a%10)*(pow((b1+1),i));
			a=a/10;
			i++;
		}
		i=0;
		while(b)
		{
			s2=s2+(b%10)*pow((b2+1),i);
			b=b/10;
			i++;
		}
		printf("%d\n",s1+s2);
	}
	return 0;
}