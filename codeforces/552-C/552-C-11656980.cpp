#include <bits/stdc++.h>
using namespace std;
const string s1="YES";
const string s2="NO";
int w,m;
string fun(int n){
  if(n==0)return s1;
  if((n-1)%w==0)return fun((n-1)/w);
  if((n+1)%w==0)return fun((n+1)/w);
  if(n%w==0)return fun(n/w);
  return s2;
}

int main(){
  cin >> w >> m; 
  if(w<4)
    cout << s1 << endl;
  else 
    cout << fun(m) << endl;
	return 0;
}