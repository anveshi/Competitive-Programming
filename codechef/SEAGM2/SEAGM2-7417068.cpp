#include <bits/stdc++.h>
using namespace std;
int N,M,T;
long double P[15][10005];
long double CumP[15];
long double Pkoijeete,Pserejajeete;
long double mino = 1e-4000L;
long double maxo = 1e4000L;
int m1,m2;
int cnt1[20];
int main(){    
  scanf("%d",&T);
  while(T--){
    scanf("%d %d",&N,&M);
    for(int i=0;i<=N;i++){
      CumP[i] = 1.000000;
      cnt1[i]=0;
    }
    for(int i=1;i<=N;i++){
      for(int j=1;j<=M;j++){
        scanf("%Lf",&P[i][j]);
        CumP[i] = CumP[i]*P[i][j];
        if(CumP[i]<mino){
          CumP[i]*=maxo;
          cnt1[i]-=1;
        }
        if(CumP[i]>maxo){
          CumP[i]*=mino;
          cnt1[i]-=1;
        }
      }
    }
    m1 = cnt1[1];
    m2 = cnt1[1];
    for(int i=2;i<=N;i++){
      m2 = max(m2,cnt1[i]);
    }
    long double ans;
    if(m2>m1)
      ans=0;
    else{
      Pserejajeete = CumP[1];
      Pkoijeete = 0.000000;
      for(int i=1;i<=N;i++){
        if(cnt1[i]==m2)
          Pkoijeete+=CumP[i];
      }
      if(Pkoijeete==0)
        ans = 0;
      else 
        ans = (long double)Pserejajeete/(long double)Pkoijeete;
    }
    cout.precision(6);
    cout << fixed << ans << endl;
  }
  return 0;
}