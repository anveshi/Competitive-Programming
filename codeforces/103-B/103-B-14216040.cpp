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

const int Maxn = 200;
vector <int> graph[Maxn];
bool visited[Maxn];

void dfs(int node){
  visited[node] = 1;
  for(int i=0;i<graph[node].size();i++){
    if(!visited[graph[node][i]])
      dfs(graph[node][i]);
  }
}

int main(){
  fastIO();
  int N,M,X,Y;
  cin >> N >> M;
  for(int i=0;i<M;i++){
    cin >> X >> Y;
    graph[X].push_back(Y);
    graph[Y].push_back(X);
  }
  bool Ok = true;
  if(M<3 || M!=N)
    Ok = false;
  if(Ok)
    dfs(1);
  for(int i=1;i<=N;i++){
    Ok &= visited[i];
  }
  cout << (Ok?"FHTAGN!":"NO") << endl;
  return 0;
}