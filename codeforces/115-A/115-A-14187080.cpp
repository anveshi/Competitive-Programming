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

const int Maxn = 200005;
int Par[Maxn], Visited[Maxn], H[Maxn];
vector <int> AdjList[Maxn];

int Dfs(int node){
  Visited[node] = 1;
  int F = 0, Ans = 0;
  for(int i=0;i<AdjList[node].size();i++){
    int Vertex = AdjList[node][i];
    H[Vertex] = H[node] + 1;
    if(!Visited[Vertex])
      F++,Ans = max(Ans,1+Dfs(Vertex));
    
  }
  return (F?Ans:1);
}

int main(){
  fastIO();
  int N,Ans=0;
  cin >> N;
  for(int i=1;i<=N;i++){
    cin >> Par[i];
    if(Par[i]==-1)
      continue;
    AdjList[i].push_back(Par[i]);
    AdjList[Par[i]].push_back(i);
  }
  for(int i=1;i<=N;i++){
    if(Par[i]==-1){
      H[i] = 0;
      Ans = max(Ans,Dfs(i));
    }
  }
  cout << Ans << endl;
  return 0;
}