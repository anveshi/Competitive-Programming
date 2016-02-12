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
typedef long long LL;
int main(){
  LL n,a,b;
  cin >> n >> a >> b;
  LL l,r;
  l = a+1;
  r = n-b;
  l = max(l,r);
  cout << n-l+1 << endl;
  return 0;
}