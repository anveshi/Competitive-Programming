#include <bits/stdc++.h>
#define LL long long int
#define mp make_pair
#define pb push_back
#define ff first
#define ss second
const LL MOD = 1000000007;
using namespace std;
int main(){
	ios_base::sync_with_stdio(false); 	
	cin.tie(NULL);
	LL i,j,m,n;	
	string s;
	cin >> n;
	cin >> s;
	int f=0;
	for(i=0;i<n;i++){
		for(j=1;j<=n;j++){
			if(i+4*j<n){
				if(s[i]=='*' && s[i+j]=='*' && s[i+2*j]=='*' && s[i+3*j]=='*' && s[i+4*j]=='*'){
					f=1;break;
				}
			}
		}
			if(f==1)break;
	}
	if(f==0)
		cout << "no" << endl;
	else 
		cout << "yes" << endl;

	return 0;
}