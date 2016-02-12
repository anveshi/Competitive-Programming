#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,prev,ans=0;
	string s;
	cin >> n >> s;
	cout << (s.length() - (unique(s.begin(), s.end())-s.begin())) << endl;
	return 0;
}