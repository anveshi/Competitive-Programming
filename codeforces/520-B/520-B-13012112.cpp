#include <bits/stdc++.h>
using namespace std;
const int INF = 1<<30;
const int Maxn = 1<<21;
int dist[Maxn], temp,n,m;
queue <int> Q;
int main(){
  cin >> n >> m;
  for(int i=0;i<Maxn;i++){
    dist[i] = INF;
  }
  dist[n] = 0;
  Q.push(n);
  while(!Q.empty()){
    temp = Q.front();
    Q.pop();
    if(temp>1 && dist[temp-1]>dist[temp]+1)
      dist[temp-1]=dist[temp]+1,
      Q.push(temp-1);
    if(temp<100000 && dist[temp*2]>dist[temp]+1)
    dist[temp*2] = dist[temp] + 1,
    Q.push(temp*2); 
  }
  cout << dist[m] << endl;
  return 0;
}