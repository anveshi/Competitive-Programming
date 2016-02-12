#include <bits/stdc++.h>
using namespace std;
struct Point{
  int x,y;
};
Point P[100005];
int Xrange[2];
int Yrange[2];
void init(int n){
  Xrange[0] = INT_MAX;
  Yrange[0] = INT_MAX;
  Xrange[1] = INT_MIN;
  Yrange[1] = INT_MIN;
  for(int i=0;i<n;i++){
    if(P[i].x<Xrange[0])
      Xrange[0] = P[i].x;
    if(P[i].x>Xrange[1])
      Xrange[1] = P[i].x;
    if(P[i].y<Yrange[0])
      Yrange[0] = P[i].y;
    if(P[i].y>Yrange[1])
      Yrange[1] = P[i].y;
  }
  return ;
}
void check(int i, int &flag){
  if(P[i].x==Xrange[0] && P[i].y==Yrange[0]){
    printf("1\n%d NE\n",i+1);
    flag = 1;
    return;
  }
  if(P[i].x==Xrange[0] && P[i].y==Yrange[1]){
    printf("1\n%d SE\n",i+1);
    flag = 1;
    return;
  }
  if(P[i].x==Xrange[1] && P[i].y==Yrange[0]){
    printf("1\n%d NW\n",i+1);
    flag = 1;
    return;
  }
  if(P[i].x==Xrange[1] && P[i].y==Yrange[1]){
    printf("1\n%d SW\n",i+1);
    flag = 1;
    return;
  }
}
int findminX(int n){
  int val = INT_MAX,ret=0;
  for(int i=0;i<n;i++){
    if(P[i].x<val){
      val = P[i].x;
      ret = i;
    }
  }
  return ret+1;
}
int findsecondminx(int n,int minxIndex){
  int ret = -2;
  int val = INT_MAX;
  for(int i=0;i<n;i++){
    if(P[i].x<val && i+1!=minxIndex){
      val = P[i].x;
      ret = i;
    }
  }
  return ret+1;
}
void solve(int i,int j){
  int idx1 = i-1;
  int idx2 = j-1;
  printf("2\n");
  if(P[idx2].y>=P[idx1].y){
    printf("%d NE\n",idx1+1);
    printf("%d SE\n",idx2+1);
  }
  else{
    printf("%d SE\n",idx1+1);
    printf("%d NE\n",idx2+1);
  }
}
int main(){
  int t,n;
  scanf("%d",&t);
  while(t--){
    scanf("%d",&n);
    for(int i=0;i<n;i++){
      scanf("%d %d",&P[i].x,&P[i].y);
    }
    init(n);
    int flag=0;
    for(int i=0;i<n;i++){
      check(i,flag);
      if(flag)
        break;
    }
    if(flag)
      continue;
    assert(n>2);
    int minxIndex = findminX(n);
    int SecondminxIndex = findsecondminx(n,minxIndex);
    solve(minxIndex, SecondminxIndex);
  }
  return 0;
}