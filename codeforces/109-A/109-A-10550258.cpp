#include <bits/stdc++.h>
#define LL long long int
const LL MOD = 1000000007;
using namespace std;
bool Possible[1000010];
int main(){
	int n,a4,a7,ans,z;
	cin >> n;
//	4*x+7*y=n;
	ans = INT_MAX;
	a4=a7=INT_MAX;
	for(int x=0;x*4<=n;x++){
		z = n-4*x;
		if(z%7==0){
			z/=7;
		if(x+z<ans){
			a4=x;a7=z;
			ans=x+z;
		}
		else if(x+z==ans){
			if(a4>x){
				a4=x,a7=z;
			}
		}
		}
	}
	if(ans==INT_MAX)cout << -1 << endl;
	else {
		while(a4--)cout << 4 ;
		while (a7--)cout << 7;
		cout << endl;
	}
	return 0;
}