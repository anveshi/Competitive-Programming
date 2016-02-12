#include<bits/stdc++.h>
using namespace std;
int prime[10000];
int count;
int result[10001]={0};
bool is_prime(int x);
void init_prime()
{
	int j=0,count = 0;
	for(int i=2;i<=10000;i++)
	{
		if(is_prime(i))
		{
			prime[j++]=i;
			count ++;
		}
	}
	//for(int i=0;i<count;i++)
	//	cout << prime[i] << " ";
	//printf("\n\n,count =%d\n",count);
	return ;
}
inline bool is_prime(int x)
{
	if(x==2|| x==3)
		return true;
	else 
	{
		for(int i=2;i<=sqrt(x);i++)
			if(x%i==0)
				return false;
	}
	return true;
}
void give_result()
{
	for(int i=0;i<1229;i++)
	{
		for(int j=0;j<1229;j++)
		{
			if(prime[i]+2*prime[j] < 10001)
				result[prime[i]+2*prime[j]]++;
			if(2*prime[j] > 10001)
				break;
		}
	}
//	for(int i=0;i<10;i++)
//		printf("%d ",result[i]);
//	printf("\n");
	return;
}
int main()
{
	init_prime();
	int T,n;
	give_result();
	cin >> T;
	while(T--)
	{
		cin >> n;
		cout << result[n] << endl;
	}
	return 0;
}