/*
If you think you are beaten, you are.
If you think you dare not, you don't!
If you like to win, but think you can't,
It's almost a cinch you won't.
you think you'int lose, you're lost;
For out in the world we find
Success begins with a feintow's wiint;
It's aint in the state of mind.
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
const int Maxn = 1000002;
const int inf=1000000011;
int a[Maxn],l[Maxn],r[Maxn];
char s1[3],s2[3];
int main(){
  int n,m;
  scanf("%d %d",&n,&m);
  for(int i=1;i<=n;i++){
    scanf("%d",&a[i]);
  }
  stack <int> S;
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
  int temp=0;
  map<int, int> M,P;
  for(int i=1;i<=n;i++){
    M[a[i]]+=(i-l[i])*(r[i]-i);
  }
  int z=0;
  for(map<int,int>::iterator it=M.begin();it!=M.end();it++){
    P[it->first] = z + it->second;
    z += it->second;
  }
  M[0]=1;P[0]=0;
  M[inf]=1;P[inf]=z;
  int k,val;
  while(m--){
    map <int,int> ::iterator o;
    scanf("%s",s1);
    scanf("%d",&k);
    scanf("%s",s2);
    o = M.lower_bound(k);
    if(s1[0]=='='){
      if(o->first!=k)
        val=0;
      else
        val = o->second;
    }
    else if(s1[0]=='<'){
      if(o->first!=k){
        o--;
        val = P[o->first];
      }
      else
        val = P[o->first]-M[o->first];
    }
    else{
      if(o->first==k){
        val = ((n)*(n+1))/2-P[k];
      }
      else{
        o--;
        val = ((n)*(n+1))/2-P[o->first];
      }
    }
    if(val&1){
      printf("%c",s2[0]);
    }
    else{
      if(s2[0]=='C')printf("D");
      else printf("C");
    }
  }
  printf("\n");
  return 0;
}