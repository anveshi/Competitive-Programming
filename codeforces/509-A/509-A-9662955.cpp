#include<bits/stdc++.h>
#define lol long long int
#define ulol unsigned long long int 
#define mp make_pair
#define pb push_back
#define ff first
#define ss second
using namespace std;
const lol lol_max=numeric_limits<lol>::max();
int main(){
	int a[100][100];
	int m,i,j,n;
	cin >> n;
	for(i=0;i<=n;i++){a[1][i]=1;a[i][1]=1;}
	for(i=2;i<=n;i++){
		for(j=2;j<=n;j++)
			a[i][j]=a[i-1][j]+a[i][j-1];
	}
	cout << a[n][n] << endl;
	return 0;
}