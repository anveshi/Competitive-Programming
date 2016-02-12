#include <bits/stdc++.h>
#define LL long long int
#define mp make_pair
#define pb push_back
#define ff first
#define ss second
using namespace std;
int a[30],b[30],c[30],d[30];
int main(){
	string s,t;
	int n1,n2,i,j,y=0,w=0,k1,k2;
	cin >> s >> t;
	n1=s.length();
	n2=t.length();
	for(i=0;i<n2;i++){
		if(t[i]>='a')a[t[i]-'a']++;
		else b[t[i]-'A']++;
	}
	for(i=0;i<n1;i++){
		if(s[i]>='a')c[s[i]-'a']++;
		else d[s[i]-'A']++;
	}
	for(i=0;i<26;i++){
		k1 = min(a[i],c[i]);
		k2 =min(b[i],d[i]);
		y = y +k1+k2;
		a[i]-=k1;c[i]-=k1;
		b[i]-=k2;d[i]-=k2;
	}
	for(i=0;i<26;i++){
		k1 = min(a[i],d[i]);
		k2 = min(b[i],c[i]);
		w = w+k1+k2; 	
	}
	cout << y << " " << w << endl;
	return 0;
}