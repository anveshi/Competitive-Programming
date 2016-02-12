#include<stdio.h>
#include<math.h>
int check_palindrome(int n)
{
	int temp;
	temp=n;
	int reverse=0;
	while(n)
	{
		reverse=reverse*10+n%10;
		n/=10;
	}
	if(temp==reverse)
		return 1;
	else 
		return 0;
}
int check_prime(int n)	
{
	int k,i;
	if(n==1 || n==2 || n==3)
		return 1;
	else if(n%2==0)
		return 0;
	else
	{
		k=sqrt(n);
		for(i=3;i<=k;i=i+2)
		{
			if(n%i==0)
				return 0;
		}
	}
	return 1;

}
int main()
{
	int n,i;
	scanf("%d",&n);
	for(i=n;;i++)
	{
		if(check_palindrome(i))
		{
			if(check_prime(i))
			{
				printf("%d\n",i);break;
			}
			else
				continue;
		}
		else
			continue;
	}

	return 0;
}