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
const LL Maxn = 1000002;
const LL inf=1000000000000;
LL a[Maxn],l[Maxn],r[Maxn];
int main(){
  ios_base::sync_with_stdio(false);cin.tie(0);
  LL n,m;
  cin >> n >>m;
  for(int i=1;i<=n;i++){
    cin >> a[i];
  }
  stack <LL> S;
  for(int i=1;i<=n;i++){
    while(!S.empty() && a[S.top()]<=a[i])
      S.pop();
    if(S.empty())
      l[i]=0;
    else
      l[i]=S.top();
    S.push(i);
  }
  while(!S.empty())
    S.pop();
  for(int i=n;i>=1;i--){
    while(!S.empty() && a[S.top()]<a[i])
      S.pop();
    if(S.empty())
      r[i]=n+1;
    else
      r[i]=S.top();
    S.push(i);
  }
  LL temp=0;
  map<LL, LL> M,P;
  for(int i=1;i<=n;i++){
    M[a[i]]+=(i-l[i])*(r[i]-i);
  }
  LL z=0;
  for(map<LL,LL>::iterator it=M.begin();it!=M.end();it++){
    //cout << it->first << " " << it->second << endl;
    P[it->first] = z + it->second;
    z += it->second;
  }
  M[0]=1;P[0]=0;
  M[inf]=1;P[inf]=z;
  string s1,s2,ans="";LL k,val;
  while(m--){
    map <LL,LL> ::iterator o;
    cin >> s1;
    cin >> k;
    cin >> s2;
    o = M.lower_bound(k);
    if(s1[0]=='='){
      if(o->first!=k)
        val=0;
      else
        val = o->second;
    }
    else if(s1[0]=='<'){
      o = M.lower_bound(k);
      if(o->first!=k){
        o--;
        val = P[o->first];
      }
      else
        val = P[o->first]-M[o->first];
    }
    else{
      o = M.lower_bound(k);
      if(o->first==k){
        val = ((n)*(n+1))/2-P[k];
      }
      else{
        o--;
        val = ((n)*(n+1))/2-P[o->first];
      }
    }
    //cout << val << endl;
    if(val%2==0){
      if(s2[0]=='C')ans+="D";
      else ans+="C";
    }
    else{
      ans+=s2[0];
    }
  }
  cout << ans << endl;
  return 0;
}