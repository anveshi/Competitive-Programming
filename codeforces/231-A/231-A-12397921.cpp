#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,c=0,x,ans=0;
	cin >> n;
	for(int i=1;i<=3*n;i++){
		cin >> x;
		x>0?c++:0;
		if(i%3==0){
			if(c>1)
				ans++;
			c=0;
		}
	}
	cout << ans << endl;
	return 0;
}