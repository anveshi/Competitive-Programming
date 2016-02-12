// Anve$hi $hukla
#include <bits/stdc++.h>
using namespace std;
typedef long long LL;

const LL Maxn = 200005;

inline void fastIO(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
}
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

typedef pair <int,int> pii;
map <pii, int> M; 
int V1[2*Maxn], V2[2*Maxn];

LL C(LL x){
   return ((x*(x-1))/2);
}
int main(){
   fastIO();
   LL n, x, y, diff, add;
   cin >> n;
   for(LL i=0;i<n;i++){
      cin >> x >> y;
      diff = (x-y) + Maxn;
      add = x+y;
      V1[diff]++;
      V2[add]++;
   }

   LL Ans = 0LL;
   for(LL i=0;i< 2*Maxn;i++){
      Ans += C(V1[i]);
      Ans += C(V2[i]);
   }
   cout << Ans << endl;
   return 0;
}