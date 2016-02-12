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
typedef long long LL;
using namespace std;
int main(){
  LL n;
  cin >> n;
  if(n&1){
    cout <<  -((n+1)/2) << endl;
  }
  else
    cout << n/2 << endl;
  return 0;
}