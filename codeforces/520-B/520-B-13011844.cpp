#include <bits/stdc++.h>
using namespace std;
// BFS
const int N = 20000;
const int INF = 1<<30;
int Q[N],D[N]; 
int main(){
  int n,m;
  scanf("%d%d",&n,&m);
  int head = 0;
  int tail = 0;
  Q[tail++] = n;
  fill(D,D+N,INF);
  D[n] = 0;
  while(head<tail){
    int v = Q[head++];
    for(int i: {v-1,2*v}){
      if(i>=0 && i<N && D[i]==INF){
        D[i] = D[v] + 1;
        Q[tail++] = i;
      }
    }
  }
  printf("%d\n",D[m]);
  return 0;
}