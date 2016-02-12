/*
If you think you are beaten, you are.
If you think you dare not, you don't!
If you like to win, but think you can't,
It's almost a cinch you won't.
you think you'll lose, you're lost;
For out in the world we find
Success begins with a fellow's will;
It's all in the state of mind.
If you think you are outclassed, you are,
You've got to think high to rise,
You've got to be sure of yourself before
You can ever win a prize.
Life's battles don't always go
To the stronger and faster man,
But sooner or later the man who wins
Is the man who thinks he can.
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
  int n,m,m1,m2,No_of_moves,ans = 100000000;
  cin >> n >> m;
  for(int i=0;i<=n/2;i++){
    m2 = i;
    m1 = n-2*i;
    No_of_moves = m1+m2;
    if(No_of_moves%m==0){
      ans = min(ans,No_of_moves);
    }
  }
  if(ans>100000)
    cout << -1 << endl;
  else
    cout << ans << endl;
  return 0;
}