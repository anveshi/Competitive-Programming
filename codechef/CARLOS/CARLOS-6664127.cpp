#include <bits/stdc++.h>
#define LL long long int
#define pb push_back
using namespace std;
map <int,int> MAP[201];
int visited[201],a[200005];
int dp[200005][201];
int possible[201][201];
vector <int> AD_LIST[201];
int kisMapMeHai[201],abhiKaunsaHai;
void dfs(int v){
	stack <int> S;
	S.push(v);
	while(!S.empty()){
		int v = S.top();
		S.pop();
		kisMapMeHai[v] = abhiKaunsaHai; 
		MAP[abhiKaunsaHai][v]=1;
		if(visited[v]==0){
			visited[v]=1;
			int sz = AD_LIST[v].size();
			for(int i=0;i<sz;i++){
				S.push(AD_LIST[v][i]);
			}
		}
	}
	return ;
}
int main(){
	ios_base::sync_with_stdio(false); 	
	cin.tie(NULL);
	int T,N,M,K,i,j,x,y,mini;
	cin >> T;
	while(T--){
//		for(i=0;i<=M;i++)for(j=0;j<N;j++)dp[i][j]=INT_MAX;
		for(i=0;i<=M;i++)for(j=0;j<=M;j++)possible[i][j]=0;
		for(i=0;i<201;i++){
			MAP[i].clear();
			AD_LIST[i].clear();
			visited[i]=0;
		}
		abhiKaunsaHai = 0;
		cin >> M >> K >> N;
		for(i=0;i<K;i++){
			cin >> x >> y;	
			AD_LIST[x].pb(y);
			AD_LIST[y].pb(x);
		}
		for(i=1;i<=M;i++){
			if(visited[i]==0){
				dfs(i);
				abhiKaunsaHai++;
			}
		}
		for(i=1;i<=M;i++){
			for(j=1;j<=M;j++){
				possible[i][j] = (kisMapMeHai[i]==kisMapMeHai[j]);
			}
		}
		for(i=0;i<N;i++)
			cin >> a[i];
		for(i=1;i<=M;i++){
			if(possible[a[0]][i])
				dp[0][i] = (a[0]!=i);
			else 
				dp[0][i] = 100000000;
		}
		for(i=1;i<N;i++){
			int till_min = 100000000;
			for(j=1;j<=M;j++){
				till_min = min(till_min,dp[i-1][j]);
				if(possible[a[i]][j]){
					if(a[i]!=j)
						dp[i][j] = till_min+1;
					else 
						dp[i][j] = till_min;
				}
				else dp[i][j]=100000000;
			}
		}
	/*	for(i=0;i<N;i++){
			for(j=1;j<=M;j++){
				cout << dp[i][j] << " ";
			}
			cout << endl;
		}*/
		int ans= 100000000;
		for(i=1;i<=M;i++){
			ans = min(ans,dp[N-1][i]);
		}
		if(ans<=N)
			cout << ans << endl;
		else cout << -1 << endl;
	}
	return 0;
}