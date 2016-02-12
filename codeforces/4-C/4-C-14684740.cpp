#include <bits/stdc++.h>
using namespace std;

typedef long long LL;

inline void fastIO(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
}

const int Maxn = 200005;
map <string,int> M;
int main(){
  fastIO();
  int N;
  string S;
  cin >> N;
  for(int i=0;i<N;i++){
    cin >> S;
    M[S]++;
    if(M[S]==1){
      cout << "OK" << endl;
    }
    else{
      cout << S << (M[S]-1) << endl;
    }
  }

  return 0;
}