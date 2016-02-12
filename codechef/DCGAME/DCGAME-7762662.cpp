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
  vector <pair<int,int> > v;
  v.clear();
  v.push_back(make_pair(0,0));
  for(int i=1;i<=n;i++){
    v.push_back(make_pair(a[i],((i-l[i])*(r[i]-i))));
  }
  v.push_back(make_pair(inf,0));
  sort(v.begin(), v.end());
  vector <pair<int,int> > pv(n+2);
  vector <int> pv1,pv2;
  pv1.clear();
  pv2.clear();
  pv1.push_back(0);
  pv2.push_back(0);
  int key = v[1].first;
  int psum = v[1].second;
  for(int i=2;i<=n+1;i++){
    if(key==v[i].first){
      psum+=v[i].second;
      continue;
    }
    else{
      pv1.push_back(key);
      pv2.push_back(psum);
      key = v[i].first;
      psum += v[i].second;
    }
  }
  pv1.push_back(key);
  pv2.push_back(psum);
 /*for(int i=0;i<pv1.size();i++){
    cout << pv1[i] << " " << pv2[i] << endl;
  }*/

  vector <int> ::iterator o,o1;
  int k,val;
  int idx=1,idx1;
  while(m--){
    scanf("%s",s1);
    scanf("%d",&k);
    scanf("%s",s2);
    if(s1[0]=='<'){
      o = lower_bound(pv1.begin(), pv1.end(),k);
      idx = o - pv1.begin();
      val = pv2[idx-1];
      idx--;
      if(pv1[idx]==k){
        val-=pv2[idx];
      }
    }
    else if(s1[0]=='='){
      o = lower_bound(pv1.begin(), pv1.end(),k);
      idx = o - pv1.begin();
      if(pv1[idx]==k)
        val = pv2[idx]- pv2[idx-1];
      else 
        val = 0;
    }
    else{
      o = upper_bound(pv1.begin(), pv1.end(),k);
      idx = o - pv1.begin();
      idx--;
      val = ((n)*(n+1))/2 - pv2[idx];
    }
   // cout << s1[0] << " " <<val << endl;
   // continue;
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