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
const int Maxn = 100005;
vector <int> adjList[Maxn];
int Init[Maxn], Goal[Maxn];
int H[Maxn];
vector <int> Ans;
int Visited[Maxn];

void Dfs(int node, int Oh,int Eh){
  Visited[node] = 1;
  if(H[node]%2==0){
    int Val = Eh^Init[node];
    if(Val!=Goal[node]){
      Eh^=1;
      Ans.push_back(node);
    }
  }
  else{
    int Val = Oh^Init[node];
    if(Val!=Goal[node]){
      Oh^=1;
      Ans.push_back(node);
    }
  }
  for(int i=0;i<adjList[node].size();i++){
    int Vertex = adjList[node][i];
    if(!Visited[Vertex]){
      H[Vertex] = H[node] + 1;
      Dfs(Vertex,Oh,Eh);
    }
  }
}

int main(){
  fastIO();
  int N,X,Y;
  cin >> N;

  for(int i=1;i<N;i++){
    cin >> X >> Y;
    adjList[X].push_back(Y);
    adjList[Y].push_back(X);
  }
  
  for(int i=1;i<=N;i++)
    cin >> Init[i];
  
  for(int i=1;i<=N;i++)
    cin >> Goal[i];
  
  H[1] = 0;
  Dfs(1,0,0);
  
  cout << Ans.size() << endl;
  for(int i=0;i<Ans.size();i++)
    cout << Ans[i] << endl;

  return 0;
}