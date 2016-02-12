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
typedef long long LL;
int main(){
  LL n;
  cin >> n;
  vector <LL> v1(n),v2(n-1),v3(n-2);
  for(int i=0;i<n;i++){
    cin >> v1[i];
  }
  for(int i=0;i<n-1;i++){
    cin >> v2[i];
  }
  for(int i=0;i<n-2;i++){
    cin >> v3[i];
  }
  cout << accumulate(v1.begin(), v1.end(),0)-accumulate(v2.begin(), v2.end(),0) << "\n";
  cout << accumulate(v2.begin(), v2.end(),0)-accumulate(v3.begin(), v3.end(),0) << "\n";
  return 0;
}