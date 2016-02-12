// Anve$hi $hukla
// Until the lion learns how to write, every story will glorify the hunter.

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

const int Maxn = 1100005;
bool is_prime[Maxn];
void seive(){
  is_prime[0] = is_prime[1] = 1;

  for(int i=2;i*i<Maxn;i++){
    if(!is_prime[i])
    for(int j=i*i;j<Maxn;j+=i){
      is_prime[j] = 1;
    }
  }
}

int main(){
  fastIO();
  LL n,x;
  seive();
  cin >> n;
  while(n--){
    cin >> x;
    LL z = sqrt(x);
    if(z*z==x && z!=1 && !is_prime[z])
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }
  return 0;
}