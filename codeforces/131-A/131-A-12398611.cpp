#include <bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin >> s;
	bool Ok1=true,Ok2=true;
	for(int i=0;i<s.length();i++){
		if(islower(s[i]))
			Ok1=false;
		if(i>0 && islower(s[i]))
			Ok2=false;
	}
	if(isupper(s[0])){
		Ok2=false;
	}
	if(Ok1||Ok2){
		for(int i=0;i<s.length();i++){
			cout << (char)(s[i]^(1<<5));
		}
	}
	else
		cout << s << endl;
	return 0;
}