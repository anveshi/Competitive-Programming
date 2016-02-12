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
	int n,k,a[104],i,j;
	int ans[104][104];
	int MAX = INT_MIN;
	int MIN = INT_MAX;
	cin >> n >> k;
	for(i=0;i<n;i++){
		cin >> a[i];
		if(a[i]>MAX)MAX = a[i];
		if(a[i]<MIN)MIN = a[i];
	}
	if(MAX-MIN>k){cout<< "NO" << endl;return 0;}
	else{
		for(i=0;i<n;i++){
			for(j=0;j<a[i];j++){
				if(j<=MIN)
				ans[i][j]=1;
				else ans[i][j]=ans[i][j-1]+1;
			}
		}
		cout << "YES" << endl;
		for(i=0;i<n;i++){
			for(j=0;j<a[i];j++)
			{
				cout << ans[i][j] << " ";
			}
			cout << endl;
		}
	}
	return 0;
}