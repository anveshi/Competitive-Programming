/*
Rejoice, and men will seek you;
Grieve, and they turn and go;
They want full measure of all your pleasure,
But they do not need your woe.
Be glad, and your friends are many;
Be sad, and you lose them all
There are none to decline your nectar Ed wine,
But alone you must drink life's gall.
*/
#include <bits/stdc++.h>
using namespace std;
char s[10][10];
int main(){
  for(int i=0;i<8;i++){
    cin >> s[i];
  }
  int w=0,b=0;
  map<char, int> M;
  M['q'] = 9;
  M['r'] = 5;
  M['b'] = 3;
  M['n'] = 3;
  M['p'] = 1;
  M['k'] = 0;
  for(int i=0;i<8;i++){
    for(int j=0;j<8;j++){
      if(s[i][j]=='.')
        continue;
      else if(s[i][j]<'Z')
        w+=M[(s[i][j])^(32)];
      else
        b+=M[s[i][j]];
    }
  }
  if(w>b)
    cout << "White" << endl;
  else if(b>w)
    cout << "Black" << endl;
  else
    cout << "Draw" << endl;
  return 0;
}