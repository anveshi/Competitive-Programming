// Anve$hi $hukla
// Until the lion learns how to write, every story will glorify the hunter.

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

inline void fastIO(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
}

const int Maxn = 1005;  
string S[Maxn];
int visited[Maxn][Maxn],ANS[Maxn][Maxn];
int n,m;
int dx[] = {0,1,0,-1};
int dy[] = {1,0,-1,0};
vector < pair<int,int> > V;
int Ans;
bool Check(int x,int y){
  if(x<0 || y<0 || x>=n || y>=m)
    return 0;
  if(S[x][y]!='.')
    return 0;
  return 1;
}
int fVal(int x,int y){
  if(x>=0 && y>=0 && x<=n && y<=m && S[x][y]=='*')
    return 1;
  return 0;
}
int fun(int x,int y){
  int ans =0;
  for(int i=0;i<4;i++){
    if(fVal(x+dx[i],y+dy[i]))
      ans++;
  }
  return ans;
}
void Dfs(int x,int y){
  V.push_back(make_pair(x,y));
  visited[x][y] = 1;
  Ans += fun(x,y);
  for(int i=0;i<4;i++){
    if(Check(x+dx[i],y+dy[i]) && !visited[x+dx[i]][y+dy[i]]){
      Dfs(x+dx[i],y+dy[i]);
    }
  }
}

int main(){

  fastIO();
  int K;
  cin >> n >> m >> K;
  for(int i=0;i<n;i++){
    cin >> S[i];
  }

  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      if(S[i][j]=='.' && visited[i][j]==0){
        V.clear();
        Ans = 0;
        Dfs(i,j);
        for(int k=0;k<V.size();k++){
          ANS[V[k].first][V[k].second] = Ans;
        }
      }
    }
  }
  int x,y;
  while(K--){
    cin >> x >> y;
    x--;y--;
    cout << ANS[x][y] << endl;
  }

  return 0;
}