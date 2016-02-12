#include <bits/stdc++.h>
using namespace std;

typedef long long LL;

inline void fastIO(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
}

const int Maxn = 105;
int n,dp[3][Maxn];
vector <string> S(3);

int fun(int i,int j,int steps){
  if(j+2*steps>=n)
    return 1;
  else if(S[i][j+2*steps]!='.')
    return 0;
  return 1;
}

int main(){ 
  fastIO();

  int d,t;
  cin >> t;
  while(t--){
    cin >> n >> d;
    for(int i=0;i<3;i++){
      cin >> S[i]; 
    }
    for(int i=0;i<3;i++){
      for(int j=0;j<Maxn;j++){
        dp[i][j] = (S[i][j]=='s');
      }
    }
    for(int j=0;j<n-1;j++){
      for(int i=0;i<3;i++){
        if(dp[i][j]){
          if(fun(i,j+1,j))
            for(int k=0;k<3;k++){
              if(abs(k-i)<=1){
                dp[k][j+1]  = fun(k,j+1,j);
                dp[k][j+1] &= fun(k,j+1,j+1);
              }
            }
        }
      }
    }

    if(dp[0][n-1] || dp[1][n-1] || dp[2][n-1])
      cout << "YES" << endl;
    else
      cout <<  "NO" << endl;
  }
  return 0;
}