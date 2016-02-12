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

const int Maxn = 505;
int Dp1[Maxn][Maxn], Dp2[Maxn][Maxn];
int main(){
  fastIO();
  int h,w,Q,r1,c1,r2,c2;
  vector <string> S(Maxn);
  cin >> h >> w;
  for(int i=0;i<h;i++){
    cin >> S[i];
  }

  for(int i=0;i<h;i++){
    Dp1[i][0] = 0;
    for(int j=1;j<w;j++){
      Dp1[i][j] = Dp1[i][j-1];
      if(S[i][j] == S[i][j-1] && S[i][j]=='.')
        Dp1[i][j]++; 
    }
  }

  for(int i=0;i<w;i++){
    Dp2[0][i] = 0;
    for(int j=1;j<h;j++){
      Dp2[j][i] = Dp2[j-1][i];
      if(S[j][i] == S[j-1][i] && S[j][i]=='.')
        Dp2[j][i]++;
    }
  }

  cin>> Q;
  while(Q--){
    cin >> r1 >> c1 >> r2 >> c2;
    r1--;c1--;r2--;c2--;
    int Ans = 0;
    for(int i=r1;i<=r2;i++){
      Ans += Dp1[i][c2] - (Dp1[i][c1]);

    }
    for(int i=c1;i<=c2;i++){
      Ans += Dp2[r2][i] - (Dp2[r1][i]);

    }
    cout<< Ans << endl;
  }

  return 0;
}