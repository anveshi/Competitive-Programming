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
  int x;
  map<LL, LL> M;
  for(int i=0;i<4;i++){
    cin >> x;
    M[x]++;
  }
  cout << (4-M.size()) << endl;
  return 0;
}