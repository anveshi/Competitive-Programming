// Anve$hi $hukla
#include <bits/stdc++.h>
using namespace std;
vector <int> V;
int O;

long long Sum(long long idx){
  int P = idx/9;
  long long ret  = P*O;
  int k = idx%9;
  if(k!=0){
    for(int i=0;i<k;i++)
      ret += V[i];
  }
  return ret;
}

int main(){
  int T,A,D;
  long long L,R;
  scanf("%d",&T);  
  while(T--){
    scanf("%d %d %lld %lld",&A,&D,&L,&R);
    V.clear();
    for(int i=0;i<9;i++){
      int Y = (A+i*D)%9;
      if(!Y)
        Y = 9;
      V.push_back(Y);
    }

    O = accumulate(V.begin(),V.end(),0);  
    long long ans = Sum(R) - Sum(L-1);
    printf("%lld\n",ans);
  }
  return 0;
}