// Anve$hi $hukla
#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
vector <LL> V;
LL O;

LL Sum(LL idx){
  LL P = idx/9;
  LL ret  = P*O;
  LL k = idx%9;
  if(k!=0){
    for(int i=0;i<k;i++)
      ret += V[i];
  }
  return ret;
}

int main(){
  LL T,A,D;
  LL L,R;
  scanf("%lld",&T);  
  while(T--){
    scanf("%lld %lld %lld %lld",&A,&D,&L,&R);
    V.clear();
    for(int i=0;i<9;i++){
      LL Y = (A+i*D)%9;
      if(!Y)
        Y = 9;
      V.push_back(Y);
    }
    O = accumulate(V.begin(),V.end(),0LL);  
    LL ans = Sum(R) - Sum(L-1);
    printf("%lld\n",ans);
  }
  return 0;
}