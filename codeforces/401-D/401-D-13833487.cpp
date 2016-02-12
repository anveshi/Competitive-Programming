#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
LL dp[1<<18][100];

void printVector(vector <int> &v){
  for(int i=0;i<v.size();i++)
    cout << v[i] <<  " ";
  cout << endl;
}
LL cnt[10],fac[19],n,m;
int main(){

  cin >> n >> m;
  vector <int> digit;
  LL temp = n;
  while(temp){
    cnt[temp%10]++;
    digit.push_back(temp%10);
    temp/=10;
  }
  fac[0] = 1;
  for(int i=1;i<19;i++)
    fac[i] = fac[i-1]*i;
  
  LL nod = digit.size();
  dp[0][0] = 1;

  for(int i=0;i<(1LL<<nod);i++){
    for(int j=0;j<nod;j++){
      if(i==0 && digit[j]==0)
        continue;
      if((i&(1LL<<j))==0){
        for(int k=0;k<m;k++){
          dp[i|(1LL<<j)][(k*10+digit[j])%m] += dp[i][k];
        }
      }
    }
  }

  LL ans  = dp[(1LL<<nod)-1][0];
  for(int i=0;i<10;i++)
    ans = ans/fac[cnt[i]];
  
  cout << ans  << endl;

  return 0;
}