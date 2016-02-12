#include <bits/stdc++.h>
using namespace std;
int a[100005];
int main(){
  int n,g;
  scanf("%d",&n);
  for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
  }
  g = __gcd(a[0],a[1]);
  for(int i=2;i<n;i++){
    g = __gcd(g,a[i]);
  }
  for(int i=0;i<n;i++){
    a[i]/=g;
    while(a[i]%2==0){
      a[i]/=2;
    }
    while(a[i]%3==0){
      a[i]/=3;
    }
    if(a[i]!=1){
      printf("No\n");
      return 0;
    }
  }
  printf("Yes\n");
  return 0;
}