// Anve$hi $hukla

#include <bits/stdc++.h>
using namespace std;

const int Maxn = 200002;
pair <int, pair<int,int> > p[Maxn];
vector <int> edge[Maxn], tempVector;
vector < vector <int> > ConnectedComponents[Maxn];
int visited[Maxn], a[Maxn], val[Maxn];

void dfs(int node, vector <int> &v){
  visited[node] =  1;
  v.push_back(node);
  for(int i=0;i<edge[node].size();i++){
    int neighbour = edge[node][i];
    if(!visited[neighbour]){
      dfs(neighbour,v);
    }
  }
  return;
}

void fillCC(int idx, vector <int> &v){
  for(int i=0;i<v.size();i++){
    if(!visited[v[i]]){
      vector <int> dfsVector;
      dfs(v[i],dfsVector);
      ConnectedComponents[idx].push_back(dfsVector);
    } 
  }
  for(int i=0;i<v.size();i++)
    visited[v[i]] = 0;
}


void ClearGraph(vector <int> &v){
  for(int i=0;i<v.size();i++)
    edge[v[i]].clear();
}

void printVector(vector <int> &v){
  for(int i=0;i<v.size();i++)
    cout << v[i] << " ";
  cout << endl;
}

void printConnectedComponents(int idx){
  for(int i=0;i<idx;i++){
    for(int j=0;j<ConnectedComponents[i].size();j++){
      for(int k=0;k<ConnectedComponents[i][j].size();k++){
        cout << ConnectedComponents[i][j][k] << " ";
      }
      cout << " | ";
    }
    cout << endl;
  }
}
void fastIO(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
}

int main(){
  fastIO();
  int T,n,m,x,y,t;
  cin >> T;
  while(T--){

    cin >> n >> m;
    for(int i=0;i<n;i++){
      cin >> a[i];
      val[a[i]] = a[i];
    }

    for(int i=0;i<m;i++){
      cin >> t >> x >> y;
      val[x] = x;
      val[y] = y;
      if(x > y)
        swap(x,y);
      p[i].first = t;
      p[i].second.first = x;
      p[i].second.second = y;
    }
    sort(p,p+m);

    int curr = p[0].first, idx = 0;

    for(int i=0;i<m;i++){
      int X = p[i].second.first, Y =p[i].second.second;
      if(curr != p[i].first){
//      printVector(tempVector);
        fillCC(idx, tempVector);
        idx++;
        curr = p[i].first;
        ClearGraph(tempVector);
        tempVector.clear();
      }
      tempVector.push_back(X);
      tempVector.push_back(Y);
      edge[X].push_back(Y);
      edge[Y].push_back(X);
    }
    fillCC(idx, tempVector);
//  printVector(tempVector);
    idx++;
    ClearGraph(tempVector);
    tempVector.clear();
// printConnectedComponents(idx);

    for(int i=idx-1;i>=0;i--){
      for(int j=0;j<ConnectedComponents[i].size();j++){
        int Max = 0;
        for(int k=0;k<ConnectedComponents[i][j].size();k++){
          Max = max(Max, val[ConnectedComponents[i][j][k]]);
        }        
        for(int k=0;k<ConnectedComponents[i][j].size();k++){
          val[ConnectedComponents[i][j][k]] = Max;
        }
      }
    }
    long long Ans = 0LL;
    for(int i=0;i<n;i++){
      Ans = Ans + (long long)val[a[i]];
    }
    cout << Ans << endl;

    for(int i=0;i<idx;i++)
      ConnectedComponents[i].clear();

  }
  return 0;
}