/*
He slept beneath the moon
He basked beneath the sun
He lived a life of going to do
and died with nothing done.
*/
#include <bits/stdc++.h>
using namespace std;
int po[12];
void pre(){
  po[0]=1;
  for(int i=1;i<12;i++){
    po[i] = po[i-1]*2;
  }
}
int c(int n,int r){
  if(n<0 || r<0)
    return 0;
  if(n<r)return 0;
  if(n==r)
    return 1;
  else if(r==0 || n==0)
    return 1;
  return c(n-1,r) + c(n-1,r-1);
}
int main(){
  pre();
  string s1,s2;
  int p1=0,m1=0,p2=0,m2=0,p,n,num,den;
  double ans;
  cin >> s1 >> s2;
  for(int i=0;i<s1.length();i++){
    if(s1[i]=='+')
      p1++;
    else
      m1++;
    if(s2[i]=='+')
      p2++;
    else if(s2[i]=='-')
      m2++;
  }
  n = s1.length() - p2 - m2;
  p = p1 - p2;
  num = c(n,p);
  den = po[n];
  ans = num / (double)den;
  cout.precision(10);
  cout << fixed << ans << endl;
  return 0;
}