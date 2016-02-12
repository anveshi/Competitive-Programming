// Anve$hi $hukla
#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int Maxn = 505;

int g[Maxn][Maxn];
vector <int> graph[Maxn];
int color[Maxn];
int visited[Maxn];
int flag;

void dfs(int v, int c){
   visited[v] = 1;
   if(color[v] == -1)
      color[v] = c;
   if(color[v]!=c){
      flag = 1;
      return;
   }
   for(auto x: graph[v]){
      if(color[x]==color[v]){
         flag = 1;
         return;
      }
      if(visited[x] == 0){
         dfs(x, c^1);
      }
   }
   return;
}
int main(){
   flag = 0;
   int n,m,x,y;
   cin >> n >> m;
   for(int i=0;i<m;i++){
      cin >> x >> y;
      x--;y--;
      g[x][y] = 1;
      g[y][x] = 1;
   }
   for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
         if(i!=j && g[i][j]==0)
            graph[i].push_back(j);
      }
   }
   for(int i=0;i<n;i++)
      color[i] = -1;
   /*for(int i=0;i<n;i++){
      for(auto x: graph[i]){
         trace2(i, x);
      }
   }*/
   for(int i=0;i<n;i++){
      if(!visited[i] && (graph[i].size() > 0))
         dfs(i, 0); // 0->a, 1->c
   }
   if(flag == 1){
      cout << "No" << endl; return 0;
   }
   else{
      string S;
      for(int i=0;i<n;i++){
         if(color[i]==-1)S+="b";
         else if(color[i]==0)S+="a";
         else S+="c";
      }
      for(int i=0;i<n;i++){
         for(int j=i+1;j<n;j++){
            if(abs(S[i]-S[j])<=1){
               g[i][j] = 0;
               g[j][i] = 0;
            }
         }
      }
      flag = 0;
      for(int i=0;i<n;i++){
         for(int j=0;j<n;j++){
            if(g[i][j])
               flag = 1;
         }
      }
      if(flag){
         cout << "No" << endl;
      }
      else{
         cout << "Yes" << endl;
         cout << S << endl;
      }
      return 0;
   }
   return 0;
}