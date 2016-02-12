#include <bits/stdc++.h>
using namespace std;

typedef long long LL;

inline void fastIO(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
}

const int Maxn = 200005;
map <int,int> M;
const int P = 31;
int gethash(string &S){
  int Ans = 0;
  for(int i=0;i<S.length();i++){
    Ans = Ans * P + (S[i] - 'a' + 1);
  }
  return Ans;
}
int main(){
  fastIO();
  int N;
  string S;
  cin >> N;
  for(int i=0;i<N;i++){
    cin >> S;
    int H = gethash(S);
    M[H]++;
    if(M[H]==1){
      cout << "OK" << endl;
    }
    else{
      cout << S << (M[H]-1) << endl;
    }
  }

  return 0;
}