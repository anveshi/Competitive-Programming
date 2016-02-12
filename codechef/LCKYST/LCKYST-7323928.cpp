#include <bits/stdc++.h>
#define O(Z) cout << Z << endl
using namespace std;
long long x;
long long Nos(long long a,long long b){
  if(a%b!=0)
    return 0;
  else 
    return Nos(a/b,b)+1;
}
int main(){
  int n;
  scanf("%d",&n);
  for(int i=0;i<n;i++){
    scanf("%lld",&x);
    long long  p2 = Nos(x,2);
    long long  p5 = Nos(x,5);
    if(p2<p5){
      x<<=(p5-p2);
      if((p5-p2)&1)
        x<<=1;
    }
    O(x);
  }
  return 0;
}