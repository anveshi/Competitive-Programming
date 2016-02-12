#include <bits/stdc++.h>
#define LL long long int
#define mp make_pair
#define pb push_back
#define ff first
#define ss second
const LL MOD = 1000000007;
using namespace std;
int main(){
	//ios_base::sync_with_stdio(false); 	
	//cin.tie(NULL);
	LL i,j,t,m,n,x,y,sz,ans=0LL;
	cin >> n;
	if(n==1){
		cout << 1 << endl << 1 << endl;
	}
	else if(n==2){
		cout << 1 << endl  << 1 << endl;
	}
	else if(n==3){
		cout << 2 << endl << 1  << " " << 3  << endl;
	}
	else if(n==4){
		cout << 4 << endl;
		cout << 2 << " " << 4 << " " << 1  << " " << 3 << endl;
	}
	else{
		cout << n << endl;
		x = 1;
		y = ((n+1)/2) +1;
		for(i=0;i<n;i++){
			if(i%2==0){cout << x << " ";x++;}
			else {cout << y << " " ;y++;}
		}
		cout << endl;
	}
	return 0;
}