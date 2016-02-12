#include<bits/stdc++.h>
#define lol long long int
#define ulol unsigned long long int 
#define mp make_pair
#define pb push_back
#define ff first
#define ss second
using namespace std;
const lol lol_max=numeric_limits<lol>::max();
char s[100005];
int n;
int main(){
	int sz=-1;
	scanf("%s",s);
	n=strlen(s);
	char ll;
	ll=s[n-1];
	int l=(s[n-1]-'0');
	int f=0;
	for(int i=0;i<n-1;i++){
		if(f==1)continue;
		if((s[i]-'0')%2==0){
			sz=i;
			if(l>(s[i]-'0')){
				f=1;
				s[n-1]=s[i];
				s[i]=ll;
			}
		}
	}
	if(f==0 && sz!=-1){
		s[n-1]=s[sz];
		s[sz]=ll;
		f=1;
	}
	if(f==0)
		printf("-1\n");
	else 
		printf("%s\n",s);
	
	return 0;
}