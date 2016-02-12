#include <bits/stdc++.h>
using namespace std;
const int Maxn = 400004;
int a[Maxn];
int dp1[Maxn],dp2[Maxn];
struct node{
  node *first, *second;
  node(node *a, node *b){
    first = a;
    second = b;
  }
};
node *root = new node(NULL,NULL);
void insert(node *x,int bits,int idx){
  if(idx==-1)
    return;
  if((1<<idx)&bits){
    if(x->second==NULL)
      x->second = new node(NULL,NULL);
    insert(x->second, bits, idx-1);
  }
  else{
    if(x->first==NULL)
      x->first = new node(NULL,NULL);
    insert(x->first, bits, idx-1);
  }
}
void query(node *t, int a, int idx, int &ans){
  if(idx==-1) return;
  if((1<<idx)&a){
    if(t->first==NULL)
      query(t->second,a,idx-1,ans);
    else{
      ans+=(1<<idx);
      query(t->first,a,idx-1,ans);
    }
  }
  else{
    if(t->second==NULL)
      query(t->first,a,idx-1,ans);
    else{
      ans+=(1<<idx);
      query(t->second,a,idx-1,ans);
    }
  }
}
int main(){
  int n,curxor;
  scanf("%d",&n);
  for(int i=1;i<=n;i++){
    scanf("%d",a+i);
  }
  dp1[0] = 0;
  curxor = 0;
  insert(root,0,30);
  for(int i=1;i<=n;i++){
    dp1[i] = a[i];
    curxor^=a[i];
    insert(root,curxor,30);
    int ans=0;
    query(root,curxor,30,ans);
    dp1[i] = max(dp1[i-1],dp1[i]);
    dp1[i] = max(dp1[i],ans);
  }
  root=new node(NULL,NULL);
  dp2[n+1] = 0;
  curxor =0;
  insert(root,0,30);
  for(int i=n;i>=1;i--){
    dp2[i] = a[i];
    curxor^=a[i];
    insert(root,curxor,30);
    int ans=0;
    query(root,curxor,30,ans);
    dp2[i] = max(dp2[i+1],dp2[i]);
    dp2[i] = max(dp2[i],ans);
  }
  int res=0;
  for(int i=1;i<=n-1;i++){
    res = max(res,dp1[i]+dp2[i+1]);
  }
  printf("%d\n",res);
  return 0;
}