#include <bits/stdc++.h>
using namespace std;

typedef long long LL;

inline void fastIO(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
}

const int Maxn = 100005;

map < pair<int,int>, int > M;
set <pair<int,int> > S[Maxn];
int main(){
  fastIO();
  int T,A,B,C;
  cin >> T;
  while(T--){
    int Available = 1,n,Ans=0;
    M.clear();
    cin >> n;
    for(int i=0;i<n;i++){
      cin >> A >> B >> C;
      int G = __gcd(A,B);
      int G1 = __gcd(C,G);
      if(G1<0)
        G1*=-1;
      A /= G1;
      B /= G1;
      C /= G1;
      G = __gcd(A,B);
      if(G<0)
        G*=-1;
      A /= G;
      B /= G;

      if(A<0){
        A *= -1;
        B *= -1;
        C *= -1;
      }
      else if(A==0 && B<0){
        B *=-1;
        C *= -1;
      }

      if(C<0){
        C *= -1;
        G *= -1;
      }

      if(M.count(make_pair(A,B))==0){
        M[make_pair(A,B)] = Available++;
      }

      int Z = M[make_pair(A,B)];

      S[Z].insert(make_pair(C,G));
      if(S[Z].size() > Ans){
        Ans = S[Z].size();
      }
    }
    for(int i=0;i<=Available;i++){
      S[i].clear();
    }
    cout << Ans << endl;
  }
  return 0;
}