#include<stdio.h>
int main()
{
int T;
scanf("%d",&T);
while(T--)
{	
char c;
int t1a,t1b,t2a,t2b;
float dist,i=0;
float t1;
float t2;
float diff;
scanf("%d %c %d",&t1a,&c,&t1b);
scanf("%d %c %d",&t2a,&c,&t2b);
scanf("%f",&dist);
t1=(60*t1a)+t1b;
t2=(60*t2a)+t2b;
diff=t1-t2;
if(2*dist>diff)
{
i=((2-diff/dist)*dist)/2;
}
printf("%0.1f %0.1f\n",diff+dist,i+diff);
}
return 0;
}