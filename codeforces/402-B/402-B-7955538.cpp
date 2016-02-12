#include<bits/stdc++.h>
using namespace std;
int a[1005];
int main()
{
	int n,k,i,A,j,D,cnt;
	cin.tie(NULL);
	cin >> n >> k;
	for(i=0;i<n;i++)
		cin >> a[i];
	D=k;
	int Af,mxcnt;
	mxcnt=1005;
	Af=a[0];
	for(i=0;i<n;i++)
	{
		//A+ik=a[i];
		//A=a[i]-i*k
		A=a[i]-i*k;
		if(A>=1){
		int cnt=0;
		for(j=0;j<n;j++)
		{
			if(a[j]!=A+j*D)cnt++;
		}
		if(cnt < mxcnt)
		{mxcnt=cnt;Af=A;}
		}
	}
	cout << mxcnt << endl;
	for(i=0;i<n;i++)
	{
		if(a[i]!=Af+i*k)
		{
			if(Af+i*k > a[i])
				cout << '+' << " " << i+1 << " " << Af+i*k-a[i] << endl;
			else if(Af+ i*k < a[i])
				cout << '-' << " " << i+1 << " "<<  a[i]-Af-i*k << endl;
		}
	}
	return 0;
}