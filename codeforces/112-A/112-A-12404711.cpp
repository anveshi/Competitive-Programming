#include <bits/stdc++.h>
using namespace std;
int main(){
	string s1,s2;
	cin >> s1 >> s2;
	for(int i=0;s1[i];i++){
		s1[i] = tolower(s1[i]);
		s2[i] = tolower(s2[i]);
		// s[i]<='Z'?s[i]^=(1<<5); 
	}
	if(s1<s2)
		cout << -1 << endl;
	else if(s2<s1)
		cout << 1 << endl;
	else 
		cout << 0 << endl;
	return 0;
}