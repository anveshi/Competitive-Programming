#include<bits/stdc++.h>
using namespace std;
ifstream fin ("input.txt");
ofstream fout ("output.txt"); //fin fout

int main()
{
	int n,m,i,x;
	fin >> n;
	int count[10002]={0};
	int ps[10002]={0};
	for(i=0;i<n;i++){fin >> x;count[x]++;}
	for(i=1;i<=5000;i++)
	{
		ps[i]=count[i]+ps[i-1];
	}
	int sum=ps[5000];
	int mini=123456789;
	for(i=1;i<=5000;i++)
	{
		int z;
		z=ps[i-1]+sum-ps[2*i];
		mini=min(z,mini);
	}
	fout << mini << endl;
	return 0;
}