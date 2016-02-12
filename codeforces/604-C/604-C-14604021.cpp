#include <bits/stdc++.h>
using namespace std;

const int Maxn = 200005;
int dp[2][Maxn];

int main(){

  int n;
  string s;
  cin >> n;
  cin >> s;
  
  dp[s[0]-'0'][0]++;

  for(int i=1;i<n;i++){
    dp[1-(s[i]-'0')][i] = dp[1-(s[i]-'0')][i-1];
    dp[s[i]-'0'][i] = max(dp[1-(s[i]-'0')][i-1]+1, dp[s[i]-'0'][i-1]);
  }

  int Ans = max(dp[0][n-1],dp[1][n-1]);
  vector <int> v0,v1;

  for(int i=1;i<n;i++){
    if(s[i]==s[i-1]){
      if(s[i]=='0')
        v0.push_back(i);
      else
        v1.push_back(i);
    }
  }

  int add = 0;

  if(v0.size()+v1.size()>1)
    add = 2; 
  if(v0.size()+v1.size()>0)
    add = max(add,1);

  cout << Ans+add << endl;
  return 0;
}