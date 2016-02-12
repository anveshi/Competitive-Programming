#include <bits/stdc++.h>
using namespace std;
int main(){
  int T;
  long long int t1,t2,T1,T2,nr,dr;
  double x;
  scanf("%d",&T);
  while(T--){
    scanf("%lld %lld %lld %lld",&T1,&T2,&t1,&t2);
    nr=0;dr=2*T2*T1;
    if(T2>t1)nr+=((T2-t1)*(T2-t1));
    if(T1>t2)nr+=((T1-t2)*(T1-t2));
    if(T2-t1>T1)nr-=((T2-T1-t1)*(T2-T1-t1));
    if(t2+T2<T1)nr-=((T1-T2-t2)*(T1-T2-t2));
    x = nr/(double)dr;
    printf("%0.9lf\n",1.0-x);
  }
  return 0;
}