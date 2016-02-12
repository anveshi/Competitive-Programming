#include <bits/stdc++.h>
using namespace std;

#define TRACE
#ifdef TRACE
#define trace1(x)       cerr<< #x <<": "<<x<<endl;
#define trace2(x, y)    cerr<< #x <<": "<<x<<" | "<< #y <<": "<<y<< endl;
#define trace3(x, y, z) cerr<< #x <<": "<<x<<" | "<< #y <<": "<<y<<" | "<< #z <<": "<<z<< endl;
#else
#define trace1(x)
#define trace2(x, y)
#define trace3(x, y, z)
#endif

typedef long long LL;
const LL Maxn = 500005;
const LL Mod = 1000000007;
const int inf = 10000001;
inline void fastIO(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
}
int ans = 0;
char S[11][11];
map <char,int> M;
int dp[11][11][5];
int dx[] = {-1,0,1,0};
int dy[] = {0,1,0,-1};
int n,m;
int cnt[11][11];
bool check(int i,int j){
  return (i>=0 && j>=0 && i<n && j<m && S[i][j]!='*');
}
void dfs(pair<int,int> p, int d){
  int x,y;
  x = p.first;
  y = p.second;
  //trace3(x,y,d);
  if(dp[x][y][d]!=-1)
    return;
  if(cnt[x][y]==0){
    ans++;
    cnt[x][y] = 1;
  }
  dp[x][y][d] = 1;
  if(check(x+dx[d],y+dy[d]))
    dfs(make_pair(x+dx[d],y+dy[d]),d);
  else
    dfs(make_pair(x,y),(d+1)%4);
}
int main(){
  fastIO();
  pair <int,int> pos;
  M['U'] = 0;
  M['R'] = 1;
  M['D'] = 2;
  M['L'] = 3;

  cin >> n >> m;
  for(int i=0;i<n;i++){
    cin >> S[i];
  }
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      if(S[i][j]=='R'||S[i][j]=='L'||S[i][j]=='U'||S[i][j]=='D')
        pos = make_pair(i,j);        
    }
  }
  //S[pos.first][pos.second] = '.';
  memset(dp,-1,sizeof dp);
  //trace1(S[pos.first][pos.second]);
  dfs(pos,M[S[pos.first][pos.second]]);
  cout << ans << endl;
  return 0;
}