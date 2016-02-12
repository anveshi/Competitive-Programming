// Anve$hi $hukla
// Until the lion learns how to write, every story will glorify the hunter.

#include <bits/stdc++.h>
using namespace std;
#define WHITE 0
#define BLACK 1
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

typedef vector<int> VI;
typedef vector<VI> VVI;
bool FindMatch(int i, const VVI &w, VI &mr, VI &mc, VI &seen) {
  for (int j = 0; j < w[i].size(); j++) {
    if (w[i][j] && !seen[j]) {
      seen[j] = true;
      if (mc[j] < 0 || FindMatch(mc[j], w, mr, mc, seen)) {
        mr[i] = j;
        mc[j] = i;
        return true;
      }
    }
  }
  return false;
}

int BipartiteMatching(const VVI &w, VI &mr, VI &mc) {
  mr = VI(w.size(), -1);
  mc = VI(w[0].size(), -1);
  
  int ct = 0;
  for (int i = 0; i < w.size(); i++) {
    VI seen(w[0].size());
    if (FindMatch(i, w, mr, mc, seen)) ct++;
  }
  return ct;
}
const int Maxn = 1005;
int Board[Maxn][Maxn];
int N,M,cntW,cntB;

const int dx[] = {2, 2, 1, 1, -2, -2, -1, -1};
const int dy[] = {1, -1, 2, -2, 1, -1, 2, -2};

void dfs(int x,int y){
  for(int i=0;i<8;i++){
    int nextX = x+dx[i];
    int nextY = y+dy[i];
    if(nextX>=0 && nextY>=0 && nextX<N && nextY<M && Board[nextX][nextY]==-1){
      Board[nextX][nextY] = 1 - Board[x][y];
      if(Board[nextX][nextY]==WHITE)
        cntW++;
      else
       cntB++;
      dfs(nextX, nextY);
    }
  }
  return;
}

int main(){
  int Ans=0;
  cin >> N >> M;
  memset(Board,-1,sizeof(Board));
  for(int i=0;i<N;i++){
    for(int j=0;j<M;j++){
      if(Board[i][j] == -1){
        Board[i][j] = WHITE;
        cntW = 1, cntB = 0;
        dfs(i,j);
        Ans += max(cntB,cntW);
      }
    }
  }
  cout << Ans << endl;
  return 0;
}