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
void fastIO(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
}

/* This function calculates (ab)%c */
LL modulo(LL a,LL b,LL c){
    long long x=1,y=a; // long long is taken to avoid overflow of LLermediate results
    while(b > 0){
        if(b%2 == 1){
            x=(x*y)%c;
        }
        y = (y*y)%c; // squaring the base
        b /= 2;
    }
    return x%c;
}

/* this function calculates (a*b)%c taking LLo account that a*b might overflow */
long long mulmod(long long a,long long b,long long c){
    long long x = 0,y=a%c;
    while(b > 0){
        if(b%2 == 1){
            x = (x+y)%c;
        }
        y = (y*2)%c;
        b /= 2;
    }
    return x%c;
}

/* Fermat's test for checking primality, the more iterations the more is accuracy */
bool Fermat(long long p,LL iterations){
    if(p == 1){ // 1 isn't prime
        return false;
    }
    for(LL i=0;i<iterations;i++){
        // choose a random LLeger between 1 and p-1 ( inclusive )
        long long a = rand()%(p-1)+1; 
        // modulo is the function we developed above for modular exponentiation.
        if(modulo(a,p-1,p) != 1){ 
            return false; /* p is definitely composite */
        }
    }
    return true; /* p is probably prime */
}
const LL Maxn = 1000005;
vector <LL> primes;
int is_prime[Maxn+11];
void seive(){
  primes.clear();
  for(LL i=2;i*i<=Maxn;i++){
    if(is_prime[i]==0){
      for(LL j=i*i;j<=Maxn;j+=i){
        is_prime[j] = 1;
      }
    }
  }
  for(LL i=2;i<Maxn;i++){
    if(is_prime[i]==0)
      primes.push_back(i);
  }
  return ;
}

int main(){  
  fastIO();
  LL n;
  cin >> n;
  seive();
  if(n<9){
    cout << 1 << endl;
    cout << n << endl;
    return 0;
  }
  else{
    LL k=3;
    LL val1 = 3;
    LL val2,val3;
    n-=3;
    for(LL i=0;i<primes.size();i++){
      val2 = primes[i];
      val3 = n - val2;
      //trace3(val1,val2,val3);
      if(Fermat(val3,60)==1){
        cout << k << endl;
        cout << val1 << " " << val2 <<  " " << val3 << endl;
        return 0;
      }
    }
  }
  return 0;
}