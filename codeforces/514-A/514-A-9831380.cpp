#include<bits/stdc++.h>
#define LL long long int
#define mp make_pair
#define pb push_back
#define ff first
#define ss second
using namespace std;
int main(){
	LL n,k,i,j,x;
	LL a[100];
	string s;
	cin >> s;
	n = s.length();
	for(i=0;i<n;i++)
		a[i]=s[i]-'0';
	for(i=0;i<n;i++){
		x=9-a[i];
		if(x<a[i]){
			if(i==0 && x==0)continue;
			a[i]=x;
		}
	}
	for(i=0;i<n;i++)cout<< a[i];
	cout<< endl;
	return 0;
}