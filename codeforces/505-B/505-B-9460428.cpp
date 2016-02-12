#include<bits/stdc++.h>
#define lol long long int
#define ulol unsigned long long int 
#define mp make_pair
#define pb push_back
#define ff first
#define ss second
using namespace std;
#define color 105
#define node 105
vector <int> v[color][node];
const lol lol_max=numeric_limits<lol>::max();
int n,m,a,b,c,q,ans;
int visited[node];
int dfs(int c,int s,int e){
	stack <int> S;int t;
	S.push(s);
	while(!S.empty()){
		t=S.top();
		S.pop();
		if(visited[t]==0){
			if(t==e){
				for(int i=0;i<node;i++)visited[i]=0;
				return 1;
			}
			visited[t]=1;
			int sz=v[c][t].size();
			for(int i=0;i<sz;i++){
				S.push(v[c][t][i]);
			}
		}
	}
	for(int i=0;i<node;i++)
	visited[i]=0;
	return 0;
}
int main(){
	int st,end;
	cin >> n >>m;
	for(int i=0;i<m;i++)
	{
		cin >> a >> b >> c;
		v[c][a].pb(b);
		v[c][b].pb(a);
	}
	cin  >> q;
	while(q--){
		int val;
		ans=0;
		cin >> st >> end;
		for(int c=1;c<=m;c++){
			val = dfs(c,st,end);
		//	cout << c << " " << dfs(c,st,end) << endl;
			if(val)
				ans++;
		}
		cout << ans << endl;
	}
	return 0;
}