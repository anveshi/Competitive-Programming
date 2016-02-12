// Anve$hi $hukla

#include <bits/stdc++.h>
using namespace std;

typedef long long LL;

inline void fastIO(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
}

typedef pair <LL,LL> PLL;
vector < PLL > v;

const int Maxn = 200005;

void Print(vector <PLL> &P){
  cout <<  P.size() << endl;
  for(LL i=0;i<P.size();i++)
    cout << P[i].first << " " << P[i].second << endl;   
}

int main(){
  fastIO();
  LL X;
  cin >> X;
  X *= 3; 
  for(LL i=1;i*i*i<=X;i++){
    LL Z = (i*(i+1)/2);
    if(X%Z==0){
      LL Temp = X/Z;
      if((Temp+i-1)%3==0){
        LL Tm = (Temp + i -1)/3;
        if(Tm>=i){
          v.push_back(PLL(i,Tm));
          if(i!=Tm)
            v.push_back(PLL(Tm,i));
        } 
      }
    }
  }
  sort(v.begin(), v.end());
  Print(v);
  return 0;
}