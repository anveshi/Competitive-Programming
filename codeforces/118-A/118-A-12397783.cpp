#include <bits/stdc++.h>
using namespace std;
bool isvowel(char s){
	return(s=='a'||s=='e'||s=='i'||s=='o'||s=='u'||s=='y');
}
int main(){
	string s;
	cin >> s;
	for(int i=0;i<s.length();i++){
		s[i] = tolower(s[i]);
		if(!isvowel(s[i])){
			cout << "." << s[i] ;
		}
	}
	cout << endl;
	return 0;
}