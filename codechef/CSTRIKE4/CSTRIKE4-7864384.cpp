/*
“The doubters said,
‘Man can not fly,’
The doers said,
‘Maybe, but we’ll try,’
And finally soared
In the morning glow
While non-believers
Watched from below.”
*/
#include <bits/stdc++.h>
using namespace std;
const int Maxn = 100005;
int val[Maxn],ans[Maxn];
int main(){
  string s;
  cin >> s;
  s+="T";
  int n = s.length(),R,temp;
  for(int i=n-1;i>=0;i--){
    if(s[i]=='T')
      val[i] = i;
    else val[i] = val[i+1];
  }
  R = n;
  for(int i=0;i<n;){
    temp = val[i];
    for(int j=temp;j>=i;j--){
      ans[j] = R;
      R--;
    }
    i =  temp+1;
  }
  for(int i=0;i<n;i++){
    cout << ans[i];
    if(n-i-1)
      cout <<  " ";
  }
  cout << endl;
  return 0;
}