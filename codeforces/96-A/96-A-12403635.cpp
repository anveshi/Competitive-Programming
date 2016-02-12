#include <bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin >> s;
	char prev = s[0];
	int m=1;
	for(int i=1;i<s.length();i++){
		if(s[i]==prev)
			m++;
		else{
			prev = s[i];
			m=1;
		}
		if(m>=7){
			cout << "YES" << endl;
			return 0;
		}
	}
	cout << "NO" << endl;
	return 0;
}