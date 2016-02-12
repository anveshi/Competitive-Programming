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
int main(){
  int n,o=0,e=0,x,ans;
  cin >> n;
  for(int i=0;i<n;i++){
    cin >> x;
    if(x&1)
      o++;
    else
      e++;
  }
  if(o&1){
    ans = o;
  }
  else{
    ans = e;
  }
  cout << ans << endl;
  return 0;
}