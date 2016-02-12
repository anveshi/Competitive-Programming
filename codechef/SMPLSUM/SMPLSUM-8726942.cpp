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

int phi(int n) {
    int result = n;
    for(int i = 2; i * i <= n; ++i)
        if(n % i == 0) {
            while(n % i == 0)
                n /= i;
            result -= result / i;
        }
    if(n > 1)
        result -= result / n;
    return result;
}

const int Maxn = 10000001;
bool is_prime[Maxn];
LL pf[Maxn],M[Maxn];
void sieve(){
  pf[1] = 1;
  for(int i=2;i<Maxn;i++){
    is_prime[i] = true;
    pf[i] = i;
  }
  
  for(int i=2;i*i<Maxn;i++){
    if(is_prime[i]){
      for(int j=i*i;j<Maxn;j+=i){
        is_prime[j] = false;
        pf[j] = i;
      }
    }
  }
  return;
}


LL solve1(int n){
  LL ans = 0LL;
  for(int i=1;i<=n;i++){
    ans = ans + n/(__gcd(i,n));
  }
  return ans;
}

LL solveK(LL n){
  LL ans = 0;
  for(LL i=1;i*i<=n;i++){
    if(n%i==0){
      ans = ans + phi(i)*i; 
      if((i*i)!=n){
        ans = ans + phi(n/i)*(n/i);
      }
    }
  }
  return ans;
}
LL solve2(LL X){
  
  LL z= pf[X];
  LL ret = ((X*X*z+1LL)/(z+1));
  if(is_prime[X])
  ret = X*(X-1) + 1;
  //LL ret = solveK(X);
  return ret;
}

LL solve3(int N){
  if(M[N]!=-1)
    return M[N];
  LL Temp = N;
  LL x = pf[N];

  while(N%x==0 && N>1)
    N/=x;

  if(N==1){
    M[Temp] = solve2(Temp);
  }
  else{
    M[Temp] = solve3(Temp/N)*solve3(N);
  }
  return M[Temp];
}


int main(){
  int T,N;
  sieve();
  memset(M,-1,sizeof M);
  scanf("%d",&T);
  while(T--){
    scanf("%d",&N); 
    LL Z = solve3(N);
    printf("%lld\n",Z);
  }
  return 0;
}