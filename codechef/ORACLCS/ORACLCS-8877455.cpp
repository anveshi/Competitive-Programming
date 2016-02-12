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

char S[101][101];
const int Maxn = 200005;

int main(){
  int TC,N,M,CntA,CntB,x,y;
  scanf("%d",&TC);
  for(int xx=0;xx<TC;xx++){
    scanf("%d",&N);
    for(int i=0;i<N;i++){
      scanf("%s",S[i]);   
    }
    M = CntB = CntA = strlen(S[0]);
    for(int i=0;i<N;i++){
      x = y = 0;
      for(int j=0;j<M;j++){
        if(S[i][j]=='a')
          x++;
        else
          y++;
      }
      if(x<CntA)CntA=x;
      if(y<CntB)CntB=y;
    }
    int Ans = min(CntA, CntB);
    printf("%d\n",Ans);
  }
  return 0;
}