#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,prev,ans=0;
	string s;
	cin >> n;
	cin >> s;
	prev = s[0];
	for(int i=1;s[i];i++){
		if(s[i]==prev)
			ans++;
		else{
			prev = s[i];
		}
	}
	cout << ans << endl;
	return 0;
}