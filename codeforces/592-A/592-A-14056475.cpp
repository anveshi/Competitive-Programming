// Anve$hi $hukla

#include <bits/stdc++.h>
using namespace std;

#define TRACE
#ifdef TRACE
#define trace1(x)       cerr<< #x <<": "<<x<<endl;
#define trace2(x, y)    cerr<< #x <<": "<<x<<" | "<< #y <<": "<<y<< endl;
#define trace3(x, y, z) cerr<< #x <<": "<<x<<" | "<< #y <<": "<<y<<" | "<< #z <<": "<<z<< endl;
#else
#define trace1(x)
#define trace2(x, y)
#define trace3(x, y, z)
#endif

typedef long long LL;

inline void fastIO(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
}

char S[9][9];
const int Maxn = 8;

int main(){
  fastIO();
  int ans1 = Maxn,ans2= Maxn;
  for(int i=0;i<Maxn;i++)
    cin >> S[i];

  for(int i=0;i<Maxn;i++){
    for(int j=0;j<Maxn;j++){
      if(S[i][j]=='W'){
        trace2(i,j);

        int flag = 0;
        for(int k=i-1;k>=0;k--){
          if(S[k][j]=='.')
            continue;
          else{
            flag = 1;
            break;
          }
        }
        if(flag==0)
          ans1 = min(i,ans1);
      }
      if(S[i][j]=='B'){
        int flag = 0;
        for(int k=i+1;k<Maxn;k++){
          if(S[k][j]=='.')
            continue;
          else{
            flag = 1;
            break;
          }
        }
        if(flag==0)
          ans2 = min(ans2, 7-i);
      }
    }
  }
  //cout << ans1 << " " << ans2 << endl;
  if(ans1<=ans2)
    printf("A\n");
  else
    printf("B\n");
  return 0;
}