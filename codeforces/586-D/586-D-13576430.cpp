#include <bits/stdc++.h>
using namespace std;

typedef long long LL;

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
  int d,t;
  cin >> t;
  while(cin >> n >> d){

    for(int i=0;i<3;i++)
      cin >> S[i]; 
    memset(dp, 0, sizeof dp);

    for(int i=0;i<3;i++)
       dp[i][0] = S[i][0]=='s';

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