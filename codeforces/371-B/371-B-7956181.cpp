#include<bits/stdc++.h>
#define lol long long int
#define ulol unsigned long long int
using namespace std;
int  main()
{
	int a,b;
	int A[3]={0},B[3]={0};
	cin >> a >> b;
	while(a%2==0)
	{
		a/=2;
		A[0]++;
	}
	while(a%3==0)
	{
		a/=3;
		A[1]++;
	}
	while(a%5==0)
	{
		a/=5;
		A[2]++;
	}
	while(b%2==0)
	{
		b/=2;
		B[0]++;
	}
	while(b%3==0)
	{
		b/=3;
		B[1]++;
	}
	while(b%5==0)
	{
		b/=5;
		B[2]++;
	}
	if(a==b)
	{
		cout << abs(A[0]-B[0])+abs(A[1]-B[1])+abs(A[2]-B[2]) << endl;
	}
	else 
		cout << "-1" << endl;

	return 0;
}