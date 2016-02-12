#include <bits/stdc++.h>
using namespace std;
int main(){
  string s,temp="";
  cin >> s;
  bool wub=false;
  if(s.length()<=3){
    cout << s << endl;
    return 0;
  }
  s+="NN";
  for(int i=0;i<s.length()-2;i++){
    if(s[i]=='W'&&s[i+1]=='U'&&s[i+2]=='B'){
      i+=2;
      if(temp!="")
        cout << temp << " ";
      temp="";
    }
    else
      temp+=s[i];
  }
  if(temp!="")
    cout << temp << endl;
  else
    cout << endl;
  return 0;
}