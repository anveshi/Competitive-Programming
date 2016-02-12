#include <bits/stdc++.h>
using namespace std;
#define mp make_pair
#define pb push_back
#define ff first
#define ss second
#define all(c) (c).begin(),(c).end() 
#define tr(c,it) for(auto it = (c).begin(); it != (c).end(); it++) 
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define TRACE
#ifdef TRACE
#define trace1(x)     	   cerr << #x << ": " << x << endl;
#define trace2(x, y)       cerr << #x << ": " << x << " | " << #y << ": " << y << endl;
#define trace3(x, y, z)    cerr << #x << ": " << x << " | " << #y << ": " << y << " | " << #z << ": " << z << endl;
#define trace4(a, b, c, d) cerr << #a << ": " << a << " | " << #b << ": " << b << " | " << #c << ": " << c << " | " << #d << ": " << d << endl;
#else
#define trace1(x)
#define trace2(x, y)
#define trace3(x, y, z)
#define trace4(a, b, c, d)
#endif
typedef long long LL;
const LL MOD = 1000000007;
typedef pair<LL,LL> PII;
typedef vector<LL> VI;
typedef vector<PII> VPII;
LL gcd1(LL a,LL b){while(b){LL t=a%b;b=a;a=t;}return a;}
char s[100005];
int c[26];
vector <char> ans;
int main(){
	int t,i,n,j,idx;
	scanf("%d",&t);
	while(t--){
		scanf("%s",s);
		n = strlen(s);
		if(n<=1){
			printf("%s\n",s);
			continue;
		}
		else if(n==2){
			if(s[0]==s[1])
				printf("-1\n");
			else
				printf("%s\n",s);
			continue;

		}
		ans.clear();
		for(i=0;i<n;i++){
			ans.pb('*');
		}
		for(i=0;i<26;i++)
			c[i]=0;
		for(i=0;i<n;i++){
			c[s[i]-'a']++;
		}
		vector < pair <int,int> > v;
		v.clear();
		for(i=0;i<26;i++){
			v.pb(mp(c[i],i));
		}
		sort(v.rbegin(),v.rend());
		string s;
		s = "";
		for(i=0;i<26;i++){
			int sz = v[i].ff;
			int k = v[i].ss;
			for(j=0;j<sz;j++){
				s +=(char)(k+'a');
			}
		}
	//:	cout << s << endl;
		idx = 0;ans[0]=s[0];
		for(i=1;i<n;i++){
			if(s[i]==s[i-1]){
				if(idx+2<n){
					idx+=2;
				}
				else{
					idx =1;
				}
				while(ans[idx]!='*'){
					idx=(idx+1)%n;
				}
				ans[idx]=s[i];
			}
			else{
				if(idx+1<n){
					idx+=1;
				}
				else{
					idx=1;
				}
				while(ans[idx]!='*'){
					idx=(idx+1)%n;
				}
				ans[idx]=s[i];
			}
			//cout << idx << " ";
		}
//		cout << endl;
		int f=0;
		for(i=1;i<n;i++){
			if(ans[i]!=ans[i-1])
				continue;
			else{
				printf("-1\n");f=1;break;
			}
		}
		if(f==0){
			for(i=0;i<n;i++){
				printf("%c",ans[i]);
				assert(ans[i]!='*');
			}
			printf("\n");
		}
	}
	return 0;
}