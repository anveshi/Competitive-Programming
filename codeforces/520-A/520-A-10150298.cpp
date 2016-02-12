#include <bits/stdc++.h>
#define LL long long int
#define mp make_pair
#define pb push_back
#define ff first
#define ss second
using namespace std;
int a[26];
int main(){
	int n,i;
	string s;
	cin >> n;
	cin >> s;
	for(int i=0;i<n;i++){
		if(s[i]>='a')a[s[i]-'a']++;
		else a[s[i]-'A']++;
	}
	for(i=0;i<26;i++){if(a[i]==0){cout << "NO" << endl;return 0;}}
	cout << "YES"  << endl;

	return 0;
}