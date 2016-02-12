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

const LL Maxn = 4005;
pair <LL,LL> A[Maxn], B[Maxn];

int main(){
  fastIO();
  LL n;
  cin >> n;
  for(LL i=0;i<n;i++){
    cin >> A[i].first >> A[i].second;
    if(A[i].first > A[i].second)
      swap(A[i].first, A[i].second);
    B[i] = {A[i].second, A[i].first};
  }

  sort(A,A+n);
  sort(B,B+n);
  reverse(B,B+n);

  LL maxa = 0, maxb = 0,ans =0;
  for(LL i=0;i<n;i++){
    LL t = 0;
    for(int j=0;j<n;j++){
      if(B[j].second < A[i].first)
        continue;
      t++;
      LL temp = t * A[i].first * B[j].first;
      if(ans < temp){
        ans = temp;
        maxa = A[i].first;
        maxb = B[j].first;
      }
    }
  }
  cout << ans << endl << maxa << " " << maxb << endl;
  return 0;
}