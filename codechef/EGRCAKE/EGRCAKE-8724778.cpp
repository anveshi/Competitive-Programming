// Anve$hi $hukla

#include <bits/stdc++.h>
using namespace std;

void printVector(vector <int> &v){
  for(int i=0;i<v.size();i++)
    cout << v[i] << " | ";
  cout << endl;
}

const int Maxn = 100001; 
int visited[Maxn];

int dfs(int x, vector<int> &V){
  if(visited[x]==0){
    visited[x] = 1;
    return 1 + dfs(V[x],V);
  }
  return 0;
}

int main(){
  int T,N,M;
  cin >> T;
  while(T--){
    cin >> N >> M;
    /*vector <int> V;
    V.clear();
    V.push_back(-1);
    for(int i=M+1;i<=N;i++)
      V.push_back(i);

    for(int i=1;i<=M;i++)
      V.push_back(i);

    printVector(V);

    memset(visited,0,sizeof visited);
 
    int ans = dfs(1,V);
    cout << ans << endl;
    */
    int ans  = __gcd(N,M);
    ans = N/ans;
    if(ans == N)
      cout << "Yes" << endl;
    else
      cout << "No " << ans << endl;
  }    
  return 0;
}