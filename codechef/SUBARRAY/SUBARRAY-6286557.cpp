#include<bits/stdc++.h>
#define LL long long int
#define mp make_pair
#define pb push_back
#define ff first
#define ss second
using namespace std;
char s[1000005];
LL a[1000005],p[1000005];
LL dp[100005];
int main(){
	LL T,n;
	scanf("%lld",&T);
	while(T--){
		scanf("%lld",&n);
		for(LL i=0;i<n;i++)dp[i]=0;
		scanf("%s",s);
		for(LL i=0;i<n;i++){
			scanf("%lld",a+i);
			p[i]=(i>0?p[i-1]+a[i]:a[i]);
		}
		LL ans = 0;
		for(LL i=0;i<n;i++){
			stack <char> S;
			while(!S.empty())S.pop();
			char x;
			S.push(s[i]);
			LL j;
			LL f=0;
			for( j=i-1;j>=0;j--){
				if(s[j]=='}' || s[j]=='>' || s[j]==']' || s[j]==')')
					S.push(s[j]);
				else{
					x = S.top();
					S.pop();
					if(s[j]=='{'){
						if(x!='}'){
							f=1;
							break ;
						}

					}
					else if(s[j]=='('){
						if(x!=')'){
							f=1;
							break;
						}

					}
					else if(s[j]=='['){
						if(x!=']'){
							f=1;
							break;
						}

					}
					else if(s[j]=='<'){
						if(x!='>'){
							f=1;
							break;
						}
					}	
				}
				if(S.empty()){
					break;
				}
			}
			if(f==0 && j>=0){
				if(j+1==i){
					if((s[j]=='<' && s[i]=='>') || (s[j]=='(' && s[i]==')') || (s[j]=='[' && s[i]==']') ||( s[j]=='{' && s[i]=='}'))						f=0;
					else f=1;
				}
				if(f==0){
				LL kk = (j>0?dp[j-1]:0)+(p[i]-(j>0?p[j-1]:0));
				dp[i]=max(kk,dp[i]);
				}
			}
			if(ans<dp[i]){
				ans=dp[i];
			}
		}
		cout << ans << endl;
	}
	return 0;
}