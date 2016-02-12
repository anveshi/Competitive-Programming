#include <bits/stdc++.h>
using namespace std;
string int_to_string(int i){
  string ret="";
  while(i){
    ret=(char)('0'+i%10)+ret;
    i/=10;
  }
  return ret;
}
int main(){
  int n,l;
  cin >> n;
  for(int i=n+1;;i++){
    string s;
    s = int_to_string(i);
    bool Ok=true;
    l = s.length();
    for(int j=0;j<l;j++){
      for(int k=0;k<l;k++){
        if(k!=j && !(s[k]^s[j])){
          Ok = false;break;
        }
      }
      if(!Ok)
        break;
    }
    if(Ok){
      cout << s << endl;
      return 0;
    }

  }
  return 0;
}