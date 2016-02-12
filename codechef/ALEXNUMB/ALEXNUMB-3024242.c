#include<stdio.h>
int main()
{
long long int t,i,n;
scanf("%lld",&t);
while(t--)
{
scanf("%lld",&n);
long long int a[n];
for(i=0;i<n;i++)
scanf("%lld",&a[i]);
printf("%lld\n",n*(n-1)/2);
}
return 0;
}