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
int main(){
  string s;
  int u=0,l=0;
  cin >> s;
  for(int i=0;i<s.length();i++){
    if(isupper(s[i]))
      u++;
    else
      l++;
  }
  if(l>=u){
    for(int i=0;i<s.length();i++){
      if(s[i]<='Z')
        s[i]^=(1<<5);
    }
  }
  else{
    for(int i=0;i<s.length();i++){
      if(s[i]>='a')
        s[i]^=' ';
    }
  }
  cout << s << endl;
  return 0;
}