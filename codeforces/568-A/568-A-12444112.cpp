#include <bits/stdc++.h>
using namespace std;
#define mp make_pair
#define pb push_back
#define ff first
#define ss second
#define all(c) (c).begin(),(c).end() 
#define tr(c,it) for(auto it = (c).begin(); it != (c).end(); it++) 
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define TRACE
#ifdef TRACE
#define trace1(x)     	   cerr << #x << ": " << x << endl;
#define trace2(x, y)       cerr << #x << ": " << x << " | " << #y << ": " << y << endl;
#define trace3(x, y, z)    cerr << #x << ": " << x << " | " << #y << ": " << y << " | " << #z << ": " << z << endl;
#define trace4(a, b, c, d) cerr << #a << ": " << a << " | " << #b << ": " << b << " | " << #c << ": " << c << " | " << #d << ": " << d << endl;
#else
#define trace1(x)
#define trace2(x, y)
#define trace3(x, y, z)
#define trace4(a, b, c, d)
#endif
typedef long long LL;
const LL MOD = 1000000007;
const int Maxn = 2000002;
int p[Maxn],r[Maxn],is_prime[Maxn];
bool ispal(int n){
  int temp=n,rev=0;
  while(n){
    rev = rev*10 +(n%10);
    n/=10;
  }
  //cout << rev << " " << temp << endl;
  return (rev==temp);
}
void pre(){
  for(int i=2;i<Maxn;i++){
    is_prime[i] = true;
  }
  for(int i=2;i*i<=Maxn;i++){
    if(is_prime[i]){
      for(int j=i*i;j<Maxn;j+=i){
        is_prime[j]=false;
      }
    }
  }
  for(int i=2;i<Maxn;i++){
    p[i] = p[i-1] + is_prime[i];
  }
  for(int i=1;i<10;i++){
    r[i]=i;
  }
  for(int i=10;i<Maxn;i++){
    r[i] = r[i-1] + ispal(i);
  }
  /*for(int i=Maxn-1;i< Maxn;i++){
    double x = p[i]/(double)r[i];
    cout << p[i] << " " << r[i] << " " << x << endl;
  }*/

}
int main(){
  pre();
  int x,y,ans;
  ans = 2*Maxn;
  cin >> x >> y;
  for(int i=1;i<Maxn;i++){
    if(y*p[i]<=x*r[i]){
      ans = i;
    }
  }
  if(ans==2*Maxn)
    cout << "Palindromic tree is better than splay tree" << endl;
  else
    cout << ans << endl;
	return 0;
}