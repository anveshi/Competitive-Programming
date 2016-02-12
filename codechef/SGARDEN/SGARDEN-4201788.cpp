#include<bits/stdc++.h>
#define MOD 1000000007
using namespace std;
int prime[9593][2];
int a[100001];
int visited[100001];
int D[100001];
int l;
int iss_prime(int k)
{
	int i;
	if(k==2 ||k==3||k==5)return 1;
	else if(k%2==0)return 0;
	else
	{
		for(i=3;i*i<=k;i++)
			if(k%i==0)return 0;
	}
	return 1;
}
void fill_prime()
{
	int k;
	int count;
	count=0;
	for(k=2;k<100000;k++)
	{
		if(iss_prime(k)==1)
		{
			count++;
			prime[count][0]=k;
		}	
	}
	return;
}
int dfs(int i,int len)
{
	len++;
	visited[i]=1;
	if(visited[a[i]])return len;
	else return dfs(a[i],len);
}
long long lcm(int l)
{
	int k,j,i;
	for(i=1;i<=l;i++)
	{
		k=1;
		while(D[i]>1)
		{
			j=0;
			while(D[i]%(prime[k][0])==0)
			{
				D[i]/=prime[k][0];
				j++;
			}
			if(prime[k][1]<j)prime[k][1]=j;
			k++;
		}
	}
	long long int ans=1;
	for(i=1;i<9593;i++)
	{
		if(prime[i][1]>0)
		{
			for(j=1;j<=prime[i][1];j++)
			{
				ans=(ans*prime[i][0])%MOD;
			}

		}
	}
	//for(i=1;i<10;i++)
	//	cout << prime[i][0]<<  " " <<  prime[i][1] << endl;
	return ans;
}
int main()
{
	fill_prime();
//	for(int i=1;i<9593;i++)
//		cout << prime[1][0] <<  " ";
	int T,n,l,i;
	cin >> T;
	while(T--)
	{
		for(i=1;i<9593;i++)
			prime[i][1]=0;
		l=0;
		cin >> n;
		for(i=0;i<=n;i++){visited[i]=0;D[i]=0;}
		for( i=1;i<=n;i++)
			cin >> a[i];
		for(i=1;i<=n;i++)
		{
			if(visited[i]==0)
			{
				l++;
				D[l]=dfs(i,0);
			}
		}
	cout << lcm(l) << endl; 
//		for(i=1;i<=l;i++)
	//	cout << D[i] <<  " ";
	}
	return 0;
}