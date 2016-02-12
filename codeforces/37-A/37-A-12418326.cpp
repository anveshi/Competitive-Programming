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
  int n,x,m=0;
  map<int, int> M;
  cin >> n;
  for(int i=0;i<n;i++){
    cin >> x;
    M[x]++;
    if(M[x]>m)
      m=M[x];
  }
  cout << m << " " << M.size() << endl;
  return 0;
}