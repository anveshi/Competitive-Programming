#include<bits/stdc++.h>
#define lol long long int
using namespace std;
string s1,s2,s;
int main(){
	int t,i,c1,c2,n;
	scanf("%d",&t);
	while(t--){
		cin >> s;
		s1="";
		s2="";
		n=s.length();
		for(i=0;i<n;i++){
			if(i%2==0)
				s1+="+",s2+="-";
			else 
				s1+="-",s2+="+";
		}
		c1=0,c2=0;
		for(i=0;i<n;i++)
		{
			if(s1[i]!=s[i])c1++;
			if(s2[i]!=s[i])c2++;
		}
		cout << min(c1,c2) << endl;
	}

	return 0;
}