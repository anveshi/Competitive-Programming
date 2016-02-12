#include <bits/stdc++.h>
#define LL long long int
#define mp make_pair
#define pb push_back
#define ff first
#define ss second
using namespace std;
int main(){
	int i,j,n,f=0;		
	string s,t,l;
	cin >> s >> t;
	l=s;
	n=s.length();
	i=n-1;
	while(i>=0){
		if(s[i]=='z'){i--;continue;}
		else{
			s[i]=char(s[i]+1);
			break;
		}
		i--;
	}
	i++;
	while(i<n){
		s[i]='a';
		i++;
	}
	if(l<s && s<t )
		cout << s << endl;
	else
		cout << "No such string" << endl;

	return 0;
}