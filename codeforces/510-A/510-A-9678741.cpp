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
	int n,m,i,j;
	cin >> n >> m;
	for(i=1;i<=n;i++){
		if(i%2==1)
		{
			for(j=0;j<m;j++)cout<<"#";
		}
		else if(i%4==0){
			cout<<"#";
			for(j=0;j<m-1;j++)cout<<".";
		}
		else {
			for(j=0;j<m-1;j++)cout<<".";
			cout<<"#";
		}
		cout<< endl;
	}
	return 0;
}