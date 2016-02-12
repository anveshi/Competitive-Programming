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
int a[101];
int main(){
  int n,im=0,iM=0,ans;
  cin >> n;
  for(int i=0;i<n;i++){
    cin >> a[i];
  }
  for(int i=0;i<n;i++){
    if(a[i]>a[iM])
      iM=i;
    if(a[i]<=a[im])
      im=i;
  }
  int d1 = iM;
  int d2 = n-im-1;
  if(im>iM)
    ans = d1+d2;
  else
    ans = d1+d2-1;
  cout<< ans << endl;
  return 0;
}